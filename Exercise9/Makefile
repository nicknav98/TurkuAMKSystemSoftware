CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise9

Exercise9: Exercise9.o Array.o
	$(CC) $(CFLAGS) -o Exercise9 Exercise9.o Array.o

Exercise9.o: Exercise9.c Array.h
	$(CC) $(CFLAGS) -c Exercise9.c

Array.o: Array.c Array.h
	$(CC) $(CFLAGS) -c Array.c 

clean:
	$(RM) Exercise9 *.o *~
