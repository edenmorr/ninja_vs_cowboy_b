#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#pragma once

using namespace std;
namespace ariel{
class Point{

private:
double x;
double y;
 
public:
// Point();
Point(double xcoord, double ycoord);
double getX() const;
double getY() const;
void setX(double xCoord);
void setY(double yCoord);
double distance(Point points);
void print();
static Point moveTowards(Point source, Point destination, double distance);
    };
}