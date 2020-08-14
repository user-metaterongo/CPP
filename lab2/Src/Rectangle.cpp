#include <iostream>
#include "Rectangle.h"
//#include "Point.h"


void Rect:: setPoints(const Point &point1, const Point &point3){//p1 bhane thyo
    this->bottomleft = point1;
    this->topright= point3;
}
void Rect ::getDimensions(double &l, double &b)
{
    // Point point2;
    // point2.setCoordinates(bottomleft.x,topright.y);

    
      Point point2,point4;
     double x1,y1,x2,y2;
     bottomleft.getcoordinates(x1,y1);     //need to define getcoordinate in Point class
     topright.getcoordinates(x2,y2);

     point2.setCoordinates(x2,y1);
     point4.setCoordinates(x1,y2);
     
     

    
//optional
    //Point point4; 
    //point4.setCoordinates(point3.x,point1.y);

    this-> l= bottomleft.calcDistance(point2); // previously used point1 in bottomleft ani scope milena
    this->b= point2.calcDistance(topright);
    printf("\n");
    std::cout<<"Length is "<<this->l<<" and breadth is "<<this->b<<std::endl;

}
double Rect::perimeter(){

    return (2*(l+b));
}
