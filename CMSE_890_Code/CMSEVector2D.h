#pragma once

#ifndef CMSEVECTOR2D_H
#define CMSEVECTOR2D_H

#include <iostream>

class CMSEVector2D {
public:
  CMSEVector2D();
  CMSEVector2D(double x, double y);
  CMSEVector2D(const CMSEVector2D &);
  ~CMSEVector2D();

  double get_x() const {return x;}
  double get_y() const {return y;}
  void set_x(double val) {x = val;}
  void set_y(double val) {y = val;}

  CMSEVector2D add(const CMSEVector2D &val) const;
  CMSEVector2D sub(const CMSEVector2D &val) const;
  CMSEVector2D mul(double val) const;
  double dot(const CMSEVector2D &val) const;

  CMSEVector2D operator+( const CMSEVector2D &x ) const
  {
    return add(x);
  }
  CMSEVector2D operator-( const CMSEVector2D &val ) const
  {
    return CMSEVector2D( x-val.x, y-val.y );
  }

private:
  double x=0, y=0;

};

//using namespace std;

std::stringstream &operator<<( std::ostream &x, const CMSEVector2D & y)
{
  x<<y.get_x() << " " << y.get_y() //get x and y
  return x; //return the value of x
}


#endif
