#include <ncurses.h>
#include "init.h"

void draw(Bullet bullets[], Player player, Enemy enemies[], int score, int lives)
{
  clear();
  int i;

  mvprintw(0, 0, "Score: %d", score);
  mvprintw(0, COLS - 10, "Lives: %d", lives);

  mvprintw(player.y, player.x, player.shape);

  for (i = 0; i < MAX_ENEMIES; i++) {
    if (enemies[i].active) {
      mvprintw(enemies[i].y, enemies[i].x, enemies[i].shape);
    }
  }

  for (i = 0; i < MAX_BULLETS; i++) {
    if (bullets[i].active) {
      mvprintw(bullets[i].y, bullets[i].x, "|");
    }
  }

  refresh();
}