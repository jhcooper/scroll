#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include "scroll.h"
void openInput(void) {
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
}
void closeInput(void){
	return;
}
int checkInput(int delay){
	int ch = getch();
	int return_value = 0;
	if('\n' == ch || '\r' == ch || KEY_ENTER == ch){
		return_value = 5;
	}
	else if(KEY_LEFT == ch){
		return_value = 1;
	}
	else if(KEY_RIGHT == ch){
		return_value  = 2;
	}
	else if(KEY_UP == ch){
		return_value = 3;
	}
	else if(KEY_DOWN == ch){
		return_value = 4;
	}
	usleep(delay);
	return return_value;
}

