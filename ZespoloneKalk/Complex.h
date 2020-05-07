#pragma once
class CComplex
{
public:
	CComplex( double _re = 0, double _im = 0 );
	CComplex( const CComplex& copy );
	CComplex& operator =( const CComplex& copy );
	~CComplex( );

	double getRe( ) const;
	double getIm( ) const;
	void setIm( double set_im );
	void setRe( double set_re );
	void setComplex( double set_re, double set_im );
	double Module( ) const;
	CComplex Coupled( ) const; //TODO

	CComplex& operator += ( const CComplex& arg );
	CComplex& operator -= ( const CComplex& arg );
	CComplex& operator *= ( const CComplex& arg );
	CComplex& operator /= ( const CComplex& arg );

	friend CComplex operator + ( const CComplex& arg1, const CComplex& arg2 );
	friend CComplex operator - ( const CComplex& arg1, const CComplex& arg2 );
	friend CComplex operator * ( const CComplex& arg1, const CComplex& arg2 );
	friend CComplex operator / ( const CComplex& arg1, const CComplex& arg2 );
	friend bool operator == ( const CComplex& arg1, const CComplex& arg2 );
	friend bool operator != ( const CComplex& arg1, const CComplex& arg2 );
private:
	double m_re;
	double m_im;
};

