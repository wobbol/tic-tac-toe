#include <iostream>
#include "../header/winner.h"
#include "../header/grid.h"
#include "../header/game.h"
#include "../header/return.h"
#include "../header/player.h"
#include "../header/menu.h"

using namespace std;






int main(int argc, char** argv)
{

	printGrid();
	clearGrid();
	printMenu();
	cout << ">";
	char input = 0;
	int quit = quit_no;

	int player = player_one;
	int result = player_null;
	while(quit == quit_no){
		cin >> input;
		switch(input){
		case 'm':
		  result = game();
		  break;

		case 'p':
		  printGrid();
		  break;

		case 'r':
		  clearGrid();
		  printGrid();
		  break;

		case 'q':
		  quit = quit_yes;
		  break;

		case 'h':
		  printMenu();
		  break;
		default:
		  cout << "Invaid input";
		  break;
		}
		if( result == player_one ) {
			cout << "player 1 wins!" << endl;
			printMenu();
		}
		if(result == player_two ) {
			cout << "player 2 wins!" << endl;
			printMenu();
		}
		if( result == player_null ) {
			cout << "no one wins" << endl;
			printMenu();
		}
		input = 0;
		cout << endl;
		cout << ">";
	}
	
	cout << "bye"  << endl;
	return 0;
}
