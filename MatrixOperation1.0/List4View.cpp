// List4View.cpp : implementation file
//

#include "stdafx.h"
#include "MatrixOperation.h"
#include "List4View.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CList4View

IMPLEMENT_DYNCREATE(CList4View, CFormView)

CList4View::CList4View()
	: CFormView(CList4View::IDD)
{
	//{{AFX_DATA_INIT(CList4View)
	m_MatrixAnswer = _T("");
	//}}AFX_DATA_INIT
}

CList4View::~CList4View()
{
}

void CList4View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CList4View)
	DDX_Text(pDX, IDC_MatrixAnswer, m_MatrixAnswer);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CList4View, CFormView)
	//{{AFX_MSG_MAP(CList4View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CList4View diagnostics

#ifdef _DEBUG
void CList4View::AssertValid() const
{
	CFormView::AssertValid();
}

void CList4View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CList4View message handlers
void CList4View::updateText()
{
  CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
  m_MatrixAnswer=pFrame->MatrixAnswerCString;
  SetDlgItemText(IDC_MatrixAnswer,m_MatrixAnswer);
}