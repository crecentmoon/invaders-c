#include <ncurses.h>
#include "init.h"

void init(Bullet bullets[], Enemy enemies[], Player *player)
{
  initscr();
  cbreak();
  noecho();
  curs_set(FALSE);
  keypad(stdscr, TRUE);
  timeout(0);

  player->x = COLS / 2;
  player->y = LINES - 2;
  player->speed = 10;
  snprintf(player->shape, sizeof(player->shape), "^^^");

  int i;
  for (i = 0; i < MAX_ENEMIES; i++) {
    enemies[i].x = rand() % COLS;
    enemies[i].y = rand() % 5;
    enemies[i].speed = 1;
    enemies[i].active = 1;
    snprintf(enemies[i].shape, sizeof(enemies[i].shape), "ooo");
  }

  for (i = 0; i < MAX_BULLETS; i++) {
    bullets[i].active = 0;
  }
}