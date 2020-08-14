#include <iostream>
#include "Rectangle.h"

int main()
{
 
    Point point1,point3;
    point1.setCoordinates(20,30);
    point3.setCoordinates(10,20);
    
    Rect classrect;
    classrect.setPoints(point1,point3);
    double l,b;
    classrect.getDimensions(l,b);
    
    
    std::cout <<"Perimeter is "<<classrect.perimeter()<<std::endl;
    return 0; 

}