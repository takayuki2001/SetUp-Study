#pragma once


// Welcom �_�C�A���O

class Welcom : public CDialogEx
{
	DECLARE_DYNAMIC(Welcom)

public:
	Welcom(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~Welcom();

// �_�C�A���O �f�[�^
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Welcom };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

	DECLARE_MESSAGE_MAP()
private:
	
	
};
