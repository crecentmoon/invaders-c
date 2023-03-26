#include "init.h"

void update(Bullet bullets[], Enemy enemies[], int *lives, int *score)
{
    int i;

    for (i = 0; i < MAX_ENEMIES; i++) {
        if (enemies[i].active) {
        enemies[i].y += enemies[i].speed;
        if (enemies[i].y >= LINES) {
            enemies[i].active = 0;
            lives--;
            if (lives <= 0) {
            end_game();
            }
        }
        }
    }
    
    for (i = 0; i < MAX_BULLETS; i++) {
        if (bullets[i].active) {
        bullets[i].y -= 1;
        if (bullets[i].y <= 0) {
            bullets[i].active = 0;
        }
        }
    }
    
    for (i = 0; i < MAX_ENEMIES; i++) {
        if (enemies[i].active) {
        int j;
        for (j = 0; j < MAX_BULLETS; j++) {
            if (bullets[j].active) {
            if (bullets[j].x == enemies[i].x && bullets[j].y == enemies[i].y) {
                enemies[i].active = 0;
                bullets[j].active = 0;
                score++;
            }
            }
        }
        }
    }
}