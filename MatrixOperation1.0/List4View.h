#if !defined(AFX_LIST4VIEW_H__3BC0F79F_D9B6_48B3_A5D3_D4E729283815__INCLUDED_)
#define AFX_LIST4VIEW_H__3BC0F79F_D9B6_48B3_A5D3_D4E729283815__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// List4View.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CList4View form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CList4View : public CFormView
{
protected:
	CList4View();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CList4View)

// Form Data
public:
	//{{AFX_DATA(CList4View)
	enum { IDD = IDD_DIALOG4 };
	CString	m_MatrixAnswer;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:
  void updateText();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CList4View)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CList4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CList4View)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIST4VIEW_H__3BC0F79F_D9B6_48B3_A5D3_D4E729283815__INCLUDED_)
