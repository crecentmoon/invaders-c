#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <ncurses.h>

#define MAX_ENEMIES 10
#define MAX_BULLETS 100

typedef struct {
    int x, y;
    int speed;
    char shape[3];
} Player;

typedef struct {
    int x, y;
    int active;
} Bullet;

typedef struct {
    int x, y;
    int speed;
    int active;
    char shape[3];
} Enemy;

extern Player player;
extern Enemy enemies[MAX_ENEMIES];
extern Bullet bullets[MAX_BULLETS];
extern int score;
extern int lives;

void init(Bullet bullets[], Enemy enemies[], Player *player);
void draw(Bullet bullets[], Player player, Enemy enemies[], int lives, int score);
void update(Bullet bullets[], Enemy enemies[], int *lives, int *score);
void handle_input(int input, Bullet bullets[], Player *player);
void spawn_enemy();
void spawn_bullet(Bullet bullets[], Player *player);
void end_game();
void sig_handler(int sig);