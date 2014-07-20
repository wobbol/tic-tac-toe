#include <iostream>
#include "winner.h"
#include "grid.h"
#include "game.h"
using namespace std;


#define PLAYER1 1
#define PLAYER2	2


void printMenu(){

/* todo
 *
 */
cout << "m:move" << endl;
cout << "p:print board" << endl;
cout << "r:restart" << endl;
cout << "q:quit" << endl;
cout << "h:help (this text)" << endl;
}


int main(int argc, char** argv)
{

	printGrid();
	clearGrid();
	printMenu();
	cout << ">";
	char input = 0;
	bool quit = 0;
	int row = 0, col = 0;
	int player = PLAYER1;
	int result = 0;
	while(!quit){
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
		  quit = 1;
		  break;

		case 'h':
		  printMenu();
		  break;
		default:
		  cout << "Invaid input";
		  break;
		}
		if( result == 1 ) {
			cout << "player 1 wins!" << endl;
		}
		if(result == 2 ) {
			cout << "player 2 wins!" << endl;
		}
		if( result == 0 ) {
			cout << "no one wins" << endl;
		}
		input = 0;
		cout << endl;
		cout << ">";
	}
	cout << "bye" << endl;
	return 0;
}
