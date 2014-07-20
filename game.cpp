#include <iostream>
#include "grid.h"
#include "winner.h"
using namespace std;
int game(){
int row;
int col;
	while(1){
	player1:
		cout << "Player1>" << endl;
		cout << "row:";
		cin >> row;
		cout << endl;
		cout << "colum:";
		cin >> col;
		cout << endl;
		if( movePlayer( row, col, 1 ) ) {
			cout << "make a valid move" << endl;
			goto player1;
		}
		printGrid();
		if(!winnerTest(1)){
		  return 1;
		}
	player2:
		cout << "Player2>" << endl;
		cout << "row:";
		cin >> row;
		cout << endl;
		cout << "colum:";
		cin >> col;
		cout << endl;
		if( !movePlayer( row, col, 2 ) ) {
			cout << "make a valid move" << endl;
			goto player2;
		}
		printGrid();
		if(!winnerTest(2)){
		  return 2;
		}

	}
return 0;
}
