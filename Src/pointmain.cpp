#include <iostream>
# include "Point.h"

int main() {
 Point p1;
 p1.setCoordinates(10, 20);
 Point p2;
 p2.setCoordinates(0, 10);
 double x1,y1;

 //std::cout << "Coordinates of p1 is " << p1.getcoordinates(x1, y1) <<std::endl;
 std::cout << "Distance = " << p1.calcDistance(p2) << std::endl;
}