

#define CATCH_CONFIG_MAIN
#include <iostream>
#include <string>
#include "catch.hpp"
#include "point.hpp"
#include "Line.hpp"

using namespace std;

TEST_CASE("To string")
{
    SECTION("Testing Constructor"){
        try
        {
            Point(-1, 2);
            FAIL();
        }
        catch (...)
        {
            SUCCEED();
        }

        try
        {
            Point(1, -2);
            FAIL();
        }
        catch (...)
        {
            SUCCEED();
        }

    }
    SECTION("Testing toString()")
    {
        Point testP(1, 2);
        try
        {
            testP.toString();
            SUCCEED();
        }
        catch (...)
        {
            FAIL();
        }
        REQUIRE(testP.toString() == "X: 1.0, Y: 2.0");
    }

    SECTION("Testing Getters"){
        Point testP(1.0, 2.0);
        REQUIRE(abs(testP.getX() - 1.0) <= 0.0000001);
        REQUIRE(abs(testP.getY() - 2.0) <= 0.0000001);

    }

	SECTION("Making a Line") {
        try{
            Point p1(5.0,3.0);
            Line testL(p1,p1);
            FAIL();
            //we want this to fail...
        }
        catch(...){
            SUCCEED();
        }
	}
    
    SECTION("Testing onLine"){
        Line testL(Point(2.5, 4.7),Point(3.8, 5.3));
        Point testP(6.0, 10.4);
        REQUIRE(!testL.onLine(testP));
        
        Line testL2(Point(2.0, 4.0),Point(4.0, 4.0));
        Point testP2(3.0, 4.0);
        REQUIRE(testL2.onLine(testP2));
    }
    
    SECTION("Testing Length"){
        Line testL(Point(2.0,4.0),Point(5.5, 6.0));
        REQUIRE(testL.length());
    }
    
    SECTION("Testing is paralell"){
        Line testL1(Point(1.0,1.0),Point(2.0,2.0));
        Line testL2(Point(2.0,2.0),Point(4.0,4.0));
        REQUIRE(testL1.isParallel(testL2));
        
        Line testL3(Point(1.0,1.0),Point(5.0,5.0));
        Line testL4(Point(1.0,4.0),Point(4.0,1.0));
        REQUIRE(!testL3.isParallel(testL4));
    }
    

    SECTION("Testing doesCross"){
        Line testL1(Point(1.0,1.0),Point(5.0,5.0));
        Line testL2(Point(1.0,5.0),Point(5.0,1.0));
        REQUIRE(testL1.doesCross(testL2));
        
        Line testL3(Point(1.0,1.0),Point(2.0,2.0));
        Line testL4(Point(2.0,2.0),Point(4.0,4.0));
        REQUIRE(!testL3.doesCross(testL4));

    }

}
