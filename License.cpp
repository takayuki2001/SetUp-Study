// License.cpp : �����t�@�C��
//

#include "stdafx.h"
#include "CSNW_SetUp.h"
#include "License.h"
#include "afxdialogex.h"


// License �_�C�A���O

IMPLEMENT_DYNAMIC(License, CDialogEx)

License::License(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_License, pParent)
{

}

License::~License()
{
}

void License::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_CHECK1, m_installdirEditBoxrmsCheckBox);
}


BEGIN_MESSAGE_MAP(License, CDialogEx)
END_MESSAGE_MAP()


// License ���b�Z�[�W �n���h���[


