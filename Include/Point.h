#pragma once

//#ifndef POINT_H
//#define POINT_H
class Point {
private:
    double x;
    double y;
public:
    void setCoordinates(double x, double y);
     void getcoordinates(double &, double &); //
    double calcDistance(const Point &anotherPoint); //anotherPoint can be excluded in header file and Const makes the method constant and cant change x,y of another
};
//#endif