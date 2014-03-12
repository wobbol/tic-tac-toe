#include <iostream>
#include "grid.h"
#include "winner.h"
using namespace std;
int game(){
int row;
int col;
	while(1){
		cout << "Player1>" << endl;
		cout << "row:";
		cin >> row;
		cout << endl << "colum:";
		cin >> col;
		editGrid(row,col,1);
		printGrid();
		if(!winnerTest(1)){
		  return 1;
		}
	
		cout << "Player2>" << endl;
		cout << "row:";
		cin >> row;
		cout << endl << "colum:";
		cin >> col;
		editGrid(row,col,2);
		printGrid();
	}
return 0;
}
