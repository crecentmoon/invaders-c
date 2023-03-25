#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <ncurses.h>
#include "init.h"

int main()
{
  srand(time(NULL));
  signal(SIGINT, sig_handler);
  init();
  while(1) {
    int input = getch();
    handle_input(input);
    update();
    draw();
    usleep(100000);
  }
  return 0;
}

