/*
 * This file is part of the EasyLogger Library.
 *
 * Copyright (c) 2015, Armink, <armink.ztl@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Function: It is the configure head file for this library.
 * Created on: 2015-07-30
 */

#ifndef _ELOG_CFG_H_
#define _ELOG_CFG_H_

#include <rtthread.h>

/* enable log output. default open this macro */
#if defined(PKG_EASYLOGGER_ENABLE_OUTPUT)
    #define ELOG_OUTPUT_ENABLE
#endif
/* setting static output log level */
#if defined(PKG_EASYLOGGER_OUTPUT_LVL_ASSERT)
    #define ELOG_OUTPUT_LVL                  ELOG_LVL_VERBOSE
#elif defined(PKG_EASYLOGGER_OUTPUT_LVL_ERROR)
    #define ELOG_OUTPUT_LVL                  ELOG_LVL_ERROR
#elif defined(PKG_EASYLOGGER_OUTPUT_LVL_WARN)
    #define ELOG_OUTPUT_LVL                  ELOG_LVL_WARN
#elif defined(PKG_EASYLOGGER_OUTPUT_LVL_INFO)
    #define ELOG_OUTPUT_LVL                  ELOG_LVL_INFO
#else
    #define ELOG_OUTPUT_LVL                  ELOG_LVL_VERBOSE
#endif
/* enable assert check */
#if defined(PKG_EASYLOGGER_ENABLE_ASSERT)
    #define ELOG_ASSERT_ENABLE
#endif
/* buffer size for every line's log */
#if defined(PKG_EASYLOGGER_LINE_BUF_SIZE)
    #define ELOG_LINE_BUF_SIZE               PKG_EASYLOGGER_LINE_BUF_SIZE
#endif
/* output line number max length */
#define ELOG_LINE_NUM_MAX_LEN                5
/* output filter's tag max length */
#if defined(PKG_EASYLOGGER_FILTER_TAG_MAX_LEN)
    #define ELOG_FILTER_TAG_MAX_LEN          30
#endif
/* output filter's keyword max length */
#if defined(PKG_EASYLOGGER_FILTER_KW_MAX_LEN)
    #define ELOG_FILTER_KW_MAX_LEN           16
#endif
/* output newline sign */
#if defined(PKG_EASYLOGGER_NEWLINE_SIGN_CR)
    #define ELOG_NEWLINE_SIGN                "\r"
#elif defined(PKG_EASYLOGGER_NEWLINE_SIGN_LF)
    #define ELOG_NEWLINE_SIGN                "\n"
#else
    #define ELOG_NEWLINE_SIGN                "\r\n"
#endif
/* enable log color */
#if defined(PKG_EASYLOGGER_ENABLE_COLOR)
    #define ELOG_COLOR_ENABLE
#endif
/* enable asynchronous output mode */
#if defined(PKG_EASYLOGGER_ENABLE_ASYNC_OUTPUT)
    #define ELOG_ASYNC_OUTPUT_ENABLE
#endif
/* buffer size for asynchronous output mode */
#if defined(PKG_EASYLOGGER_ASYNC_OUTPUT_BUF_SIZE)
    #define ELOG_ASYNC_OUTPUT_BUF_SIZE        PKG_EASYLOGGER_ASYNC_OUTPUT_BUF_SIZE
#endif
/* each asynchronous output's log which must end with newline sign */
#if defined(PKG_EASYLOGGER_ASYNC_LINE_OUTPUT)
    #define ELOG_ASYNC_LINE_OUTPUT
#endif
///* asynchronous output mode using POSIX pthread implementation */
#if defined(PKG_EASYLOGGER_ASYNC_OUTPUT_USING_PTHREAD)
    #define ELOG_ASYNC_OUTPUT_USING_PTHREAD
#endif
///* enable buffered output mode */
//#define ELOG_BUF_OUTPUT_ENABLE
///* buffer size for buffered output mode */
//#define ELOG_BUF_OUTPUT_BUF_SIZE             (ELOG_LINE_BUF_SIZE * 10)
/* enable flash plugin */
#if defined(PKG_EASYLOGGER_ENABLE_PLUGIN_FLASH)
    #define ELOG_FLASH_ENABLE
#endif

#endif /* _ELOG_CFG_H_ */
