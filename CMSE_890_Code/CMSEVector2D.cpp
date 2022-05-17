#include "CMSEVector2D.h"

CMSEVector2D::CMSEVector2D() : x(0.), y(0.) {}
CMSEVector2D::CMSEVector2D(double x, double y) : x(x), y(y) {}
CMSEVector2D::CMSEVector2D(const CMSEVector2D &other)
{
  x = other.x;
  y = other.y;
}
CMSEVector2D::~CMSEVector2D() {}

CMSEVector2D CMSEVector2D::add(const CMSEVector2D &val) const
{
  return CMSEVector2D( x+val.x, y+val.y );
}

CMSEVector2D CMSEVector2D::sub(const CMSEVector2D &val) const
{
  return CMSEVector2D( x-val.x, y-val.y );
}

CMSEVector2D CMSEVector2D::mul(double val) const
{
  return CMSEVector2D( x*val.x, y*val.y );
}

double CMSEVector2D::dot(const CMSEVector2D &val) const
{
  return x*val.x + y*val.y;
}
