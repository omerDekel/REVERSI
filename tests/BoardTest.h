//
// Created by omer on 26/11/17.
//

#ifndef REVERSYTESTS_BOARDTEST_H
#define REVERSYTESTS_BOARDTEST_H
#include "gtest/gtest.h"
#include "../src/Point.h"
#include "../src/PlayerTypes.h"
#include "../src/Board.h"
#include <iostream>
using namespace std;
class BoardTest: public testing:: Test {
public:
    BoardTest() : counterBlack(5) , counterWhite(3){
    }

protected:
    int counterBlack, counterWhite;
    Point point;
};
#endif //REVERSYTESTS_BOARDTEST_H
