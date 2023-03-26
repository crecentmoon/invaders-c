#include "init.h"

void handle_input(int input, Bullet bullets[], Player *player)
{
    switch (input) {
        case KEY_LEFT:
        player->x -= player->speed;
        if (player->x < 0) {
            player->x = 0;
        }
        break;
        case KEY_RIGHT:
        player->x += player->speed;
        if (player->x >= COLS) {
            player->x = COLS - 1;
        }
        break;
        case ' ':
        spawn_bullet(bullets, player);
        break;
    }
}