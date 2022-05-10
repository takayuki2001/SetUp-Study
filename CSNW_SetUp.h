
// CSNW_SetUp.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです。
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CCSNW_SetUpApp:
// このクラスの実装については、CSNW_SetUp.cpp を参照してください。
//

class CCSNW_SetUpApp : public CWinApp
{
public:
	CCSNW_SetUpApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CCSNW_SetUpApp theApp;