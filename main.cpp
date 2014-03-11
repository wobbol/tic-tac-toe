#include <iostream>
using namespace std;
#define NUMCOL 3
#define NUMROW 3

#define PLAYER1 1
#define PLAYER2	2

int grid[NUMROW][NUMCOL] = {1,2,3,4,5,6,7,8,9};


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

bool winnerTestDiagUp(int player){
int i,j;
	for(i = 0,j = 0; i < NUMROW; i++,j++){
		if(grid[i][j] != player){
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



int main(int argc, char** argv)
{
	printGrid();
	clearGrid();
	editGrid(0,1,PLAYER1);
	editGrid(0,2,PLAYER2);
	editGrid(1,1,PLAYER2);
	editGrid(2,0,PLAYER2);
//	editGrid(0,0,PLAYER2);
//	editGrid(1,1,PLAYER2);
//	editGrid(2,2,PLAYER2);
	if(winnerTest(PLAYER2));
	cout << "player 2 wins!" << endl;
	printGrid();
	return 0;
}
