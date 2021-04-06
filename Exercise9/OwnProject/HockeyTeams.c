/*
  File:         HockeyTeams.c
  Author:	      Nicholas Navarro
  Description:  File that handles user inputs and stores fixtures and points for team.
*/

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>


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




TEAM *teamArray(TEAM *emptyArray, int numOfTeams) {


  int c = 0;
  TEAM* teams = malloc(numOfTeams * sizeof *teams);


  for(c = 0; c < numOfTeams; c++){
    printf("\nEnter details of Hockey Team %d\n\n", c + 1);

    printf("Enter Team Name: ");
    teams[c].teamName=(char*)malloc(sizeof(char*));
    scanf("%s", teams[c].teamName);

    }

  emptyArray = &teams[0];

  return emptyArray;


}


void arrayPrinter(TEAM *arrayPointer, int size) {

  int i = 0;

  printf("\nPrinting Team List\n\n");

  for(i = 0; i < size; i++) {
     printf("Team Name: %s\n", arrayPointer->teamName);
     printf("Team Wins: %d\n", arrayPointer->teamWins);
     printf("Team Ties: %d\n", arrayPointer->teamTies);
     printf("Team Losses: %d\n", arrayPointer->teamLosses);
     printf("Total Games Played: %d\n", arrayPointer->totalGamesPlayed);
     printf("Team Rating: %-.1f\n", arrayPointer->teamRating);

     printf("-------------------------\n");

     arrayPointer++;
 }

}

void teamRatingCalculator(TEAM *hockeyTeam) {


     float ratingCalculation = 0.0;


     ratingCalculation = (hockeyTeam->teamWins + hockeyTeam->teamTies)/hockeyTeam->totalGamesPlayed;

     ratingCalculation = ratingCalculation*10;

     hockeyTeam->teamRating = ratingCalculation;

 }
