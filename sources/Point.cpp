#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include <cmath>
#include <vector>

using namespace std;
namespace ariel{ 
// Point::Point(){
//     this->x=0.0;
//     this->y=0.0;
// }
Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double xCoord) {
    x = xCoord;
}

void Point::setY(double yCoord) {
    y = yCoord;
}

double Point::distance(Point point) {
    double dx = x - point.getX();
    double dy = y - point.getY();
    return sqrt(dx * dx + dy * dy);
}
void Point::print(){
    cout<< "(" << x << "," << y << ")" << endl;
}
Point Point::moveTowards(Point source, Point destination, double distance){
    if(distance<0){
        throw std::invalid_argument(" invalid distance argument");
    }
double newP_x = destination.getX() - source.getX();
double newP_y = destination.getY() - source.getY();
double rashio = distance/source.distance(destination);//the rasio between the destenation of the dis and source to the distance of the close point
if(rashio>=1){
    rashio=1; // cheacking if the point is close
}
// we will move forwords 
    newP_x+=rashio*source.getX();
    newP_y+=rashio*source.getY();

Point close_point(newP_x,newP_y);
return close_point;
}
}


