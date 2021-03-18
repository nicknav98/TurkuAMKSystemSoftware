CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise8

Exercise8: Exercise8.o Array.o Calculation.o Finder.o
	$(CC) $(CFLAGS) -o Exercise8 Exercise8.o Array.o Calculation.o Finder.o

Exercise8.o: Exercise8.c Array.c Calculation.c Finder.c
	$(CC) $(CFLAGS) -c Exercise8.c

Array.o: Array.c Array.h
	$(CC) $(CFLAGS) -c Array.c

Calculation.o: Calculation.c Calculation.h
	$(CC) $(CFLAGS) -c Calculation.c

Finder.o: Finder.c Finder.h
		$(CC) $(CFLAGS) -c Finder.c

clean:
	$(RM) Exercise8 *.o *~
