#include <signal.h>
#include <stdlib.h>
#include <ncurses.h>

void sig_handler(int sig)
{
    endwin();
    exit(0);
}