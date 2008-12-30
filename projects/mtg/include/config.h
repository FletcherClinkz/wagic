#ifndef _DEBUG_H_
#define _DEBUG_H_

#if defined (WIN32) || defined (LINUX)
#define TESTSUITE 1
#endif

#if defined (_DEBUG) && defined (WIN32)
#include "crtdbg.h"
#define NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#else
#define NEW new
#endif

#ifdef LINUX
#ifdef _DEBUG
#define OutputDebugString(val) (std::cerr << val);
#else
#define OutputDebugString(val) {}
#endif
#endif

#ifndef RESPATH
#define RESPATH "Res"
#endif

#endif
