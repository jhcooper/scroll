#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

void openDisplay(void);
void closeDisplay(void);
int loop(int num, int offset);
void displayLetter(char letter, int xOffset, int yOffset);
void clearDisplay(void);
void openInput(void);
void closeInput(void);
int checkInput(int delay);
void handler(unsigned int code);
int main(void);
