#pragma once
#include "afxwin.h"


// License �_�C�A���O

class License : public CDialogEx
{
	DECLARE_DYNAMIC(License)

public:
	License(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~License();

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_License };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
private:
	
public:
	
};
