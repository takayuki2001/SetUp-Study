#pragma once


// Compleate ダイアログ

class Compleate : public CDialogEx
{
	DECLARE_DYNAMIC(Compleate)

public:
	Compleate(CWnd* pParent = NULL);   // 標準コンストラクター
	virtual ~Compleate();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Compleate };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
};
