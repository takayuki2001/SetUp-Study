#pragma once


// Compleate �_�C�A���O

class Compleate : public CDialogEx
{
	DECLARE_DYNAMIC(Compleate)

public:
	Compleate(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~Compleate();

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Compleate };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
};
