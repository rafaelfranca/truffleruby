/*
 * Copyright (c) 2015, 2019 Oracle and/or its affiliates. All rights reserved. This
 * code is released under a tri EPL/GPL/LGPL license. You can use it,
 * redistribute it and/or modify it under the terms of the:
 *
 * Eclipse Public License version 1.0, or
 * GNU General Public License version 2, or
 * GNU Lesser General Public License version 2.1.
 */
package org.truffleruby.core.rope;

import java.util.Arrays;

import org.jcodings.Encoding;

import com.oracle.truffle.api.CompilerDirectives.TruffleBoundary;

public abstract class Rope {

    // NativeRope, RepeatingRope, 3 LeafRope, ConcatRope, SubstringRope, 1 LazyRope
    public static final int NUMBER_OF_CONCRETE_CLASSES = 8;

    // Useful for debugging. Setting to false allow to catch wrong usages.
    protected static final boolean ALLOW_TO_STRING = true;

    private final Encoding encoding;
    private final int byteLength;
    private final int ropeDepth;
    private int hashCode = 0;
    protected byte[] bytes;

    protected Rope(Encoding encoding, int byteLength, int ropeDepth, byte[] bytes) {
        assert encoding != null;

        this.encoding = encoding;
        this.byteLength = byteLength;
        this.ropeDepth = ropeDepth;
        this.bytes = bytes;
    }

    public abstract Rope withEncoding(Encoding newEncoding, CodeRange newCodeRange);

    public abstract int characterLength();

    public final int byteLength() {
        return byteLength;
    }

    public final boolean isEmpty() {
        return byteLength == 0;
    }

    protected abstract byte getByteSlow(int index);

    public final byte[] getRawBytes() {
        return bytes;
    }

    public abstract byte[] getBytes();

    protected byte[] getBytesSlow() {
        return RopeOperations.flattenBytes(this);
    }

    public final byte[] getBytesCopy() {
        return getBytes().clone();
    }

    public final Encoding getEncoding() {
        return encoding;
    }

    public abstract CodeRange getCodeRange();

    public final boolean isSingleByteOptimizable() {
        return getCodeRange() == CodeRange.CR_7BIT || getEncoding().isSingleByte();
    }

    public final boolean isAsciiOnly() {
        return getCodeRange() == CodeRange.CR_7BIT;
    }

    public final int depth() {
        return ropeDepth;
    }

    @Override
    @TruffleBoundary
    public int hashCode() {
        if (!isHashCodeCalculated()) {
            hashCode = RopeOperations.hashForRange(this, 1, 0, byteLength);
        }

        return hashCode;
    }

    public final boolean isHashCodeCalculated() {
        return hashCode != 0;
    }

    public final int calculatedHashCode() {
        return hashCode;
    }

    @TruffleBoundary
    public boolean bytesEqual(Rope other) {
        /*
         * What is the right strategy to compare ropes for byte equality? There are lots of options. We're going to
         * force and compare the hash codes, and then flatten for a byte equality. Both the intermediate hash
         * generations of the nodes, and the final Array.equals if needed, should have good inner-loop implementations.
         */
        return this.hashCode() == other.hashCode() && Arrays.equals(this.getBytes(), other.getBytes());
    }

    @Override
    public final boolean equals(Object o) {
        if (this == o) {
            return true;
        }

        if (o instanceof Rope) {
            final Rope other = (Rope) o;

            if (isHashCodeCalculated() && other.isHashCodeCalculated() && (hashCode != other.hashCode)) {
                return false;
            }

            return encoding == other.getEncoding() && byteLength() == other.byteLength() &&
                    Arrays.equals(getBytes(), other.getBytes());
        }

        return false;
    }

    public byte get(int index) {
        if (bytes != null) {
            return bytes[index];
        }

        return getByteSlow(index);
    }

}
