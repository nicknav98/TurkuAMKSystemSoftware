
/*
 * File:       	Struct.h
 * Author:  	Nicholas Navaarro
 * Description: Aray Header File, please refer to Array.C for further code comment 
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
