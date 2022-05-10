// Welcom.cpp : 実装ファイル
//

#include "stdafx.h"
#include "CSNW_SetUp.h"
#include "Welcom.h"
#include "afxdialogex.h"


// Welcom ダイアログ

IMPLEMENT_DYNAMIC(Welcom, CDialogEx)

Welcom::Welcom(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Welcom, pParent)
{

}

Welcom::~Welcom()
{
}

void Welcom::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDW_AppName, m_WAppName);
	CWnd* pWndApn = GetDlgItem(IDW_AppName);
	CWnd* pWndMsg = GetDlgItem(IDC_WelcomMesg);

	static LOGFONT fontc;

	fontc.lfHeight = 24;
	fontc.lfWidth = 0;
	fontc.lfEscapement = 0;
	fontc.lfOrientation = 0;
	fontc.lfWeight = FW_BOLD;
	fontc.lfItalic = FALSE;
	fontc.lfUnderline = FALSE;
	fontc.lfStrikeOut = FALSE;
	fontc.lfCharSet = DEFAULT_CHARSET;
	fontc.lfOutPrecision = OUT_DEFAULT_PRECIS;
	fontc.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	fontc.lfQuality = DEFAULT_QUALITY;
	fontc.lfPitchAndFamily = DEFAULT_PITCH;
	
	static CFont font;
	
	font.CreateFontIndirect(&fontc);

	pWndApn->SetFont(&font);
	
	TCHAR sn[256];
	LoadString(GetModuleHandle(NULL),IDS_SoftName, sn, sizeof(sn) / sizeof(sn[0]));

	pWndApn->SetWindowText(sn);
	
	static LOGFONT fontc2;

	fontc2.lfHeight = 15;
	fontc2.lfWidth = 0;
	fontc2.lfEscapement = 0;
	fontc2.lfOrientation = 0;
	fontc2.lfWeight = FW_NORMAL;
	fontc2.lfItalic = FALSE;
	fontc2.lfUnderline = FALSE;
	fontc2.lfStrikeOut = FALSE;
	fontc2.lfCharSet = DEFAULT_CHARSET;
	fontc2.lfOutPrecision = OUT_DEFAULT_PRECIS;
	fontc2.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	fontc2.lfQuality = DEFAULT_QUALITY;
	fontc2.lfPitchAndFamily = DEFAULT_PITCH;

	static CFont font2;

	font2.CreateFontIndirect(&fontc2);

	pWndMsg->SetFont(&font2);
	
}


BEGIN_MESSAGE_MAP(Welcom, CDialogEx)
END_MESSAGE_MAP()


// Welcom メッセージ ハンドラー
