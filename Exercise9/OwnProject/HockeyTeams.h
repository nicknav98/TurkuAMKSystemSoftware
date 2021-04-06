
/*
 * File:       	HockeyTeams.h
 * Author:  	Nicholas Navaarro
 * Description: HockeyTeams Header File
*/

#ifndef HOCKEYTEAMS_H
#define HOCKEYTEAMS_H

typedef struct TEAM {

  char* teamName;
  int leaguePosition;
  int teamWins;
  int teamLosses;
  int teamTies;
  int totalGamesPlayed;
  float pointPercentage;
  float teamRating;

} TEAM;





TEAM *teamArray(TEAM *emptyArray, int numOfTeams);
void arrayPrinter(TEAM *arrayPointer, int size);
void teamRatingCalculator(TEAM *hockeyTeam);







#endif /* HOCKEYTEAMS_H */
