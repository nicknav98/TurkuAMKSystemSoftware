CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise7

Exercise7: Exercise7.o PrimeFactor.o Armstrong.o
	$(CC) $(CFLAGS) -o Exercise7 Exercise7.o PrimeFactor.o Armstrong.o -lm

Exercise7.o: Exercise7.c PrimeFactor.h Armstrong.h
	$(CC) $(CFLAGS) -c Exercise7.c

PrimeFactor.o: PrimeFactor.c PrimeFactor.h
	$(CC) $(CFLAGS) -c PrimeFactor.c

Armstrong.o: Armstrong.c Armstrong.h
	$(CC) $(CFLAGS) -c Armstrong.c

clean:
	$(RM) Exercise7 *.o *~
