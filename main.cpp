#include <iostream>
#include "winner.h"
#include "grid.h"
using namespace std;


#define PLAYER1 1
#define PLAYER2	2



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


void printMenu(){

/* todo
 *
 */

}


int main(int argc, char** argv)
{

	printGrid();
	clearGrid();
	printMenu();
	cout << "Menu>";
	char input = 0;
	bool quit = 0;
	while(!quit){
		cin >> input;
		switch(input){
		case 'm':
		  cout << "moves?";
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
		cout << "Menu>";
	}
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
