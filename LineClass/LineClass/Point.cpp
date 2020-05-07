//
//  Point.c
//  LineClass
//
//  Created by Noah Lindner on 4/28/20.
//  Copyright © 2020 Noah Lindner. All rights reserved.
//

#include <stdio.h>
#include "point.hpp"
#include <iomanip>
#include <sstream>


Point::Point(float x_, float y_)
{
    if (x_ >= 0 && y_ >= 0)
    {
        x = x_;
        y = y_;
    }
    else
    {
        throw "X and Y values must be greater than or equal to zero";
    }
}

string Point::toString()
{

    stringstream stream;
    stream << fixed << setprecision(1) << "X: " << x << ", Y: " << y;
    return stream.str();
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point::Point(){
    
}
