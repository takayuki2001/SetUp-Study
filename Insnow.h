#pragma once


// Insnow �_�C�A���O

class Insnow : public CDialogEx
{
	DECLARE_DYNAMIC(Insnow)

public:
	Insnow(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~Insnow();

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Insnow };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
};
