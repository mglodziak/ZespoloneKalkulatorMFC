
// ZespoloneKalkView.cpp : implementation of the CZespoloneKalkView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ZespoloneKalk.h"
#endif

#include "ZespoloneKalkDoc.h"
#include "ZespoloneKalkView.h"
#include "CalcDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZespoloneKalkView

IMPLEMENT_DYNCREATE(CZespoloneKalkView, CView)

BEGIN_MESSAGE_MAP(CZespoloneKalkView, CView)
	ON_COMMAND( ID_DIALOG_CALC, &CZespoloneKalkView::OnDialogCalc )
END_MESSAGE_MAP()

// CZespoloneKalkView construction/destruction

CZespoloneKalkView::CZespoloneKalkView()
{
	// TODO: add construction code here

}

CZespoloneKalkView::~CZespoloneKalkView()
{
}

BOOL CZespoloneKalkView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CZespoloneKalkView drawing

void CZespoloneKalkView::OnDraw(CDC* /*pDC*/)
{
	CZespoloneKalkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CZespoloneKalkView diagnostics

#ifdef _DEBUG
void CZespoloneKalkView::AssertValid() const
{
	CView::AssertValid();
}

void CZespoloneKalkView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CZespoloneKalkDoc* CZespoloneKalkView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZespoloneKalkDoc)));
	return (CZespoloneKalkDoc*)m_pDocument;
}
#endif //_DEBUG


// CZespoloneKalkView message handlers


void CZespoloneKalkView::OnDialogCalc( )
{
	CalcDialog dlg;
	dlg.DoModal( );
	// TODO: Add your command handler code here
}
