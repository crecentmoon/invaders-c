#include <signal.h>
#include <stdlib.h>
#include <ncurses.h>
#include "init.h"

void sig_handler(int sig)
{
    endwin();
    exit(0);
}