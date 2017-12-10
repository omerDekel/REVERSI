#include <iostream>
#include <algorithm>

#include "ConsolePlayer.h"


ConsolePlayer::ConsolePlayer(const PlayerTypes player_type , const std::string &name) :
        IPlayer(player_type) ,
        m_name(name) {}

Point ConsolePlayer::get_move(const IRules &rules , const Board &board) {

    const std::vector<Point> legal_points = rules.get_legal_moves(board , get_player_type());
    std::cout << m_name << ", your legal moves:" << std::endl;
    for (unsigned int i = 0; i < legal_points.size(); i++) {
        std::cout << "[" << legal_points[i].get_x() << ", " << legal_points[i].get_y() << "]" << std::endl;
    }

    Point point;
    do {
        point = get_player_move_choice();
    } while (legal_points.end() == std::find(legal_points.begin() , legal_points.end() , point));


    return point;
}

Point ConsolePlayer::get_player_move_choice() {
    std::cout << m_name << ", please insert x y: ";
    unsigned int x = 0;
    unsigned int y = 0;
    std::cin >> x >> y;
    while (std::cin.fail()) {
        std::cout << "ERROR,cannot enter a letter!" << std::endl;
        std::cout << m_name << ", please insert x y: ";
        std::cin.clear();
        std::cin.ignore(256 , '\n');
        std::cin >> x >> y;
    }

    return Point(x , y);
}
