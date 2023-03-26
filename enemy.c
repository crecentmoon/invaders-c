#include "init.h" 

void spawn_enemy()
{
    int i;
    Enemy enemies[MAX_ENEMIES];
    
    for (i = 0; i < MAX_ENEMIES; i++) {
        if (!enemies[i].active) {
        enemies[i].x = rand() % COLS;
        enemies[i].y = 0;
        enemies[i].speed = rand() % 2 + 1;
        enemies[i].active = 1;
        break;
        }
    }
}