#include "Grid.h"
#include "Point.h"

double XLower, XUpper, YLower, YUpper;
PointMP midpoint; 
//double Grid::Grid(double, double, double);
Grid::Grid(double xl, double xu, double yl, double yu){
    Grid::XLower=xl;
    Grid::XUpper=xu;
    Grid::YLower=yl;
    Grid::YUpper=yu;
}

