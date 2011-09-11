/*
 * dbg.h
 *
 * Debugging tools. Main features:
 *
 * - D(...) : log message in a printf like syntax
 *
 *  Created on: 08/lug/2011
 *      Author: Cristiano Tagliamonte
 */

#ifndef DBG_H_
#define DBG_H_

/*
// force debug mode
#ifndef DEBUG
#define DEBUG
#endif
*/

// undef to avoid synchronized logging (through mutex)
#define DBG_SAFE

// undef to exclude function names in full debug messages (faster)
#define DBG_FUN_ENABLE

// time format (of time string)
#ifndef DBG_TIME
#define DBG_TIME  "[%d/%m/%Y, %H:%M:%S]  "
#endif

// exception shortcut
#define EX       std::exception&

#define _LINE_   DBG_TOSTRING(__LINE__)
#define _FUN_    __PRETTY_FUNCTION__
#define _CLS_    CLS(*this)
#define CLS(c)   typeid(c).name()

#ifdef DBG_FUN_ENABLE
#define _AT_     __FILE__ " - " _LINE_ " - " + std::string(_FUN_)
#else
#define _AT_     __FILE__ " - " _LINE_
#endif

#define DBG_TOSTRING(x)   DBG_STRINGIFY(x)
#define DBG_STRINGIFY(x)  #x

#ifdef DEBUG

// debug enabled
#define D0(fmt, ...)      dbg0(         fmt, ##__VA_ARGS__)
#define DT(fmt, ...)      dbgT(         fmt, ##__VA_ARGS__)
#define DF(fmt, ...)      dbgF(DBG_LOC, fmt, ##__VA_ARGS__)
#define D0_IF(cond, fmt, ...)  if(cond) { D0(fmt, ##__VA_ARGS__); }
#define DT_IF(cond, fmt, ...)  if(cond) { DT(fmt, ##__VA_ARGS__); }
#define DF_IF(cond, fmt, ...)  if(cond) { DF(fmt, ##__VA_ARGS__); }
#define DBG_PREFIX(s)     dbgPrefix(s)
#define DBG_SUFFIX(s)     dbgSuffix(s)
#define DBG_BTRACE        dbgBacktrace();
#define DBG_BTRACE1(x)    dbgBacktrace(x);
#define DBG_BTRACE2(x,y)  dbgBacktrace(x, y);
#define DBG_SIGNALS       dbgSetupSignals();
#ifdef DBG_FUN_ENABLE
#define DBG_LOC  ("\n    (" _AT_ + ")\n").c_str()
#else
#define DBG_LOC   "\n    (" _AT_ ")\n"
#endif
#define DBG           1

#else	// DEBUG

// debug disabled
#define D0(fmt, ...)
#define DT(fmt, ...)
#define DF(fmt, ...)
#define D0_IF(cond, fmt, ...)
#define DT_IF(cond, fmt, ...)
#define DF_IF(cond, fmt, ...)
#define DBG_PREFIX(s)
#define DBG_SUFFIX(s)
#define DBG_BTRACE
#define DBG_BTRACE1(x)
#define DBG_BTRACE2(x,y)
#define DBG_SIGNALS
#define DBG_LOC        "\n"
#define DBG            0

#endif	// DEBUG

// >>>>>> default debug macro <<<<<<
#define D(fmt, ...)            DF(fmt, ##__VA_ARGS__)
//#define D(fmt, ...)            DT(fmt, ##__VA_ARGS__)
#define D_IF(cond, fmt, ...)   DF_IF(cond, fmt, #__VA_ARGS__); }
//#define D_IF(cond, fmt, ...)   DT_IF(cond, fmt, #__VA_ARGS__); }

// unique key string for syncing debug logging
#define DBG_SYNC_KEY  "__dbg_log__"

#ifdef DBG_SAFE
#define DBG_SYNC  SYNC(DBG_SYNC_KEY);
#else
#define DBG_SYNC
#endif


// default debug function (useful for logging messages also in release mode)
#define dbg(fmt, ...)  dbgF(DBG_LOC, fmt, ##__VA_ARGS__)

#include <unistd.h>
#include <stdio.h>
#include <typeinfo>
#include <string>
#include <exception>

#ifdef DBG_SAFE
#include "mutex.h"
#else
#define SYNC(x)
#define SYNC_F
#define SYNC_C
#endif

// generic callback procedure
typedef void (*DbgProc0)();
typedef void (*DbgProcI)(int);
union DbgProc {
  DbgProc0 p0;
  DbgProcI pI;
  DbgProc(DbgProc0 p) { p0 = p; }
  DbgProc(DbgProcI p) { pI = p; }
};

// set the output stream to store debug messages (default is stderr)
bool  dbgSetStream(FILE* stream);
// get the output stream to store debug messages (default is stderr)
FILE* dbgGetStream();

// set the prefix string to print in every debug message
void dbgSetPrefix(const char*        prefix);
inline
void dbgSetPrefix(const std::string& prefix) { dbgSetPrefix(prefix.c_str()); }
// set the suffix string to print in every debug message
void dbgSetSuffix(const char*        suffix);
inline
void dbgSetSuffix(const std::string& suffix) { dbgSetSuffix(suffix.c_str()); }

// log debug message
void dbg0(const char*        fmt, ...);
void dbg0(const std::string& fmt, ...);
// log debug message with timestamp
void dbgT(const char*        fmt, ...);
void dbgT(const std::string& fmt, ...);
// log full debug message with timestamp and filename/line number
void dbgF(const char* location, const char*        fmt, ...);
void dbgF(const char* location, const std::string& fmt, ...);

// log current debug backtrace (skip = top calls in backtrace to skip)
void dbgBacktrace(int skip = 1, bool timestamp = true);
inline
void dbgBacktrace(bool timestamp) { dbgBacktrace(1, timestamp); }

// register a new function to be called at system shutdown (usually for freeing resources)
bool dbgRegShutdown(DbgProc0 proc);
bool dbgRegShutdown(DbgProcI proc);
bool dbgRegShutdown(DbgProc  proc, bool acceptSigNum);

// signal handlers setup
void dbgSetupSignals();


#endif // DBG_H_