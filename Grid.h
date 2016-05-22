//
// Created by weam on 3/10/16.
//

#ifndef TESTING_GRID_H
#define TESTING_GRID_H
//#include "Global_Variables.h"
#include "Point.h"
#include <cmath>

class Grid{
    public:
        double XLower,XUpper,YLower, YUpper;
        PointMP midpoint;
    int Xcoord , Ycoord;
    int G_id;
    Grid *Parent;
    float G;
    float H;     // Heuristic value
    bool walkable;
    Grid(); // Needs C++11
        Grid(double XLower, double XUpper , double YLower, double YUpper);
    Grid(int xcoord, int ycoord, Grid* parentcell);
   void setXLower(double i) { XLower = i; }
    void setXUpper(double  i) { XUpper = i; }
    void setYLower(double  i) { YLower = i; }
    void setYUpper(double i) { YUpper = i; }
    void setXCoord(int i) { Xcoord = i; }
    void setYCoord(int i) { Ycoord = i; }
    void setGvalue(float g){G=g;}
    float getGvalue(){return G;}
    void setG_id(int i){G_id=i;}
    void setParent(Grid* p){
        Parent=p;
    }
    Grid* getParent(){return Parent;}
    void setWalkable(bool i){ walkable=i;}
    bool getWalkable(){return walkable;}

    double getXLower() { return XLower; }

    double getXUpper() { return XUpper; }
    double getYLower(){return YLower;}

    double getYUpper(){return YUpper;}
    int getXcoord(){return Xcoord;}
    int getYcoord(){return Ycoord; }
    int getG_id(){return G_id;}
    float getF(){
        return G+H;
    }
    // it is the distance between the two nodes , along the X axis and along the y axis.
    float ManHattanDistance(Grid* nodeEnd){
        float x = (float)(fabs(this->Xcoord - nodeEnd->Xcoord));
        float y = (float)(fabs(this->Ycoord - nodeEnd->Ycoord));
        return x+y;
    }


};




#endif //TESTING_GRID_H
