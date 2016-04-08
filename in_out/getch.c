#include <stdio.h>
#include <curses.h>

int main(){
	char c;
	//编译时要加上 -lcurses
	initscr();
	while((c = getch())!=EOF){
		printf("c = %c\n",c);
		fflush(stdout);
	}
	endwin();
	return 0;
}
