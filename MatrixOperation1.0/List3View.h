#if !defined(AFX_LIST3VIEW_H__C52BE907_8BED_4387_8736_AD697AD408BD__INCLUDED_)
#define AFX_LIST3VIEW_H__C52BE907_8BED_4387_8736_AD697AD408BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// List3View.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CList3View form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CList3View : public CFormView
{
protected:
	CList3View();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CList3View)

// Form Data
public:
	//{{AFX_DATA(CList3View)
	enum { IDD = IDD_DIALOG3 };
	CString	m_MatrixB;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:
   void updateText();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CList3View)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CList3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CList3View)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIST3VIEW_H__C52BE907_8BED_4387_8736_AD697AD408BD__INCLUDED_)
