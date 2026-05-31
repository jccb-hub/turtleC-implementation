CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: fractal

fractal: turtlec.c main.c turtlec.h fractals.c fractals.h
	$(CC) $(CFLAGS) turtlec.c main.c fractals.c -o fractal $(LDLIBS)

clean:
	rm -f fractal
