#ifndef REVERSYTESTS_COMPUTERPLAYER_TEST_H
#define REVERSYTESTS_COMPUTERPLAYER_TEST_H

#include "gtest/gtest.h"
#include "../src/BasicRules.h"
#include "../src/Point.h"
#include "../src/ComputerPlayer.h"
#include <iostream>
using namespace std;
class ComputerPlayerTest : public testing:: Test {
public:
ComputerPlayerTest() :notBestMove(Point(2,4)), bestMove(Point(2,2)){

}
protected:
    // the point we dont expect to get in the test on get move from the ComputerPlayer .
    Point notBestMove;
    // the point we expect to get in the test on get move from the ComputerPlayer .
    Point bestMove;
};
#endif //REVERSYTESTS_COMPUTERPLAYER_TEST_H
