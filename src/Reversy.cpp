
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include "Game.h"
#include "ConsolePlayer.h"
#include "ComputerPlayer.h"
#include "ConsoleDisplayer.h"
#include "BasicRules.h"
#include "LocalNetworkPlayer.h"
#include "RemoteNetworkPlayer.h"
using namespace std;
int main() {
    string string1;
    //1 for choosing against computer, 2 for human ,3 remote player.
    int choose;
    int n;
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
        inFile.open("/home/omer/CLionProjects/REVERSY_WITH_TESTS_NEW/src/settings1");
        inFile >> port;
        inFile >> ip;
        socket1 = new Socket();
        socket1->connectToServer(ip , port);
        char c;
        string choice;
        string s;
        do {
            cin >> c;
            getline(cin , choice);

             s = c + choice;
            cout << s << endl;
            char buf[50];
            char buf2[50];
            strcpy(buf , s.c_str());
            n = write(socket1->getM_socket() , buf , sizeof(buf));
            if (n == -1) {
                cout<< "Error on write"<< endl;
                return n;
            }
            cout<<buf << endl;

            if ((0 != strncmp(buf, "start", strlen("start"))) &&
                    0 != strncmp(buf, "join", strlen("join")))
            {
                n = read(socket1->getM_socket(), buf2, sizeof(buf2));
                if (n == -1 || n == 0) {
                    cout<<"Error on read"<< endl;
                    return -1;
                }
                cout<<buf2 << endl;

            }
        } while (strcmp(s.c_str(),"list_games") == 0);
        n = read(socket1->getM_socket() , playerNum , sizeof(playerNum));
        if (n == -1) {
            cout<< "Error on read"<< endl;
            return n;
        }
        if (n == 0) {
            cout<< "server was closed"<< endl;
            return n;
        }
        if (strcmp(playerNum, "-1") == 0) {
            return -1;
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
