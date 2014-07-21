/* 
 * all the things that pretain to testing if `player' has won
 * these functions are ment to operate 
 * on a `grid' object of arburtrary size
 */
#include <iostream>
#include "grid.h"

bool testCol(int col,int player ){ //on 'player' not having a win in col returns 1
int i;
int count = 0;
	for(i = 0; i < NUMROW; i++){
		if(grid[i][col] == player){
			count++;
		}
	}
		if(count == 3){
			return 1;
		} else {
			return 0;
		}
}
bool testRow(int row,int player ){ //on 'player' not having a win in row returns 1
int i;
int count = 0;
	for(i = 0; i < NUMCOL; i++){
		if(grid[row][i] == player){
			count++;
		}
	}
	if( count == 3){
		return 1;
	} else {
		return 0;
	}
}
/*
 *best way to make this not edge alligned
 *would be accessing the grid as a
 *1 dimentional array and using an offset
 *with a multiple reliant of the size of the grid
 */
bool testDiagUp(int player){ 
int i, j;
int count = 0;				
	for(i = 0,j = 0; i < NUMROW; i++,j++){ 
		if(grid[i][j] == player){
			count++;
		}
	}
	if( count == 3) {
		return 1;
	} else {
		return 0;
	}
}
bool testDiagDown(int player){
int i, j;
int count;
	for(i = NUMROW - 1, j = 0; i > 0; i--,j++){
		if(grid[i][j] == player){
			count++;
		}			
	}
	if( count == 3 ) {
		return 1;
	} else {
		return 0;
	}		
return 1;
}

bool winnerTest(int player){ //return true on 'player' win
int i;
	for(i = 0; i < NUMCOL; i++){
		if(testCol(i,player)) {
			return 1;
		}
	}
	for(i = 0; i < NUMROW; i++){
		if(testRow(i,player)) {
			return 1;
		}
	}
	if(testDiagUp(player)) {
		return 1;
	}
	if(testDiagDown(player)) {
		return 1;
	}
return 0;
}

