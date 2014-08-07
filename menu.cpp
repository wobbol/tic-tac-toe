/*
Unified menu function 
slated to replace all input functions to the program
to provide a consistinstant interface with the user


*/


#include <stdlib.h>
#include <stdio.h>
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


//menuInGame  function ment to return -1 when 
//it does its job and return the char as an int otherwise
//

int menuInGame(char *input){
	int quit = quit_no;
			switch(*input){
			  case 'p':
			    printGrid();
			    return -1;
			    break;

			  case 'h':
			    printMenu(ingame_yes);
			    return -1;
			    break;

			  case 'q':
			    quit = quit_yes;
			    break;

			  default:
			    return atoi(input);

			    break;
			}
	return 0; 	//this is what the ingame part
				//of the function returns
	}

int menuOutGame(char input){
	int quit = quit_no;
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
}
