#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <ncurses.h>
#include "init.h"

int main()
{
  Bullet bullets[MAX_BULLETS];
  Enemy enemies[MAX_ENEMIES];
  Player player;
  int lives = 3;
  int score = 0;

  srand(time(NULL));
  signal(SIGINT, sig_handler);
  init(bullets, enemies, &player);
  while(1) {
    int input = getch();
    handle_input(input, bullets, &player);
    update(bullets, enemies, &lives, &score);
    draw(bullets, player, enemies, score, lives);
    usleep(100000);
  }
  return 0;
}

