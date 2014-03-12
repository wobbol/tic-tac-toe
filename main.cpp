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
cout << "m:move";
cout << "p:print board";
cout << "r:restart";
cout << "q:quit";

}


int main(int argc, char** argv)
{

	printGrid();
	clearGrid();
	printMenu();
	cout << "Player 1>";
	char input = 0;
	bool quit = 0;
	int row = 0, col = 0;
	int player = PLAYER1;
	while(!quit){
		cin >> input;
		switch(input){
		case 'm':
		  game();
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

		default:
		  cout << "what you say?";
		  break;
		}
		input = 0;
		cout << endl;
		if( player == PLAYER1){
			cout << "Player 1";
		} else if(player == PLAYER2){
			cout << "Player 2";
		} else {
		cout << "I've got a snake in my boot!";
		return -1;
		}
		cout << ">";
	}
	editGrid(0,0,PLAYER1);
	editGrid(1,0,PLAYER1);
	editGrid(2,0,PLAYER1);
	editGrid(1,1,PLAYER2);
  	editGrid(2,2,PLAYER2);
//	editGrid(1,1,PLAYER2);
//	editGrid(2,2,PLAYER2);
	if(winnerTestCol(0,2))
	  cout << "player 2 wins!" << endl;
	printGrid();
	return 0;
}
