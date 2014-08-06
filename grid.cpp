#include <iostream>
#include "grid.h"
#include "return.h"

using namespace std;
int grid[NUMROW][NUMCOL];

void printGrid() {
int i, j;
cout << "X 0 1 2" << endl;
	for( i = 0; i < NUMROW; i++ ) {
		cout << i << " ";
		for( j = 0; j < NUMCOL; j++ ) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int editGrid( int i, int j, int player ) { //ROW,COLLUM
	grid[i][j] = player;
	return 0;
}

bool isGridFull() {
	int i, j;
	for( i = 0; i < NUMROW; i++ ) {

		for( j = 0; j < NUMCOL; j++ ) {
			if( grid[i][j] == player_null)
				return 0;
		}
	}
	return 1;
}


int movePlayer( int i, int j, int player ) {
	if( grid[i][j] != 0) {
		cout << "space " << i << " " << j <<" is full" << endl;
		return 1;
	} else {
		editGrid( i, j, player );
		return 0;
	}

}

void clearGrid() {
	int i, j;
	for( i = 0; i < NUMROW; i++ ) {

		for( j = 0; j < NUMCOL; j++ ) {
		editGrid( i, j, 0 );
		}
	}
}



