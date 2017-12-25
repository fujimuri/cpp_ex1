//
// Created by fujimuri on 12/24/17.
//

#ifndef CPP_ARENSTORFPOINT_H
#define CPP_ARENSTORFPOINT_H
// like this?
#define alpha 0.012299;
#define beta alpha-1;


class ArenstorfPoint
{ // inits the class with the x,y coordinates, vx, and vy
public:
    long double x;
    long double y;
    long double vx;
    long double vy;
};

// operator <<(ostream &os, const ArenstorfPoint& a) : friend method
// ^ writes to the os a string representation of the point in format x,y,vx,vy
// getter functions for x, y, vx, vy

#endif //CPP_ARENSTORFPOINT_H