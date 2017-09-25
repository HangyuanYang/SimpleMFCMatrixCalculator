// MatrixOperationDoc.cpp : implementation of the CMatrixOperationDoc class
//

#include "stdafx.h"
#include "MatrixOperation.h"

#include "MatrixOperationDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationDoc

IMPLEMENT_DYNCREATE(CMatrixOperationDoc, CDocument)

BEGIN_MESSAGE_MAP(CMatrixOperationDoc, CDocument)
	//{{AFX_MSG_MAP(CMatrixOperationDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationDoc construction/destruction

CMatrixOperationDoc::CMatrixOperationDoc()
{
	// TODO: add one-time construction code here

}

CMatrixOperationDoc::~CMatrixOperationDoc()
{
}

BOOL CMatrixOperationDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationDoc serialization

void CMatrixOperationDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationDoc diagnostics

#ifdef _DEBUG
void CMatrixOperationDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMatrixOperationDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMatrixOperationDoc commands
