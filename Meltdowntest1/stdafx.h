// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#if !CONSOLE_APP
    #define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#else
    #include <stdio.h>
    #include <tchar.h>
#endif

#if SUPPORT_MFC
    #define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit
    #ifndef VC_EXTRALEAN
        #define VC_EXTRALEAN            // Exclude rarely-used stuff from Windows headers
    #endif
    #include <afx.h>
    #include <afxwin.h>         // MFC core and standard components
    #if !LIB_APP
        #include <afxext.h>         // MFC extensions
        #ifndef _AFX_NO_OLE_SUPPORT
            #include <afxdtctl.h>           // MFC support for Internet Explorer 4 Common Controls
        #endif
        #ifndef _AFX_NO_AFXCMN_SUPPORT
            #include <afxcmn.h>                     // MFC support for Windows Common Controls
        #endif // _AFX_NO_AFXCMN_SUPPORT
        #include <iostream>
    #endif
#endif

#if DLL_APP || WIN_APP  // Windows Header Files:
    #include <windows.h>
#endif

#if WIN_APP // C RunTime Header Files
    #include <stdlib.h>
    #include <malloc.h>
    #include <memory.h>
    #include <tchar.h>
#endif

#if SUPPORT_ATL
    #define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // some CString constructors will be explicit
    #include <atlbase.h>
    #include <atlstr.h>
#endif

// TODO: reference additional headers your program requires here
