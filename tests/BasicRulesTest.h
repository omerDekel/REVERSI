
#ifndef REVERSYTESTS_BASICRULESTEST_H
#define REVERSYTESTS_BASICRULESTEST_H

#include "gtest/gtest.h"
#include "../src/BasicRules.h"
#include "../src/Point.h"
#include <iostream>
using namespace std;
class BasicRulesTest: public  testing:: Test {
public:
    BasicRulesTest() : board(8) , littleBoard(4) {
        //creating the points vector we expect to get after the test .
        Point p1 = Point(2, 3);
        Point p2 = Point(3,2);
        Point p3 = Point(4,5);
        Point p4 = Point (5,4);
        vector<Point> vector1 ;
        vector1.push_back(p1);
        vector1.push_back(p2);
        vector1.push_back(p3);
        vector1.push_back(p4);
        this->points = vector1;
        this->player = PLAYER_TYPE_X;
        //creating the vectors of points we dont expect to get .
        Point p5 = Point(2,3);
        Point p6 = Point(3,2);
        Point p7 = Point(4,5);
        vector<Point> vector2;
        vector2.push_back(p5);
        vector2.push_back(p6);
        vector2.push_back(p7);
        this->points2 = vector2;
        vector<Point> vector3;
        Point p8 = Point(5,2);
        vector3.push_back(p1);
        vector3.push_back(p2);
        vector3.push_back(p3);
        vector3.push_back(p4);
        vector3.push_back(p8);
        this->points3 = vector3;
    };
protected:
    vector<Point> points, points2, points3;
    Board board;
    Board littleBoard;
    PlayerTypes player;
};
#endif //REVERSYTESTS_BASICRULESTEST_H
