/*
Unified menu function 



*/



#include <iostream>
#include "return.h"


int getChoice(char input,enum eReturnCodes ingame){
	quit = quit_no;
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
			    cout << "Invaid input";
			    break;
			}
	}
	return quit;
}
