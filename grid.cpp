#include <iostream>
#include "grid.h"
using namespace std;
int grid[NUMROW][NUMCOL];

void printGrid(){
int i,j;
	for(i = 0; i < NUMROW; i++){

		for(j = 0; j < NUMCOL; j++){
		cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int editGrid(int i,int j,int player){ //ROW,COLLUM
if( grid[i][j] == 1 || grid[i][j] == 2){
	cout << "this space is full" << endl;
	return 1;
}
grid[i][j] = player;
return 0;
}

void clearGrid(){
int i,j;
	for(i = 0; i < NUMROW; i++){

		for(j = 0; j < NUMCOL; j++){
		grid[i][j] = 0;
		}
	}
}


