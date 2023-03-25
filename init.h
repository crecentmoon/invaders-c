#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <ncurses.h>

#define MAX_ENEMIES 20
#define MAX_BULLETS 20

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

void init();
void draw();
void update();
void handle_input(int input);
void spawn_enemy();
void spawn_bullet();
void end_game();
void sig_handler(int sig);