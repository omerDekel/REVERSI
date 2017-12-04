
#include <iostream>
#include "Game.h"
#include "ConsolePlayer.h"
#include "ComputerPlayer.h"
#include "ConsoleDisplayer.h"
#include "BasicRules.h"
#include "LocalNetworkPlayer.h"
#include "RemoteNetworkPlayer.h"
int main()
{
    //1 for choosing against computer, 2 for human.
	int choose;
	Board board(8);
    // pointer to IPlayer type (can be computerPlayer or consolePlayer).
	IPlayer* o_player;
	IPlayer* player_2;
	std::cout << "Choose your opponent: 1 for computer , 2 for human player, 3 for remote player";
	std::cin >> choose;
	if (choose == 1)
	{
		o_player = new ComputerPlayer(PLAYER_TYPE_O);
		player_2 = new ConsolePlayer(PLAYER_TYPE_X, "Player X");
	}
	else if (choose == 2)
	{
		o_player = new ConsolePlayer(PLAYER_TYPE_O, "Player O");
		player_2 = new ConsolePlayer(PLAYER_TYPE_X, "Player X");
	}
	else if (choose == 3)
	{
		Socket* socket1 = new Socket();
		o_player = new LocalNetworkPlayer(PLAYER_TYPE_O,"Player O",socket1);
		player_2 = new RemoteNetworkPlayer(PLAYER_TYPE_X, socket1);

	}
	//ConsolePlayer player_1(PLAYER_TYPE_O, "Player O");
	//ConsolePlayer player_2(PLAYER_TYPE_X, "Player X");
	ConsoleDisplayer displayer;
	BasicRules rules;

	Game game(player_2, o_player, &board, &displayer, &rules);
    //running the game .
	game.run();

	delete o_player;
	delete player_2;
    return 0;
}
