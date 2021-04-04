
/*
 * File:       	Struct.h
 * Author:  	Michalis Iona
 * Description: Struct Header File
*/

#ifndef ARRAY_H
#define ARRAY_H

typedef struct
{
  char* teamName;
  int league;
  float rating;
} TEAM;


typedef struct
{
  char* playerName;
  char* Team;
  float pointsPerGame;
} PLAYER;


TEAM *teamArray(TEAM *emptyArray, int numOfTeams);
PLAYER *playerArray(PLAYER *emptyArray, int numOfTeams);
void arrayPrinter(TEAM *arrayPointer, int size);
void playersPrinter(PLAYER *arrayPointer, int size);

#endif /* ARRAY_H */
