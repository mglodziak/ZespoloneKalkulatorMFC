
// ZespoloneKalk.h : main header file for the ZespoloneKalk application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CZespoloneKalkApp:
// See ZespoloneKalk.cpp for the implementation of this class
//

class CZespoloneKalkApp : public CWinApp
{
public:
	CZespoloneKalkApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CZespoloneKalkApp theApp;
