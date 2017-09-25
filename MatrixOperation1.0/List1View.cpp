// List1View.cpp : implementation file
//

#include "stdafx.h"
#include "MatrixOperation.h"
#include "MainFrm.h"
#include "List1View.h"
#include "Matrix.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CList1View

IMPLEMENT_DYNCREATE(CList1View, CFormView)

CList1View::CList1View()
	: CFormView(CList1View::IDD)
{
	//{{AFX_DATA_INIT(CList1View)
	m_ROWA = _T("");
	m_ROWB = _T("");
	m_COLUMNA = _T("");
	m_COLUMNB = _T("");
	//}}AFX_DATA_INIT
	m_TYPE = 0;
	typeA = -1;
	typeB = -1;
}

CList1View::~CList1View()
{
}

void CList1View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CList1View)
	DDX_Text(pDX, IDC_ROWA, m_ROWA);
	DDX_Text(pDX, IDC_ROWB, m_ROWB);
	DDX_Text(pDX, IDC_COLUMNA, m_COLUMNA);
	DDX_Text(pDX, IDC_COLUMNB, m_COLUMNB);
	DDX_Radio(pDX, IDC_RADIO1, m_TYPE);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CList1View, CFormView)
	//{{AFX_MSG_MAP(CList1View)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CList1View diagnostics

#ifdef _DEBUG
void CList1View::AssertValid() const
{
	CFormView::AssertValid();
}

void CList1View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CList1View message handlers

//Button Functions

void CList1View::OnButton1() //A*B
{
	// TODO: Add your control notification handler code here
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	if(typeA!=typeB||typeA!=m_TYPE){
		pFrame->ViewAnswer(_T("Matrix TYPE isn't corresponding."));
	}else
    if(m_TYPE==0)
	{
		intrt=intA.MultiLeft(intB);
		if(intrt.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(intrt.output());
	}
	else
	{
		doublert=doubleA.MultiLeft(doubleB);
		if(doublert.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(doublert.output());
	}
	
}

void CList1View::OnButton2() //B*A
{
	// TODO: Add your control notification handler code here
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	if(typeA!=typeB||typeA!=m_TYPE){
		pFrame->ViewAnswer(_T("Matrix TYPE isn't corresponding."));
	}else
    if(m_TYPE==0)
	{
		intrt=intA.MultiRight(intB);
		if(intrt.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(intrt.output());
	}
	else
	{
		doublert=doubleA.MultiRight(doubleB);
		if(doublert.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(doublert.output());
	}
}

void CList1View::OnButton3() //Dotpt
{
	// TODO: Add your control notification handler code here
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	if(typeA!=typeB||typeA!=m_TYPE){
		pFrame->ViewAnswer(_T("Matrix TYPE isn't corresponding."));
	}else
	if(m_TYPE==0)
	{
		intrt.m_Row=intrt.m_Col=0;
		intrt.m_Element=NULL;
		if(intA.m_Row*intA.m_Col==1)
			intrt=intB.DotPt(intA.m_Element[0]);
		else if(intB.m_Row*intB.m_Col==1)
			intrt=intA.DotPt(intB.m_Element[0]);

		if(intrt.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(intrt.output());
	}
	else
	{
		doublert.m_Row=doublert.m_Col=0;
		doublert.m_Element=NULL;
		if(doubleA.m_Row*doubleA.m_Col==1)
			doublert=doubleB.DotPt(doubleA.m_Element[0]);
		else if(doubleB.m_Row*doubleB.m_Col==1)
			doublert=doubleA.DotPt(doubleB.m_Element[0]);

		if(doublert.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(doublert.output());
	}
}

void CList1View::OnButton4() //A-B
{
	// TODO: Add your control notification handler code here
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	if(typeA!=typeB||typeA!=m_TYPE){
		pFrame->ViewAnswer(_T("Matrix TYPE isn't corresponding."));
	}else
	if(m_TYPE==0)
	{
		intrt=intA.Minus(intB);
		if(intrt.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(intrt.output());
	}
	else
	{
		doublert=doubleA.Minus(doubleB);
		if(doublert.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(doublert.output());
	}
}

void CList1View::OnButton5() //A+B
{
	// TODO: Add your control notification handler code here
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	if(typeA!=typeB||typeA!=m_TYPE){
		pFrame->ViewAnswer(_T("Matrix TYPE isn't corresponding."));
	}else
    if(m_TYPE==0)
	{
		intrt=intA.Plus(intB);
		if(intrt.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(intrt.output());
	}
	else
	{
		doublert=doubleA.Plus(doubleB);
		if(doublert.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(doublert.output());
	}
}

void CList1View::OnButton6() //Transpose
{
	// TODO: Add your control notification handler code here
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	if(typeA!=typeB||typeA!=m_TYPE){
		pFrame->ViewAnswer(_T("Matrix TYPE isn't corresponding."));
	}else
	if(m_TYPE==0)
	{
		intrt=intrt.Transpos();
		if(intrt.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(intrt.output());
	}
	else
	{
		doublert=doublert.Transpos();
		if(doublert.m_Element==NULL)pFrame->ViewAnswer(_T("ERROR!"));else pFrame->ViewAnswer(doublert.output());
	}
}

void CList1View::OnButton7() //Generate A
{
	// TODO: Add your control notification handler code here
	GetDlgItemText(IDC_ROWA,m_ROWA);
	GetDlgItemText(IDC_COLUMNA,m_COLUMNA);
	CString x;
	int r=atoi(m_ROWA.GetBuffer(m_ROWA.GetLength()));
	int c=atoi(m_COLUMNA.GetBuffer(m_ROWA.GetLength()));
	typeA=m_TYPE;
    if(m_TYPE==0)
	{
		CMatrix<int> A(r,c);
		intA=A;
		x=intA.output();
	}
    else
	{
		CMatrix<double> A(r,c);
		doubleA=A;
		x=doubleA.output();
	}
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	pFrame->MatrixA(x);
}

void CList1View::OnButton8() //Generate B
{
	// TODO: Add your control notification handler code here
	GetDlgItemText(IDC_ROWB,m_ROWB);
	GetDlgItemText(IDC_COLUMNB,m_COLUMNB);
    CString x;
	int r=atoi(m_ROWB.GetBuffer(m_ROWB.GetLength()));
	int c=atoi(m_COLUMNB.GetBuffer(m_ROWB.GetLength()));
	typeB=m_TYPE;
    if(m_TYPE==0)
	{
		CMatrix<int> B(r,c);
		intB=B;
		x=intB.output();
	}
    else
	{
		CMatrix<double> B(r,c);
		doubleB=B;
		x=doubleB.output();
	}
	CMainFrame* pFrame=(CMainFrame*)AfxGetMainWnd();
	pFrame->MatrixB(x);
}

void CList1View::OnRadio() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
}
