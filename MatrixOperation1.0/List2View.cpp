// List2View.cpp : implementation file
//

#include "stdafx.h"
#include "MatrixOperation.h"
#include "List2View.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CList2View

IMPLEMENT_DYNCREATE(CList2View, CFormView)

CList2View::CList2View()
	: CFormView(CList2View::IDD)
{
	//{{AFX_DATA_INIT(CList2View)
	m_MatrixA = _T("");
	//}}AFX_DATA_INIT
	//CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT1); 
    //pEdit-> SetReadOnly(TRUE); // 设置只读
}

CList2View::~CList2View()
{
}

void CList2View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CList2View)
	DDX_Text(pDX, IDC_MatrixA, m_MatrixA);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CList2View, CFormView)
	//{{AFX_MSG_MAP(CList2View)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CList2View diagnostics

#ifdef _DEBUG
void CList2View::AssertValid() const
{
	CFormView::AssertValid();
}

void CList2View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CList2View message handlers

//更新矩阵A
void CList2View::updateText()
{
  CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
  m_MatrixA=pFrame->MatrixACString;
  SetDlgItemText(IDC_MatrixA,m_MatrixA);
}
