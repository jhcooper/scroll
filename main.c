#include "scroll.h"
#include <unistd.h>
#include <ncurses.h>
#include <stdlib.h>

void handler(unsigned int code);

int main(void){
	openDisplay();
	openInput();
	int idx = 0;
	char letters[4] = {'A','E','J','C'};
	char c = letters[0];
	int input = 0;
	int xOffset = 0;
	int yOffset = 0;
	int xSpeed = 0;
	int ySpeed = 0;
	int xCheck = 0;
	int yCheck = 0;
	int delay = 1000;
	while(idx < 4){
		input = checkInput(delay);
		if (input == 5){
			idx++;
			c = letters[idx];
		}
		else if (input ==1 && xSpeed > -10){
			xSpeed--;
		}
		else if(input == 2 && xSpeed < 10){
			xSpeed++;
		}
		else if(input == 3 &&  ySpeed > -10){
			ySpeed--;
		}
		else if(input == 4 && ySpeed < 10){
			ySpeed++;
		}
		if(xSpeed != 0){
			xCheck++;
		}
		if(xSpeed != 0 && xCheck == abs(xSpeed)){
			xCheck = 0;
			if(xSpeed > 0){
				xOffset++;
			}
			else{
				xOffset--;
			}
		}
		if(ySpeed != 0){
			yCheck++;
		}
		if(ySpeed != 0 && yCheck == abs(ySpeed)){
			yCheck = 0;
			if(ySpeed > 0){
				yOffset++;
			}
			else{
				yOffset--;
			}
		}
		displayLetter(c, xOffset, yOffset);
	}

closeInput();
clearDisplay();
closeDisplay();
}
