#pragma once


// CalcDialog dialog

class CalcDialog : public CDialog
{
	DECLARE_DYNAMIC(CalcDialog)

public:
	CalcDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~CalcDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	double m_im1;
	double m_im2;
	double m_re1;
	double m_re2;
public:
	afx_msg void OnDialogCalc( );
	afx_msg void OnBnClickedWyjscie( );

private:
	double m_re_wynik_wartosc;
	double m_im_wynik_wartosc;
public:
	afx_msg void OnBnClickedOblicz( );
private:
	int m_radio;
public:
	afx_msg void OnBnClickedModul1( );
	afx_msg void OnBnClickedSprzezona1( );
	afx_msg void OnBnClickedModul2( );
	afx_msg void OnBnClickedSprzezona2( );
};
