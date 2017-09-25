// MatrixOperationDoc.h : interface of the CMatrixOperationDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATRIXOPERATIONDOC_H__6FA63D90_CAFE_417B_8441_965DE4817AE8__INCLUDED_)
#define AFX_MATRIXOPERATIONDOC_H__6FA63D90_CAFE_417B_8441_965DE4817AE8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMatrixOperationDoc : public CDocument
{
protected: // create from serialization only
	CMatrixOperationDoc();
	DECLARE_DYNCREATE(CMatrixOperationDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatrixOperationDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMatrixOperationDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMatrixOperationDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATRIXOPERATIONDOC_H__6FA63D90_CAFE_417B_8441_965DE4817AE8__INCLUDED_)
