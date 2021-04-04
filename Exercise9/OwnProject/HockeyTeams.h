
/*
 * File:       	HockeyTeams.h
 * Author:  	Nicholas Navaarro
 * Description: HockeyTeams Header File
*/

#ifndef HOCKEYTEAMS_H
#define HOCKEYTEAMS_H

typedef struct
{
  char* teamName;
  int leaguePosition;
  int teamWins;
  int teamLosses;
  int teamTies;
  float pointPercentage;
  float teamRating;



} TEAM;

TEAM *teamArray(TEAM *emptyArray, int numOfTeams);
void arrayPrinter(TEAM *arrayPointer, int size);






#endif /* HOCKEYTEAMS_H */
