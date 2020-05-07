#include "stdafx.h"
#include "Complex.h"
#include <iostream>
#include <math.h>


CComplex::CComplex( double _re, double _im)
{
	this->m_im = _im;
	this->m_re = _re;
}

CComplex::CComplex( const CComplex& copy )
{
	*this = copy;
}

double CComplex::getRe( ) const 
{
	return m_re;
}

double CComplex::getIm( ) const
{
	return m_im;
}

void CComplex::setIm( double set_im )
{
	m_im = set_im;
}

void CComplex::setRe( double set_re )
{
	m_re = set_re;
}

void CComplex::setComplex( double set_re, double set_im )
{
	m_re = set_re;
	m_im = set_im;
}

double CComplex::Module( ) const
{
	return ( sqrt( m_re*m_re+m_im*m_im ) );
}

CComplex::~CComplex( )
{
	std::cout << "obiekt zostal usuniety" << std::endl;
}

CComplex& CComplex::operator=( const CComplex& copy )
{
	if( this != &copy )
	{
		m_re = copy.getRe( );
		m_im = copy.getIm( );
	}
	return *this;
}

CComplex CComplex::Coupled ( ) const
{
	return CComplex( this->m_re, -this->m_im );
}

CComplex& CComplex::operator += ( const CComplex& arg )
{
	m_re += arg.m_re;
	m_im += arg.m_im;
	return *this;
}

CComplex& CComplex::operator -= ( const CComplex& arg )
{
	m_re -= arg.m_re;
	m_im -= arg.m_im;
	return *this;
}

CComplex& CComplex::operator *= ( const CComplex& arg )
{
	m_re = m_re*arg.m_re - m_im*arg.m_im;
	m_im = m_re*arg.m_im + m_im*arg.m_re;
	return *this;
}

CComplex& CComplex::operator /= ( const CComplex& arg )
{
	m_re = ( m_re*arg.m_re + m_im*arg.m_im ) / ( arg.m_re*arg.m_re + arg.m_im*arg.m_im );
	m_im = ( m_im*arg.m_re - m_re*arg.m_im ) / ( arg.m_re*arg.m_re + arg.m_im*arg.m_im );
	return *this;
}

CComplex operator + ( const CComplex& arg1, const CComplex& arg2 )
{
	CComplex result( arg1 );
	result += arg2;
	return result;
}

CComplex operator - ( const CComplex& arg1, const CComplex& arg2 )
{
	CComplex result( arg1 );
	result -= arg2;
	return result;
}

CComplex operator * ( const CComplex& arg1, const CComplex& arg2 )
{
	CComplex result( arg1 );
	result *= arg2;
	return result;
}

CComplex operator / ( const CComplex& arg1, const CComplex& arg2 )
{
	CComplex result( arg1 );
	result /= arg2;
	return result;
}

bool operator == ( const CComplex& arg1, const CComplex& arg2 )
{
	return ( arg1.m_re == arg2.m_re && arg1.m_im == arg2.m_im );
}

bool operator != ( const CComplex& arg1, const CComplex& arg2 )
{
	return (!( arg1 == arg2 ));
}
