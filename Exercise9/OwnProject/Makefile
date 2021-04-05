CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: HockeyGame.c

HockeyGame: HockeyGame.o HockeyTeams.o Simulation.o InputOutput.o
	$(CC) $(CFLAGS) -o HockeyGame HockeyGame.o HockeyTeams.o Simulation.o InputOutput.o -lm

HockeyGame.o: HockeyGame.c HockeyTeams.h Simulation.h
	$(CC) $(CFLAGS) -c HockeyGame.c -lm

HockeyTeams.o: HockeyTeams.c HockeyTeams.h
	$(CC) $(CFLAGS) -c HockeyTeams.c -lm

Simulation.o: Simulation.c Simulation.h
	$(CC) $(CFLAGS) -c Simulation.c -lm

InputOutput.o: InputOutput.c InputOutput.h
	$(CC) $(CFLAGS) -c InputOutput.c



clean:
	$(RM) HockeyGame *.o *~
