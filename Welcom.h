#pragma once


// Welcom ダイアログ

class Welcom : public CDialogEx
{
	DECLARE_DYNAMIC(Welcom)

public:
	Welcom(CWnd* pParent = NULL);   // 標準コンストラクター
	virtual ~Welcom();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Welcom };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
private:
	
	
};
