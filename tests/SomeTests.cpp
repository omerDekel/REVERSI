
#include "gtest/gtest.h"
#include "BasicRulesTest.h"
#include "ComputerPlayerTest.h"
#include "BoardTest.h"
TEST(TestSomething, Test1) {
    EXPECT_EQ(1,1);
}

/**
 * check the function get move from the ComputerPlayer .
 */
TEST_F(ComputerPlayerTest, getMove) {
    Board board(8);
    board.set_cell(Point(2,3), PLAYER_TYPE_X);
    board.set_cell(Point(3,3),PLAYER_TYPE_X);
    BasicRules basicRules;
    ComputerPlayer computerPlayer(PLAYER_TYPE_O);
    EXPECT_NE(this->notBestMove ,computerPlayer.get_move(basicRules, board));
    EXPECT_EQ(this->bestMove, computerPlayer.get_move(basicRules, board));

}
/**
 * check the function is in board from the board  
 */
TEST_F(BoardTest, is_in_board) {
    Board board(8);
    Point point1(3,4);
    Point point2(9,9);
    EXPECT_EQ(true, board.is_in_board(point1));
    EXPECT_NE(true, board.is_in_board(point2));
}

/**
  * check the function count_player_cells from the board
 */
TEST_F(BoardTest, count_player_cells) {
    Board board(8);
    board.set_cell(Point(1,1), PLAYER_TYPE_X);
    board.set_cell(Point(0,0), PLAYER_TYPE_O);
    board.set_cell(Point(2,1), PLAYER_TYPE_X);
    board.set_cell(Point(6,5), PLAYER_TYPE_X);
    EXPECT_EQ(this->counterWhite, board.count_player_cells(PLAYER_TYPE_O));
    EXPECT_EQ(this->counterBlack, board.count_player_cells(PLAYER_TYPE_X));
}

/**
 * check the function get_legal_moves from BasicRules.
 */
TEST_F(BasicRulesTest, LegalMoves) {
    BasicRules basicRules;
    vector<Point> vector2 = basicRules.get_legal_moves(board,PLAYER_TYPE_X);
    EXPECT_EQ(this->points, vector2);
    EXPECT_NE(this->points3, vector2);
    EXPECT_NE(this->points2 , vector2);
    EXPECT_EQ(basicRules.get_winner(this->littleBoard) , PLAYER_TYPE_NONE);
}
