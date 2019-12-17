// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Ftn1.h"
#include "CSonDlg.h"
#include "afxdialogex.h"
#include "Ftn1Dlg.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CSonDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기

void CSonDlg::OnBnClickedButton1()
{
	CMy20191030ClassDlg* p = (CMy20191030ClassDlg *)GetParent();
	CString m;
	GetDlgItemText(IDC_EDIT1, m);
	if (!m.IsEmpty()) {
		p->m_List.AddString(m);
	}
}
