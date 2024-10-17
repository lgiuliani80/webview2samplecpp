// Copyright (C) Microsoft Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing
// features. However, files listed here are ALL re-compiled if any one of them is updated
// between builds. Do not add files here that you will be updating frequently as this negates
// the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include "framework.h"
#include <Windowsx.h>
#include <assert.h>
#include <unknwn.h>
#include <winrt/base.h>

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include <wil/com.h>
#include <wil/resource.h>
#include <wrl.h>
#include "WebView2.h"
#endif // PCH_H
