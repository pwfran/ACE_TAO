
// -*- C++ -*-
// ImportanceBinPacker_stub_export.h,v 1.1 2005/09/06 19:57:22 tdamiano Exp
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl IMPORTANCEBINPACKER_STUB
// ------------------------------
#ifndef IMPORTANCEBINPACKER_STUB_EXPORT_H
#define IMPORTANCEBINPACKER_STUB_EXPORT_H

#include "ace/config-all.h"

#if !defined (IMPORTANCEBINPACKER_STUB_HAS_DLL)
#  define IMPORTANCEBINPACKER_STUB_HAS_DLL 1
#endif /* ! IMPORTANCEBINPACKER_STUB_HAS_DLL */

#if defined (IMPORTANCEBINPACKER_STUB_HAS_DLL) && (IMPORTANCEBINPACKER_STUB_HAS_DLL == 1)
#  if defined (IMPORTANCEBINPACKER_STUB_BUILD_DLL)
#    define IMPORTANCEBINPACKER_STUB_Export ACE_Proper_Export_Flag
#    define IMPORTANCEBINPACKER_STUB_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define IMPORTANCEBINPACKER_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* IMPORTANCEBINPACKER_STUB_BUILD_DLL */
#    define IMPORTANCEBINPACKER_STUB_Export ACE_Proper_Import_Flag
#    define IMPORTANCEBINPACKER_STUB_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define IMPORTANCEBINPACKER_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* IMPORTANCEBINPACKER_STUB_BUILD_DLL */
#else /* IMPORTANCEBINPACKER_STUB_HAS_DLL == 1 */
#  define IMPORTANCEBINPACKER_STUB_Export
#  define IMPORTANCEBINPACKER_STUB_SINGLETON_DECLARATION(T)
#  define IMPORTANCEBINPACKER_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* IMPORTANCEBINPACKER_STUB_HAS_DLL == 1 */

// Set IMPORTANCEBINPACKER_STUB_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (IMPORTANCEBINPACKER_STUB_NTRACE)
#  if (ACE_NTRACE == 1)
#    define IMPORTANCEBINPACKER_STUB_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define IMPORTANCEBINPACKER_STUB_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !IMPORTANCEBINPACKER_STUB_NTRACE */

#if (IMPORTANCEBINPACKER_STUB_NTRACE == 1)
#  define IMPORTANCEBINPACKER_STUB_TRACE(X)
#else /* (IMPORTANCEBINPACKER_STUB_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define IMPORTANCEBINPACKER_STUB_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (IMPORTANCEBINPACKER_STUB_NTRACE == 1) */

#endif /* IMPORTANCEBINPACKER_STUB_EXPORT_H */

// End of auto generated file.
