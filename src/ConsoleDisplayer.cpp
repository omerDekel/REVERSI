//Dana Chapnik  203059167 .
// Omer Dekel 203737168 .


#include <string>
#include <iostream>
#include <map>

#include "ConsoleDisplayer.h"

void ConsoleDisplayer::display(const Board &board) const {
    const CellMatrix &cells = board.get_cells();
    const unsigned int num_rows = board.get_num_rows();
    const unsigned int num_cols = board.get_num_columns();

    std::cout << " |";
    for (unsigned int i = 0; i < num_cols; i++) {
        std::cout << " " << i << " |";
    }
    std::cout << std::endl;

    std::string line_separator = "--";
    for (unsigned int i = 0; i < num_cols; i++) {
        line_separator += "----";
    }

    std::cout << line_separator << std::endl;


    std::map<PlayerTypes , std::string> cells_strings;
    cells_strings[PLAYER_TYPE_O] = " O ";
    cells_strings[PLAYER_TYPE_X] = " X ";
    cells_strings[PLAYER_TYPE_NONE] = "   ";

    for (unsigned int i = 0; i < num_rows; i++) {
        std::cout << i << "|";
        const std::vector<PlayerTypes> &row = cells[i];
        for (unsigned int j = 0; j < num_cols; j++) {
            std::cout << cells_strings.at(row[j]) << "|";
        }
        std::cout << std::endl << line_separator << std::endl;
    }
}

void ConsoleDisplayer::display_game_over(const PlayerTypes player) const {
    std::cout << "    Game Over!" << std::endl;

    std::string winner_string;
    switch (player) {
        case PLAYER_TYPE_X:
            winner_string = "Player X WON!";
            break;

        case PLAYER_TYPE_O:
            winner_string = "Player O WON!";
            break;

        default:
            winner_string = "It's a tie!";
            break;
    }
    std::cout << winner_string << std::endl;
}
