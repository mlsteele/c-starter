.PHONY: all

all:
	gcc -o main -g main.c

run:
	./main

br: all run
