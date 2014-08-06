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
		if( !(row >= 0 && row <= 2) ){
			getChoice((char)row,ingame_yes);
			goto player1;
		}
		cout << endl;
		cout << "Colum:";
		cin >> col;
		if( !(col >= 0 && col <= 2) ){
			getChoice((char)col,ingame_yes);
			goto player1;
		}
		cout << endl;
		if( movePlayer( row, col, player_one ) ) {
			cout << "Make a valid move, please." << endl;
			goto player1;
		}
		row = 0;
		col = 0;
		printGrid();
		if(winnerTest(1)){
		  return player_one;
		}
	player2:
		cout << "Player2>" << endl;
		cout << "row:";
		cin >> row;
		if( !(row >= 0 && row <= 2) ){
			getChoice((char)row,ingame_yes);
			goto player2;
		}
		cout << endl;
		cout << "colum:";
		cin >> col;
		if( !(row >= 0 && row <= 2) ){
			getChoice((char)row,ingame_yes);
			goto player2;
		}
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
