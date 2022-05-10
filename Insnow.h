#pragma once


// Insnow ダイアログ

class Insnow : public CDialogEx
{
	DECLARE_DYNAMIC(Insnow)

public:
	Insnow(CWnd* pParent = NULL);   // 標準コンストラクター
	virtual ~Insnow();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Insnow };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
};
