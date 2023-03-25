# .PHONY: build run exec stop rm start

# build:
# 	docker build -t crecentmoon/invaders-c .

# run:
# 	docker run --name invaders-c -v /Users/tsukiokayuu/Documents/GitHub/invaders-c:/home -ti crecentmoon/invaders-c /bin/sh

# start:
# 	docker start invaders-c

# exec:
# 	docker exec -ti invaders-c /bin/sh

# rm:
# 	docker rm invaders-c

# stop:
# 	docker stop invaders-c

# gccbuild:
# 	gcc -c bullet.c -o bullet.o
# 	gcc -c main.c -o main.o
# 	gcc -c init.c -o init.o 
# 	gcc -c input.c -o input.o
# 	gcc -c update.c -o update.o
# 	gcc -c gameover.c -o gameover.o
# 	gcc -c draw.c -o draw.o
# 	gcc -c enemy.c -o enemy.o
# 	gcc -c signal.c -o signal.o
# 	gcc init.o main.o draw.o input.o enemy.o bullet.o update.o gameover.o signal.o -o invaders -lncurses

invaders: main.o init.o input.o update.o gameover.o draw.o enemy.o bullet.o signal.o
	gcc -o invaders main.o init.o input.o update.o gameover.o draw.o enemy.o bullet.o signal.o -lncurses
 
main.o: main.c
	gcc -c main.c
 
init.o: init.c
	gcc -c init.c

input.o: input.c
	gcc -c input.c

update.o: update.c
	gcc -c update.c

gameover.o: gameover.c
	gcc -c gameover.c

draw.o: draw.c
	gcc -c draw.c

enemy.o: enemy.c
	gcc -c enemy.c

bullet.o: bullet.c
	gcc -c bullet.c

signal.o: signal.c
	gcc -c signal.c

clean:
	rm -f *.o invaders

main.c: init.h
 
init.c: init.h

input.c: init.h

update.c: init.h

gameover.c: init.h

draw.c: init.h

enemy.c: init.h

bullet.c: init.h

signal.c: init.h