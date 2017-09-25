// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MatrixOperation.h"

#include "List1View.h"
#include "List2View.h"
#include "List3View.h"
#include "List4View.h"
#include "MainFrm.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	srand(time(NULL));
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO: Add your specialized code here and/or call the base class
	CRect cr;
	GetWindowRect( &cr );

	//创建一个静态分栏窗口，分为二行一列
	if(m_wndSplitter.CreateStatic(this,2,1)==NULL)return FALSE;
	//将CList1View连接到0行0列窗格上
	m_wndSplitter.CreateView(0,0,RUNTIME_CLASS(CList1View),CSize(cr.Width(), 2*cr.Height()/5), pContext);
	//将第1行0列再分开1行3列
	if(m_wndSplitter1.CreateStatic(&m_wndSplitter,1,3,WS_CHILD|WS_VISIBLE, m_wndSplitter.IdFromRowCol(1, 0))==NULL)
	return FALSE; 
	//将CList2View类连接到第二个分栏对象的0行0列
	m_wndSplitter1.CreateView(0,0,RUNTIME_CLASS(CList2View),CSize(cr.Width()/3,3*cr.Height()/5),pContext);
	//将CList3View类连接到第二个分栏对象的1行0列
	m_wndSplitter1.CreateView(0,1,RUNTIME_CLASS(CList3View),CSize(cr.Width()/3,3*cr.Height()/5),pContext);
	//将CList4View类连接到第二个分栏对象的2行0列
	m_wndSplitter1.CreateView(0,2,RUNTIME_CLASS(CList4View),CSize(cr.Width()/3,3*cr.Height()/5),pContext);

	return TRUE;
	// return CFrameWnd::OnCreateClient(lpcs, pContext);
}

void CMainFrame::Answer()
{
	
}

void  CMainFrame::MatrixA(CString x)
{
	MatrixACString=x;
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	CList2View* pView=(CList2View*)pFrame->m_wndSplitter1.GetPane(0,0);
	pView->updateText();
}

void  CMainFrame::MatrixB(CString x)
{
	MatrixBCString=x;
    CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	CList3View* pView=(CList3View*)pFrame->m_wndSplitter1.GetPane(0,1);
	pView->updateText();
}

void CMainFrame::ViewAnswer(CString x)
{
	MatrixAnswerCString=x;
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	CList4View* pView=(CList4View*)pFrame->m_wndSplitter1.GetPane(0,2);
	pView->updateText();
}