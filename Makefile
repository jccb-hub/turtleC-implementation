CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: fractalTree

fractalTree: turtlec.c fractals/fractalTree.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c fractals/fractalTree.c -o fractalTree $(LDLIBS)

clean:
	rm -f fractalTree
