
#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
using namespace std;

class Circle
{
    private:
        double radius;        // Radius of the circle
        double pi;  
     
    public:
        Circle()
        {
            radius = 1.0;
            pi = 3.14159;
        }

        // Sets the radius of the circle
        void setRadius(double r)       
        {
            radius = r;
        }

        // Gets the radius of the circle
        double getRadius() const       
        { return radius; }

        // Calculates the area of the circle
        double getArea() const           
        { return pi * pow(radius, 2.0); }

        // Calculates the circle's diameter
        double getDiameter() const               
        { return radius * 2.0; }

        // Calculates the circle's circumference
        double getCircumference() const       
        { return 2.0 * (pi * radius); }
};
#endif
