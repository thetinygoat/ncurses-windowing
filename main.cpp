#include <iostream>
#include "ncurses.h"

using namespace std;

int main(){
	int ch;
	// init curses mode
	initscr();
	// disable line buffering
	raw();
	// enable key support
	keypad(stdscr, TRUE);
	// no echoing
	noecho();
	printw("type something...");
	ch = getch();

	if(ch == KEY_F(1)){
		printw("key f1 pressed");
	}else{
		printw("the pressed key is : ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}
	mvaddch(4,5,'a');
	refresh();
	getch();
	endwin();
	return 0;
}