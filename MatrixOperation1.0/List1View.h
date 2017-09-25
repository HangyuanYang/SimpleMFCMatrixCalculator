#if !defined(AFX_LIST1VIEW_H__07780D46_1436_4503_8BF1_870D7A532C0D__INCLUDED_)
#define AFX_LIST1VIEW_H__07780D46_1436_4503_8BF1_870D7A532C0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// List1View.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CList1View form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif
#include "Matrix.h"
using namespace std;

class CList1View : public CFormView
{
protected:
	CList1View();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CList1View)

// Form Data
public:
	//{{AFX_DATA(CList1View)
	enum { IDD = IDD_DIALOG1 };
	CString	m_ROWA;
	CString	m_ROWB;
	CString	m_COLUMNA;
	CString	m_COLUMNB;
	//}}AFX_DATA

// Attributes
public:
    CMatrix<int> intA;
    CMatrix<int> intB;
    CMatrix<double> doubleA;
    CMatrix<double> doubleB;
	CMatrix<int> intrt;
	CMatrix<double> doublert;
	int m_TYPE;
	int typeA;
	int typeB;
	CString ERR;
// Operations
public:
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CList1View)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CList1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CList1View)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnRadio();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIST1VIEW_H__07780D46_1436_4503_8BF1_870D7A532C0D__INCLUDED_)

