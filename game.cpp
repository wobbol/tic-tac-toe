#include <iostream>
#include "grid.h"
#include "winner.h"
#include "return.h"
#include "menu.h"

using namespace std;
int game(){
int row = 0;
int col = 0;
int move =  0;
	while(1){
	player1:
		cout << "Player1>" << endl;
		cout << "row:";
		cin >> row; 
		row = (int)getChoice(row,ingame_yes);
		cout << endl;
		cout << "colum:";
		cin >> col;
		cout << endl;
		if( movePlayer( row, col, player_one ) ) {
			cout << "make a valid move" << endl;
			goto player1;
		}
		printGrid();
		if(winnerTest(1)){
		  return player_one;
		}
	player2:
		cout << "Player2>" << endl;
		cout << "row:";
		cin >> row;
		cout << endl;
		cout << "colum:";
		cin >> col;
		cout << endl;
		if( movePlayer( row, col, player_two ) ) {
			cout << "make a valid move" << endl;
			goto player2;
		}
		printGrid();
		if(winnerTest(2)){
		  return player_two;
		}

	}
return error_how_are_you_here;
}
