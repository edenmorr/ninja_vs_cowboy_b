#include "Point.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;

Point::Point(double Xs_, double Ys_): Xs_(Xs_), Ys_(Ys_){}
Point::Point(): Xs_(0), Ys_(0){}

double Point::getX() const{
    return Xs_;
}
double Point::getY() const{
    return Ys_;
}

void Point::setX(double Xs_){ 
    this->Xs_ = Xs_;
}

void Point::setY(double Ys_){ 
    this->Ys_ = Ys_;
}

double Point::distance(const Point& other) {
    return sqrt( pow(this->getX() - other.getX(), 2) * 1.0 + pow(this->getY() - other.getY(), 2) * 1.0);
}


 Point Point::moveTowards(Point& src,Point& dst, double distance){

            if(distance < 0){
                throw invalid_argument("distance need to be positive");
            }
            double d = src.distance(dst);
            if(d <= distance){
                return dst;
            }

            double xCor = (dst.getX() - src.getX())/d;
            double yCor = (dst.getY() - src.getY())/d;
      
            double xs = src.getX() + (xCor*distance);
            double ys = src.getY() + (yCor*distance);

            return {xs, ys};
        }


string Point::print() const{
    return "(" + to_string(Xs_) + "," + to_string(Ys_) + ")";
}


