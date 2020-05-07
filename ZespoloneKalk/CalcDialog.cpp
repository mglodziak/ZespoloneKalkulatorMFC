// CalcDialog.cpp : implementation file
//

#include "stdafx.h"
#include "ZespoloneKalk.h"
#include "CalcDialog.h"
#include "afxdialogex.h"
#include "Complex.h"



// CalcDialog dialog

IMPLEMENT_DYNAMIC(CalcDialog, CDialog)

CalcDialog::CalcDialog(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG1, pParent)
	, m_im1( 0 )
	, m_im2( 0 )
	, m_re1( 0 )
	, m_re2( 0 )
	, m_re_wynik_wartosc( 0 )
	, m_im_wynik_wartosc( 0 )
	, m_radio( 0 )
{

}

CalcDialog::~CalcDialog()
{
}

void CalcDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange( pDX );
	DDX_Text( pDX, IDC_EDIT_IM1, m_im1 );
	DDX_Text( pDX, IDC_EDIT_IM2, m_im2 );
	DDX_Text( pDX, IDC_EDIT_RE1, m_re1 );
	DDX_Text( pDX, IDC_EDIT_RE2, m_re2 );
	DDX_Text( pDX, IDC_WYNIK_WARTOSC_RE, m_re_wynik_wartosc );
	DDX_Text( pDX, IDC_WYNIK_WARTOSC_IM, m_im_wynik_wartosc );
	DDX_Radio( pDX, IDC_RADIO_PLUS, m_radio );
}


BEGIN_MESSAGE_MAP(CalcDialog, CDialog)

	ON_BN_CLICKED( IDC_BUTTON_WYJSCIE, &CalcDialog::OnBnClickedWyjscie )
	ON_BN_CLICKED( IDC_BUTTON_OBLICZ, &CalcDialog::OnBnClickedOblicz )
	ON_BN_CLICKED( IDC_BUTTON_MODUL1, &CalcDialog::OnBnClickedModul1 )
	ON_BN_CLICKED( IDC_BUTTON_SPRZEZONA1, &CalcDialog::OnBnClickedSprzezona1 )
	ON_BN_CLICKED( IDC_BUTTON_MODUL2, &CalcDialog::OnBnClickedModul2 )
	ON_BN_CLICKED( IDC_BUTTON_SPRZEZONA2, &CalcDialog::OnBnClickedSprzezona2 )
END_MESSAGE_MAP()


// CalcDialog message handlers



void CalcDialog::OnBnClickedWyjscie( )
{
	CDialog::EndDialog( 0 );
	// TODO: Add your control notification handler code here
}


void CalcDialog::OnBnClickedOblicz( )
{
	UpdateData( );
	CComplex zespolona1( m_re1, m_im1 );
	CComplex zespolona2( m_re2, m_im2 );
	CComplex wynik;
//	m_re_wynik_wartosc = zespolona1.getRe( );
//	m_im_wynik_wartosc = zespolona1.getIm( );
	if( m_radio == 0 )
	{
		wynik = zespolona1 + zespolona2;
		m_re_wynik_wartosc = wynik.getRe( );
		m_im_wynik_wartosc = wynik.getIm( );
	}
	else if( m_radio == 1 )
	{
		wynik = zespolona1 - zespolona2;
		m_re_wynik_wartosc = wynik.getRe( );
		m_im_wynik_wartosc = wynik.getIm( );
	}
	else if( m_radio == 2 )
	{
		wynik = zespolona1 * zespolona2;
		m_re_wynik_wartosc = wynik.getRe( );
		m_im_wynik_wartosc = wynik.getIm( );
	}
	else if( m_radio == 3 )
	{
		wynik = zespolona1 / zespolona2;
		m_re_wynik_wartosc = wynik.getRe( );
		m_im_wynik_wartosc = wynik.getIm( );
	}
	UpdateData( FALSE );
}


void CalcDialog::OnBnClickedModul1( )
{
	UpdateData( );
	CComplex zespolona( m_re1, m_im1 );
	CComplex wynik;
	wynik = zespolona.Module( );
	m_re_wynik_wartosc = wynik.getRe( );
	m_im_wynik_wartosc = wynik.getIm( );
	UpdateData( FALSE );
}


void CalcDialog::OnBnClickedSprzezona1( )
{
	UpdateData( );
	CComplex zespolona ( m_re1, m_im1 );
	CComplex wynik(zespolona.Coupled( ));
	m_re_wynik_wartosc = wynik.getRe( );
	m_im_wynik_wartosc = wynik.getIm( );
	UpdateData( FALSE );
}


void CalcDialog::OnBnClickedModul2( )
{
	UpdateData( );
	CComplex zespolona( m_re2, m_im2 );
	CComplex wynik;
	wynik = zespolona.Module( );
	m_re_wynik_wartosc = wynik.getRe( );
	m_im_wynik_wartosc = wynik.getIm( );
	UpdateData( FALSE );
}


void CalcDialog::OnBnClickedSprzezona2( )
{
	UpdateData( );
	CComplex zespolona ( m_re2, m_im2 );
	CComplex wynik( zespolona.Coupled( ) );
	m_re_wynik_wartosc = wynik.getRe( );
	m_im_wynik_wartosc = wynik.getIm( );
	UpdateData( FALSE );
}
