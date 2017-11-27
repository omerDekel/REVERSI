//
// Created by omer on 26/11/17.
//

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
ComputerPlayerTest() :notBestMove(Point(2,4)), bestMove(Point(2,2)) , before(8), after(8){
    after.set_cell(Point(2,1), PLAYER_TYPE_X);
    after.set_cell(Point(2,2), PLAYER_TYPE_X);
    after.set_cell(Point(2,3),PLAYER_TYPE_X);

}
protected:
    Point notBestMove;
    Point bestMove;
    Board before;
    Board after;
};
#endif //REVERSYTESTS_COMPUTERPLAYER_TEST_H
