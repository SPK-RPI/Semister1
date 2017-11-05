#include <ncurses.h>
int main(){
    initscr();
    printw("Hai thar world...");
    refresh();
    getch();
    endwin();
//while(getchar()!="\n");
    return 0;
}