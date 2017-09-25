#if !defined(AFX_LIST2VIEW_H__44E4FBAF_ACB5_40EA_8983_3E97AECB2CE8__INCLUDED_)
#define AFX_LIST2VIEW_H__44E4FBAF_ACB5_40EA_8983_3E97AECB2CE8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// List2View.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CList2View form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CList2View : public CFormView
{
protected:
	CList2View();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CList2View)

// Form Data
public:
	//{{AFX_DATA(CList2View)
	enum { IDD = IDD_DIALOG2 };
	CString	m_MatrixA;
	//}}AFX_DATA

// Attributes
public:
// Operations
public:
  void updateText();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CList2View)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CList2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CList2View)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIST2VIEW_H__44E4FBAF_ACB5_40EA_8983_3E97AECB2CE8__INCLUDED_)
