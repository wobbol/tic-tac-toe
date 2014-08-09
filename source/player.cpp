#include <iostream>
#include "../header/return.h"

using namespace std;

const char *whoWon(enum eReturnCodes who){
	switch(who){
	  case player_null:
	    return "no one wins";
	    break;
	  case player_one:
	    return "player one wins!";
	    break;
	  case player_two:
	    return "player two wins!";
	    break;
	  default:
	    return "hwhat are you";
	}
} 
