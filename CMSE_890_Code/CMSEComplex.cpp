#include "CMSEComplex.h"
#include <stdio.h>
#include <vector>
const CMSEComplex i(0,1);

CMSEComplex::CMSEComplex()
{
  set_x(0);
  set_y(0);
}

CMSEComplex::CMSEComplex( double r )
{
  set_x(r);
  set_y(0);
}

CMSEComplex::CMSEComplex( double r, double i )
{
  set_x(r);
  set_y(i);
}

CMSEComplex::CMSEComplex( const CMSEVector2D &x )
{
  set_x(x.get_x());
  set_y(x.get_y());
}

CMSEComplex::CMSEComplex( const CMSEComplex &x )
{
  set_x(x.get_x());
  set_y(x.get_y());
}

void CMSEComplex::getRealAndImag( double *real, double *imag ) const
{
  *real = get_x();
  *imag = get_y();
}

double CMSEComplex::getReal() const
{
  return get_x();
}

double CMSEComplex::getImag() const
{
  return get_y();
}

void CMSEComplex::setRealAndImag( double real, double imag )
{
  set_x(real);
  set_y(imag);
}

void CMSEComplex::setReal( double real )
{
  set_x(real);
}

void CMSEComplex::setImag( double imag )
{
  set_y(imag);
}

void CMSEComplex::printString() const
{
  printf("(%g+i*%g)\n", getReal(), getImag());
}

void CMSEComplex::mul(double real, double imag) const
{
  return (x*val.x + x*val.y + y*val.x + y*val.y);
}

void CMSEComplex::div(double real, double imag) const
{
  return (x/val.x + x/val.y + y/val.x + y/val.y);
}

void CMSEComplex::conjugate(double real, double imag) const
{
  return (val.x + i*val.y);
}
