#pragma once
# include "Point.h"

class Rect {
    private:
        Point bottomleft;
        Point topright;
        double l,b;
    public:
        void setPoints(const Point &, const Point &);
        void getDimensions(double &, double &);
        double perimeter();

};