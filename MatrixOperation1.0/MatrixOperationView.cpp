// MatrixOperationView.cpp : implementation of the CMatrixOperationView class
//

#include "stdafx.h"
#include "MatrixOperation.h"

#include "MatrixOperationDoc.h"
#include "MatrixOperationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationView

IMPLEMENT_DYNCREATE(CMatrixOperationView, CView)

BEGIN_MESSAGE_MAP(CMatrixOperationView, CView)
	//{{AFX_MSG_MAP(CMatrixOperationView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationView construction/destruction

CMatrixOperationView::CMatrixOperationView()
{
	// TODO: add construction code here

}

CMatrixOperationView::~CMatrixOperationView()
{
}

BOOL CMatrixOperationView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationView drawing

void CMatrixOperationView::OnDraw(CDC* pDC)
{
	CMatrixOperationDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationView printing

BOOL CMatrixOperationView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMatrixOperationView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMatrixOperationView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationView diagnostics

#ifdef _DEBUG
void CMatrixOperationView::AssertValid() const
{
	CView::AssertValid();
}

void CMatrixOperationView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMatrixOperationDoc* CMatrixOperationView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMatrixOperationDoc)));
	return (CMatrixOperationDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationView message handlers
