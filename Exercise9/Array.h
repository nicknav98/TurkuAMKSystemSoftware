
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
  TEAM TEAM;
  float pointsPerGame;
} PLAYER;


TEAM *structArray(TEAM *emptyArray, int size);
void arrayPrinter(TEAM *arrayPointer, int size);

#endif /* ARRAY_H */
