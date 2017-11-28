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
    // the numbers of the black player and white player we expect to get int the test.
    int counterBlack, counterWhite;
};
#endif //REVERSYTESTS_BOARDTEST_H
