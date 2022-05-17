#pragma once

#include "cmsevector2d.h"
#include <vector> 
class CMSEComplex : public CMSEVector2D {
public:
  CMSEComplex();
  CMSEComplex( double r );
  CMSEComplex( double r, double i );
  CMSEComplex( const CMSEVector2D &x );
  CMSEComplex( const CMSEComplex &x );


  void getRealAndImag( double *real, double *imag ) const;
  double getReal() const;
  double getImag() const;
  void setRealAndImag( double real, double imag );
  void setReal( double real );
  void setImag( double imag );
  void printString() const;
  void mul(double real, double imag) const;
  void div(double real, double imag) const;
  void conjugate() const;


};

//CMSE Complex operators
CMSEComplex operator +( const CMSEComplex &x ) const;
CMSEComplex operator +( const double &r ) const;
CMSEComplex operator -( const CMSEComplex &x ) const;
CMSEComplex operator -( const double &r ) const;
CMSEComplex operator *( const CMSEComplex &x ) const;
CMSEComplex operator *( const double &r ) const;
CMSEComplex operator /( const CMSEComplex &x ) const;
CMSEComplex operator /( const double &r ) const;
CMSEComplex mul( const CMSEComplex &x ) const
CMSEComplex div( const CMSEComplex &x ) const
CMSEComplex conjugate() const
const CMSEComplex i;

// Output to screen
#include <iostream>
std :: ostream & operator << (std :: ostream & stream, const CMSEVector2D & v);

#endif
