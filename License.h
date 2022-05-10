#pragma once
#include "afxwin.h"


// License ダイアログ

class License : public CDialogEx
{
	DECLARE_DYNAMIC(License)

public:
	License(CWnd* pParent = NULL);   // 標準コンストラクター
	virtual ~License();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_License };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
private:
	
public:
	
};
