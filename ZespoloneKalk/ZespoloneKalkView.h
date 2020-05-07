
// ZespoloneKalkView.h : interface of the CZespoloneKalkView class
//

#pragma once


class CZespoloneKalkView : public CView
{
protected: // create from serialization only
	CZespoloneKalkView();
	DECLARE_DYNCREATE(CZespoloneKalkView)

// Attributes
public:
	CZespoloneKalkDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CZespoloneKalkView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDialogCalc( );
};

#ifndef _DEBUG  // debug version in ZespoloneKalkView.cpp
inline CZespoloneKalkDoc* CZespoloneKalkView::GetDocument() const
   { return reinterpret_cast<CZespoloneKalkDoc*>(m_pDocument); }
#endif

