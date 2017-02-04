/*
 * Copyright (c) 2016 Oracle and/or its affiliates. All rights reserved. This
 * code is released under a tri EPL/GPL/LGPL license. You can use it,
 * redistribute it and/or modify it under the terms of the:
 *
 * Eclipse Public License version 1.0
 * GNU General Public License version 2
 * GNU Lesser General Public License version 2.1
 */

#ifndef RUBYSPEC_CAPI_TRUFFLERUBY_H
#undef RUBYSPEC_CAPI_TRUFFLERUBY_H

/* Bignum */
#if RUBY_VERSION_BEFORE(2,2,0)
#undef HAVE_RBIGNUM_NEGATIVE_P
#undef HAVE_RBIGNUM_POSITIVE_P
#undef HAVE_RBIGNUM_SIGN
#undef HAVE_RBIGNUM_LEN
#endif
#undef HAVE_RB_BIG2DBL
#undef HAVE_RB_DBL2BIG
#undef HAVE_RB_BIG2LL
#undef HAVE_RB_BIG2LONG
#undef HAVE_RB_BIG2STR
#undef HAVE_RB_BIG2ULONG
#undef HAVE_RB_BIG_CMP
#undef HAVE_RB_BIG_PACK

/* Class */
#undef HAVE_RB_CALL_SUPER
#undef HAVE_RB_CLASS_NAME
#undef HAVE_RB_CLASS_NEW
#undef HAVE_RB_CLASS_NEW_INSTANCE
#undef HAVE_RB_CLASS_PATH
#undef HAVE_RB_CLASS_REAL
#undef HAVE_RB_CVAR_DEFINED
#undef HAVE_RB_CVAR_GET
#undef HAVE_RB_CVAR_SET
#undef HAVE_RB_CV_GET
#undef HAVE_RB_CV_SET
#undef HAVE_RB_DEFINE_ATTR
#undef HAVE_RB_DEFINE_CLASS_VARIABLE
#undef HAVE_RB_INCLUDE_MODULE
#undef HAVE_RB_PATH2CLASS
#undef HAVE_RB_PATH_TO_CLASS
#undef HAVE_RB_CLASS_SUPERCLASS

/* Data */
#undef HAVE_DATA_WRAP_STRUCT
#undef HAVE_RDATA

#undef HAVE_TYPEDDATA_WRAP_STRUCT
#undef HAVE_RTYPEDDATA

/* Encoding */
#undef HAVE_ENCODING_GET
#undef HAVE_ENCODING_SET
#undef HAVE_ENC_CODERANGE_ASCIIONLY

#undef HAVE_RB_ASCII8BIT_ENCODING
#undef HAVE_RB_ASCII8BIT_ENCINDEX
#undef HAVE_RB_USASCII_ENCODING
#undef HAVE_RB_USASCII_ENCINDEX
#undef HAVE_RB_UTF8_ENCODING
#undef HAVE_RB_UTF8_ENCINDEX
#undef HAVE_RB_LOCALE_ENCODING
#undef HAVE_RB_LOCALE_ENCINDEX
#undef HAVE_RB_FILESYSTEM_ENCODING
#undef HAVE_RB_FILESYSTEM_ENCINDEX

#undef HAVE_RB_DEFAULT_INTERNAL_ENCODING
#undef HAVE_RB_DEFAULT_EXTERNAL_ENCODING

#undef HAVE_RB_ENCDB_ALIAS
#undef HAVE_RB_ENC_ASSOCIATE
#undef HAVE_RB_ENC_ASSOCIATE_INDEX
#undef HAVE_RB_ENC_CODEPOINT_LEN
#undef HAVE_RB_ENC_COMPATIBLE
#undef HAVE_RB_ENC_COPY
#undef HAVE_RB_ENC_FIND
#undef HAVE_RB_ENC_FIND_INDEX
#undef HAVE_RB_ENC_FROM_ENCODING
#undef HAVE_RB_ENC_FROM_INDEX
#undef HAVE_RB_ENC_GET
#undef HAVE_RB_ENC_GET_INDEX
#undef HAVE_RB_ENC_SET_INDEX
#undef HAVE_RB_ENC_STR_CODERANGE
#undef HAVE_RB_ENC_STR_NEW
#undef HAVE_RB_ENC_TO_INDEX
#undef HAVE_RB_OBJ_ENCODING

#undef HAVE_RB_STR_ENCODE
#undef HAVE_RB_USASCII_STR_NEW
#undef HAVE_RB_USASCII_STR_NEW_CSTR
#undef HAVE_RB_EXTERNAL_STR_NEW
#undef HAVE_RB_EXTERNAL_STR_NEW_CSTR
#undef HAVE_RB_EXTERNAL_STR_NEW_WITH_ENC

#undef HAVE_RB_TO_ENCODING
#undef HAVE_RB_TO_ENCODING_INDEX
#undef HAVE_RB_ENC_NTH

#undef HAVE_RSTRING_LENINT
#undef HAVE_TIMET2NUM

#undef HAVE_RB_LONG2INT
#undef HAVE_RB_INTERN3

#undef HAVE_RB_ITER_BREAK
#undef HAVE_RB_SOURCEFILE
#undef HAVE_RB_SOURCELINE
#undef HAVE_RB_METHOD_BOUNDP

/* Enumerable */
#undef HAVE_RB_ENUMERATORIZE

/* Exception */
#undef HAVE_RB_EXC_NEW
#undef HAVE_RB_EXC_NEW2
#undef HAVE_RB_EXC_NEW3
#undef HAVE_RB_EXC_RAISE
#undef HAVE_RB_SET_ERRINFO

/* File */
#undef HAVE_RB_FILE_OPEN
#undef HAVE_RB_FILE_OPEN_STR
#undef HAVE_FILEPATHVALUE

/* Globals */
#undef HAVE_RB_DEFAULT_RS
#undef HAVE_RB_DEFINE_HOOKED_VARIABLE
#undef HAVE_RB_DEFINE_READONLY_VARIABLE
#undef HAVE_RB_DEFINE_VARIABLE
#undef HAVE_RB_F_GLOBAL_VARIABLES
#undef HAVE_RB_GV_GET
#undef HAVE_RB_GV_SET
#undef HAVE_RB_RS
#undef HAVE_RB_OUTPUT_RS
#undef HAVE_RB_OUTPUT_FS
#undef HAVE_RB_STDERR
#undef HAVE_RB_STDIN
#undef HAVE_RB_STDOUT
#undef HAVE_RB_DEFOUT

#undef HAVE_RB_LASTLINE_SET
#undef HAVE_RB_LASTLINE_GET

/* Hash */
#undef HAVE_RB_HASH
#undef HAVE_RB_HASH_DUP
#undef HAVE_RB_HASH_FREEZE
#undef HAVE_RB_HASH_AREF
#undef HAVE_RB_HASH_ASET
#undef HAVE_RB_HASH_CLEAR
#undef HAVE_RB_HASH_DELETE
#undef HAVE_RB_HASH_DELETE_IF
#undef HAVE_RB_HASH_FOREACH
#undef HAVE_RB_HASH_LOOKUP
#undef HAVE_RB_HASH_LOOKUP2
#undef HAVE_RB_HASH_NEW
#ifdef RUBY_VERSION_IS_2_1
#undef HAVE_RB_HASH_SET_IFNONE
#endif
#ifdef RUBY_VERSION_IS_2_2
#undef HAVE_RB_HASH_SIZE
#endif

/* Integer */
#ifdef RUBY_VERSION_IS_2_1
#undef HAVE_RB_INTEGER_PACK
#endif

/* IO */
#undef HAVE_GET_OPEN_FILE
#undef HAVE_RB_IO_ADDSTR
#undef HAVE_RB_IO_CHECK_IO
#undef HAVE_RB_IO_CHECK_CLOSED
#undef HAVE_RB_IO_TAINT_CHECK
#undef HAVE_RB_IO_CHECK_READABLE
#undef HAVE_RB_IO_CHECK_WRITABLE
#undef HAVE_RB_IO_CLOSE
#undef HAVE_RB_IO_PRINT
#undef HAVE_RB_IO_PRINTF
#undef HAVE_RB_IO_PUTS
#undef HAVE_RB_IO_WAIT_READABLE
#undef HAVE_RB_IO_WAIT_WRITABLE
#undef HAVE_RB_IO_WRITE
#undef HAVE_RB_IO_BINMODE

#undef HAVE_RB_THREAD_FD_WRITABLE
#undef HAVE_RB_THREAD_WAIT_FD

#undef HAVE_RB_FD_FIX_CLOEXEC
#undef HAVE_RB_CLOEXEC_OPEN

/* Kernel */
#undef HAVE_RB_BLOCK_GIVEN_P
#undef HAVE_RB_BLOCK_PROC
#undef HAVE_RB_BLOCK_CALL
#undef HAVE_RB_ENSURE
#undef HAVE_RB_EVAL_STRING
#undef HAVE_RB_EXEC_RECURSIVE
#undef HAVE_RB_F_SPRINTF
#undef HAVE_RB_NEED_BLOCK
#undef HAVE_RB_RAISE
#undef HAVE_RB_RESCUE
#undef HAVE_RB_RESCUE2
#undef HAVE_RB_SET_END_PROC
#undef HAVE_RB_SYS_FAIL
#undef HAVE_RB_SYSERR_FAIL
#undef HAVE_RB_MAKE_BACKTRACE
#undef HAVE_RB_THROW
#undef HAVE_RB_CATCH
#undef HAVE_RB_THROW_OBJ
#undef HAVE_RB_CATCH_OBJ
#undef HAVE_RB_WARN
#undef HAVE_RB_YIELD
#undef HAVE_RB_YIELD_SPLAT
#undef HAVE_RB_YIELD_VALUES
#undef HAVE_RB_FUNCALL3
#undef HAVE_RB_FUNCALL_WITH_BLOCK

/* Marshal */
#undef HAVE_RB_MARSHAL_DUMP
#undef HAVE_RB_MARSHAL_LOAD

/* Numeric */
#undef HAVE_NUM2CHR
#undef HAVE_RB_CMPINT
#undef HAVE_RB_INT2INUM
#undef HAVE_RB_INTEGER
#undef HAVE_RB_LL2INUM
#undef HAVE_RB_NUM2DBL
#if SIZEOF_INT < SIZEOF_LONG
#undef HAVE_RB_NUM2INT
#undef HAVE_RB_NUM2UINT
#endif
#undef HAVE_RB_NUM2LONG
#undef HAVE_RB_INT2NUM
#undef HAVE_RB_NUM2ULONG
#undef HAVE_RB_NUM_COERCE_BIN
#undef HAVE_RB_NUM_COERCE_CMP
#undef HAVE_RB_NUM_COERCE_RELOP
#undef HAVE_RB_NUM_ZERODIV

/* Range */
#undef HAVE_RB_RANGE_NEW
#undef HAVE_RB_RANGE_VALUES

/* Regexp */
#undef HAVE_RB_BACKREF_GET
#undef HAVE_RB_REG_MATCH
#undef HAVE_RB_REG_NEW
#undef HAVE_RB_REG_NTH_MATCH
#undef HAVE_RB_REG_OPTIONS
#undef HAVE_RB_REG_REGCOMP

/* String */
#undef HAVE_RB_CSTR2INUM
#undef HAVE_RB_CSTR_TO_INUM
#undef HAVE_RB_STR2INUM
#undef HAVE_RB_STR_APPEND
#undef HAVE_RB_STR_BUF_CAT
#undef HAVE_RB_STR_BUF_NEW2
#undef HAVE_RB_STR_CAT
#undef HAVE_RB_STR_CAT2
#undef HAVE_RB_STR_CMP
#undef HAVE_RB_STR_DUP
#undef HAVE_RB_STR_FLUSH
#undef HAVE_RB_STR_FREEZE
#undef HAVE_RB_STR_HASH
#undef HAVE_RB_STR_UPDATE
#undef HAVE_RB_STR_INSPECT
#undef HAVE_RB_STR_INTERN
#undef HAVE_RB_STR_NEW3
#undef HAVE_RB_STR_NEW4
#undef HAVE_RB_STR_NEW5
#undef HAVE_RB_STR_PLUS
#undef HAVE_RB_STR_RESIZE
#undef HAVE_RB_STR_SET_LEN
#undef HAVE_RB_STR_SPLIT
#undef HAVE_RB_STR_SUBSTR
#undef HAVE_RB_STR_TO_STR
#undef HAVE_STRINGVALUE

#undef HAVE_RB_STR_FREE
#undef HAVE_RB_SPRINTF
#undef HAVE_RB_LOCALE_STR_NEW
#undef HAVE_RB_LOCALE_STR_NEW_CSTR
#undef HAVE_RB_STR_CONV_ENC
#undef HAVE_RB_STR_CONV_ENC_OPTS
#undef HAVE_RB_STR_EXPORT
#undef HAVE_RB_STR_EXPORT_LOCALE
#undef HAVE_RB_STR_LENGTH
#undef HAVE_RB_STR_EQUAL
#undef HAVE_RB_STR_SUBSEQ
#undef HAVE_RB_VSPRINTF

/* Struct */
#undef HAVE_RB_STRUCT_AREF
#undef HAVE_RB_STRUCT_ASET
#undef HAVE_RB_STRUCT_DEFINE
#undef HAVE_RB_STRUCT_NEW
#undef HAVE_RB_STRUCT_GETMEMBER

/* Symbol */
#undef HAVE_RB_ID2NAME
#undef HAVE_RB_ID2STR
#undef HAVE_RB_INTERN_STR
#undef HAVE_RB_IS_CLASS_ID
#undef HAVE_RB_IS_CONST_ID
#undef HAVE_RB_IS_INSTANCE_ID
#ifdef RUBY_VERSION_IS_2_2
#undef HAVE_RB_SYM2STR
#endif

/* Thread */
#undef HAVE_RB_THREAD_ALONE
#if RUBY_VERSION_BEFORE(2,2,0)
#undef HAVE_RB_THREAD_BLOCKING_REGION
#endif
#undef HAVE_RB_THREAD_CALL_WITHOUT_GVL
#undef HAVE_RB_THREAD_CALL_WITHOUT_GVL2
#undef HAVE_RB_THREAD_CURRENT
#undef HAVE_RB_THREAD_LOCAL_AREF
#undef HAVE_RB_THREAD_LOCAL_ASET
#if RUBY_VERSION_BEFORE(2,2,0)
#undef HAVE_RB_THREAD_SELECT
#endif
#undef HAVE_RB_THREAD_WAIT_FOR
#undef HAVE_RB_THREAD_WAKEUP
#undef HAVE_RB_THREAD_CREATE

/* Time */
#undef HAVE_RB_TIME_NEW
#undef HAVE_RB_TIME_NANO_NEW
#undef HAVE_RB_TIME_NUM_NEW
#undef HAVE_RB_TIME_INTERVAL
#undef HAVE_RB_TIME_TIMEVAL
#undef HAVE_RB_TIME_TIMESPEC
#ifdef RUBY_VERSION_IS_2_3
#undef HAVE_RB_TIME_TIMESPEC_NEW
#endif

/* Util */
#undef HAVE_RB_SCAN_ARGS
#undef HAVE_RUBY_SETENV
#undef HAVE_RUBY_STRDUP

#endif
