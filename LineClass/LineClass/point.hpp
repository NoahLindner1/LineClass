//
//  point.hpp
//  LineClass
//
//  Created by Noah Lindner on 4/28/20.
//  Copyright © 2020 Noah Lindner. All rights reserved.
//
#pragma once
#include <string>

using namespace std;

class Point
{
private:
    float x;
    float y;

public:
    float getX();
    float getY();
    string toString();
    Point(float x, float y);
    Point();
};
