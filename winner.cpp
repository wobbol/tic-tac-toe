/* 
 * all the things that pretain to testing if `player' has won
 * these functions are ment to operate 
 * on a `grid' object of arburtrary size
 */
#include <iostream>
#include "grid.h"

bool winnerTestCol(int col,int player ){ //on 'player' not having a win in col returns 1
int i;
	for(i = 0; i < NUMROW; i++){
		if(grid[i][col] != player){
			return 0;
		}
		return 1;
	}
}
bool winnerTestRow(int row,int player ){ //on 'player' not having a win in row returns 1
int i;
	for(i = 0; i < NUMCOL; i++){
		if(grid[row][i] != player){
			return 0;
		}
		return 1;
	}
}

bool winnerTestDiagUp(int player){ // best way to make this not edge alligned
int i,j;				//would be accessing the grid as a
for(i = 0,j = 0; i < NUMROW; i++,j++){ //1 dimentional array and using an offset
	if(grid[i][j] != player){//with a multiple reliant of the size of the grid
	return 0;
	}
	}
return 1;
}
bool winnerTestDiagDown(int player){
int i,j;
	for(i = NUMROW - 1, j = 0; i > 0; i--,j++){
		if(grid[i][j] != player){
			return 0;
		}
	}
return 1;
}

bool winnerTest(int player){ //return true on 'player' win
int i;
	for(i = 0; i < NUMCOL; i++){
		if(winnerTestCol(i,player))
			return 1;
	}
	for(i = 0; i < NUMROW; i++){
		if(winnerTestRow(i,player))
			return 1;
	}
	if(winnerTestDiagUp(player))
		return 1;
	if(winnerTestDiagDown(player))
		return 1;
return 0;
}

