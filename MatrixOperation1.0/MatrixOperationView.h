// MatrixOperationView.h : interface of the CMatrixOperationView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATRIXOPERATIONVIEW_H__2D65E026_C2C4_43E7_8B2A_5E5C8CA35408__INCLUDED_)
#define AFX_MATRIXOPERATIONVIEW_H__2D65E026_C2C4_43E7_8B2A_5E5C8CA35408__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMatrixOperationView : public CView
{
protected: // create from serialization only
	CMatrixOperationView();
	DECLARE_DYNCREATE(CMatrixOperationView)

// Attributes
public:
	CMatrixOperationDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatrixOperationView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMatrixOperationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMatrixOperationView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MatrixOperationView.cpp
inline CMatrixOperationDoc* CMatrixOperationView::GetDocument()
   { return (CMatrixOperationDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATRIXOPERATIONVIEW_H__2D65E026_C2C4_43E7_8B2A_5E5C8CA35408__INCLUDED_)
