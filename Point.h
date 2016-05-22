
#ifndef ROBOTINO_CODE_POINT_H
#define ROBOTINO_CODE_POINT_H


class PointMP {
public:
    double X,Y,Angle;
    PointMP(double x=0 , double y =0);
    PointMP(double x, double y , double angle);
    void setX(double i) { X = i; }
    void setY(double i) {Y= i; }
    void setAngle(double i) {Angle= i; }
    double getX() { return X; }

    double getY() { return Y; }
    double getAngle(){ return Angle;}
};


#endif //ROBOTINO_CODE_POINT_H
