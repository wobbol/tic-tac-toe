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
cout << "m:move";
cout << "p:print board";
cout << "r:restart";
cout << "q:quit";

}


int main(int argc, char** argv)
{

	printGrid();
	clearGrid();
	printMenu();
	cout << "Player 1>";
	char input = 0;
	bool quit = 0;
	int row = 0, col = 0;
	int player = PLAYER1;
	while(!quit){
		cin >> input;
		switch(input){
		
		case 'm':
		  cout << "row?:";
		  cin >> ++row;
		  row = 0;
		  cout << "colum?:";
		  cin >> ++col;
		  col = 0;
		  		//TODO: like really this is asking frou trouble
		  editGrid(row,col,player);
		  if(player == PLAYER1){
		  player = PLAYER2;
		  } else{
		  player = PLAYER1;
		  }
		  printGrid();
		  break;

		case 'p':
		  printGrid();
		  break;

		case 'r':
		  clearGrid();
		  printGrid();
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
		if( player == PLAYER1){
			cout << "Player 1";
		} else if(player == PLAYER2){
			cout << "Player 2";
		} else {
		cout << "I've got a snake in my boot!";
		return -1;
		}
		cout << ">";
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
