
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include "Game.h"
#include "ConsolePlayer.h"
#include "ComputerPlayer.h"
#include "ConsoleDisplayer.h"
#include "BasicRules.h"
#include "LocalNetworkPlayer.h"
#include "RemoteNetworkPlayer.h"

int main() {
    //1 for choosing against computer, 2 for human ,3 remote player.
    int choose;
    Board board(8);
    int port;
    char ip[20];
    // pointer to IPlayer type (can be computerPlayer or consolePlayer or remote player).
    IPlayer *player_1;
    IPlayer *player_2;
    Socket *socket1 = NULL;
    char playerNum[8];
    std::cout << "Choose your opponent: 1 for computer , 2 for human player, 3 for remote player";
    std::cin >> choose;
    if (choose == 1) {
        player_1 = new ConsolePlayer(PLAYER_TYPE_X , "Player X");
        player_2 = new ComputerPlayer(PLAYER_TYPE_O);
    } else if (choose == 2) {
        player_1 = new ConsolePlayer(PLAYER_TYPE_X , "Player X");
        player_2 = new ConsolePlayer(PLAYER_TYPE_O , "Player O");
    } else if (choose == 3) {
        std::ifstream inFile;
        inFile.open("settings1");
        inFile >> port;
        inFile >> ip;
        socket1 = new Socket();
        socket1->connectToServer(ip , port);
        int n = read(socket1->getM_socket() , playerNum , sizeof(playerNum));
        if (n == -1) {
            throw "Error on accept";
        }
        std::cout << "You're player #" << playerNum << std::endl;
            if (strcmp(playerNum,"1") == 0) {
                player_1 = new LocalNetworkPlayer(PLAYER_TYPE_X , "Player X" , socket1);
                player_2 = new RemoteNetworkPlayer(PLAYER_TYPE_O , socket1);
            } else if (strcmp(playerNum, "2") == 0) {
                player_1 = new RemoteNetworkPlayer(PLAYER_TYPE_X , socket1);
                player_2 = new LocalNetworkPlayer(PLAYER_TYPE_O , "Player O" , socket1);
            }
    }
    ConsoleDisplayer displayer;
    BasicRules rules;

    Game game(player_1 , player_2 , &board , &displayer , &rules);
    //running the game .
    game.run();

    if (NULL != socket1) {
        delete socket1;
    }
    delete player_1;
    delete player_2;
    return 0;
}
