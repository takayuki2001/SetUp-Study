
// CSNW_SetUp.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��


// CCSNW_SetUpApp:
// ���̃N���X�̎����ɂ��ẮACSNW_SetUp.cpp ���Q�Ƃ��Ă��������B
//

class CCSNW_SetUpApp : public CWinApp
{
public:
	CCSNW_SetUpApp();

// �I�[�o�[���C�h
public:
	virtual BOOL InitInstance();

// ����

	DECLARE_MESSAGE_MAP()
};

extern CCSNW_SetUpApp theApp;