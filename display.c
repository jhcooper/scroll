#include "scroll.h"

#define OFF 1
#define WHITE 2
#define TEXT 3
#define BLACK 4

void openDisplay(void) {
    initscr();
    start_color();
    init_pair(WHITE, COLOR_WHITE, COLOR_WHITE);
    init_pair(BLACK, COLOR_BLACK, COLOR_BLACK);
}

void closeDisplay(void) {
    refresh();
    endwin();
}

int loop(int num, int offset) {
	int val = num;
	if(num + offset > 8) {
        	val = (num + offset) % 8;
        	return val;
        }
        return num;
}

void displayLetter(char letter, int xOffset, int yOffset) {
    if (letter == 'A') {
        wbkgd(stdscr, COLOR_PAIR(BLACK));
        attron(COLOR_PAIR(WHITE));

        mvaddch(loop(0, yOffset), loop(3, xOffset), ' ');
        mvaddch(loop(0, yOffset), loop(4, xOffset), ' ');
        mvaddch(loop(1, yOffset), loop(2, xOffset), ' ');
        mvaddch(loop(1, yOffset), loop(5, xOffset), ' ');
        mvaddch(loop(2, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(2, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(2, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(3, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(4, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(5, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(4, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(4, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(5, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(5, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(6, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(6, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(6, xOffset), ' ');
        refresh();

    } else if (letter == 'E') {
        wbkgd(stdscr, COLOR_PAIR(BLACK));
        attron(COLOR_PAIR(WHITE));

        mvaddch(loop(0, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(0, yOffset), loop(5, xOffset), ' ');
        mvaddch(loop(0, yOffset), loop(4, xOffset), ' ');
        mvaddch(loop(0, yOffset), loop(3, xOffset), ' ');
        mvaddch(loop(0, yOffset), loop(2, xOffset), ' ');
        mvaddch(loop(0, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(1, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(2, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(5, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(4, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(3, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(2, xOffset), ' ');
        mvaddch(loop(3, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(4, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(5, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(6, yOffset), loop(1, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(6, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(5, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(4, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(3, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(2, xOffset), ' ');
        mvaddch(loop(7, yOffset), loop(1, xOffset), ' ');
        refresh();
    }
    else if (letter == 'J') {
    	wbkgd(stdscr, COLOR_PAIR(BLACK));
    	attron(COLOR_PAIR(WHITE));
    	//Top Bar of J
    	mvaddch(loop(0, yOffset), loop(1, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(2, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(3, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(4, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(5, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(6, xOffset), ' ');

    	//Middle Bar of J
    	mvaddch(loop(1, yOffset), loop(4, xOffset), ' ');
    	mvaddch(loop(2, yOffset), loop(4, xOffset), ' ');
    	mvaddch(loop(3, yOffset), loop(4, xOffset), ' ');
    	mvaddch(loop(4, yOffset), loop(4, xOffset), ' ');
    	mvaddch(loop(5, yOffset), loop(4, xOffset), ' ');
    	mvaddch(loop(6, yOffset), loop(4, xOffset), ' ');

    	//Bottom Bar of J
    	mvaddch(loop(7, yOffset), loop(3, xOffset), ' ');
    	mvaddch(loop(7, yOffset), loop(2, xOffset), ' ');

	//Side Bar of J
    	mvaddch(loop(5, yOffset), loop(0, xOffset), ' ');
    	mvaddch(loop(6, yOffset), loop(1, xOffset), ' ');

    	refresh();
    }
    else if (letter == 'C') {
    	wbkgd(stdscr, COLOR_PAIR(BLACK));
    	attron(COLOR_PAIR(WHITE));

	//Side Bar of C
    	mvaddch(loop(1, yOffset), loop(1, xOffset), ' ');
    	mvaddch(loop(2, yOffset), loop(1, xOffset), ' ');
    	mvaddch(loop(3, yOffset), loop(1, xOffset), ' ');
    	mvaddch(loop(4, yOffset), loop(1, xOffset), ' ');
    	mvaddch(loop(5, yOffset), loop(1, xOffset), ' ');
    	mvaddch(loop(6, yOffset), loop(1, xOffset), ' ');

	//Top Bar of C
    	mvaddch(loop(0, yOffset), loop(2, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(3, xOffset), ' ');
    	mvaddch(loop(0, yOffset), loop(4, xOffset), ' ');

	//Bottom Bar of C
    	mvaddch(loop(7, yOffset), loop(2, xOffset), ' ');
    	mvaddch(loop(7, yOffset), loop(3, xOffset), ' ');
    	mvaddch(loop(7, yOffset), loop(4, xOffset), ' ');

	//Right Side Ends of C
    	mvaddch(loop(1, yOffset), loop(5, xOffset), ' ');
    	mvaddch(loop(6, yOffset), loop(5, xOffset), ' ');

    	refresh();
    }
}

void clearDisplay(void) {
    clear();
}
