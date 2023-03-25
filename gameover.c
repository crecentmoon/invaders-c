#include <ncurses.h>
#include "init.h"

void end_game()
{
    clear();
    mvprintw(LINES / 2, COLS / 2 - 10, "GAME OVER");
    refresh();
    sleep(2);
    endwin();
    exit(0);
}