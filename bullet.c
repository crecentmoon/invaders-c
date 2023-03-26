#include "init.h"

void spawn_bullet(Bullet bullets[], Player *player)
{
    int i;

    for (i = 0; i < MAX_BULLETS; i++) {
        if (!bullets[i].active) {
        bullets[i].x = player->x + 1;
        bullets[i].y = player->y - 1;
        bullets[i].active = 1;
        break;
        }
    }
}