#include <iostream>
#include <cmath>//cmath hunu parcha
#include "Point.h"
void Point::setCoordinates(double x, double y)
{
    this->x = x;
    this->y = y;

}

double Point::calcDistance (const Point &anotherPoint)
{
 double sq_xdiff = pow(anotherPoint.x - this->x, 2); 
  double sq_ydiff = pow(anotherPoint.y - this->y, 2);
 return sqrt(sq_xdiff + sq_ydiff); 
}

 void Point:: getcoordinates(double &x , double &y) //
{
    x= this->x ;
    y= this->y;
}


