#include <ncurses.h>
#include <string.h> 
 
int main()
{
 char mesg[]="Just a string";		
 int row,col;
 initscr();			
 getmaxyx(stdscr,row,col);		/* get the number of rows and columns */
 mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
 mvprintw(row-2,0,"This screen has %d rows and %d columns\n",row,col);
 refresh();
 getch();
 endwin();

 return 0;
}