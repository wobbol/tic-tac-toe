/*
Unified menu function 
slated to replace all input functions to the program
to provide a consistinstant interface with the user


*/



#include <iostream>
#include "return.h"
#include "grid.h"
#include "game.h"

using namespace std;

void printMenu(){

/* todo
 *
 */
std::cout << "m:move" << endl;
cout << "p:print board" << endl;
cout << "r:restart" << endl;
cout << "q:quit" << endl;
cout << "h:help (this text)" << endl;
}

void printMenu(enum eReturnCodes ingame){

/* todo
 *
 */
std::cout << "m:move" << endl;
cout << "p:print board" << endl;
cout << "r:restart" << endl;
cout << "q:quit" << endl;
cout << "h:help (this text)" << endl;
}



int getChoice(char input,enum eReturnCodes ingame){
	int quit = quit_no;
	if( !ingame ) {
		int result = player_null;

			switch(input){
			  case 'm':
			    result = game();
			    return result;
			    break;
	
			  case 'q':
			    quit = quit_yes;
			    break;
	
			  case 'h':
			    printMenu(ingame_no);
			    break;
			  default:
			    cout << "Invaid input";
			    break;
			}
	} else {
			switch(input){
			  case 'p':
			    printGrid();
			    break;

//			  case 'r':
//			    clearGrid();
///			    printGrid();
//			    break;

			  case 'q':
			    quit = quit_yes;
			    break;
	
			  case 'h':
			    printMenu(ingame_yes);
			    break;
			  
			  default:
			    if( input >= 0 and input <= 2) {
			  	return input;
			    } else {
			    	cout << "Invaid input";
			    }
			    break;
			}
	}
	return quit;
}
