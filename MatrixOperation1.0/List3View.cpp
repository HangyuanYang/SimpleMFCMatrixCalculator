// List3View.cpp : implementation file
//

#include "stdafx.h"
#include "MatrixOperation.h"
#include "List3View.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CList3View

IMPLEMENT_DYNCREATE(CList3View, CFormView)

CList3View::CList3View()
	: CFormView(CList3View::IDD)
{
	//{{AFX_DATA_INIT(CList3View)
	m_MatrixB = _T("");
	//}}AFX_DATA_INIT
}

CList3View::~CList3View()
{
}

void CList3View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CList3View)
	DDX_Text(pDX, IDC_MatrixB, m_MatrixB);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CList3View, CFormView)
	//{{AFX_MSG_MAP(CList3View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CList3View diagnostics

#ifdef _DEBUG
void CList3View::AssertValid() const
{
	CFormView::AssertValid();
}

void CList3View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CList3View message handlers

//¸üÐÂ¾ØÕóB
void CList3View::updateText()
{
  CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
  m_MatrixB=pFrame->MatrixBCString;
  SetDlgItemText(IDC_MatrixB,m_MatrixB);
}