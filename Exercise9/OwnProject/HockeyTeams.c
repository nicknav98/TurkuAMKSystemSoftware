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
  int menuChoice = 0;
  TEAM* teams = malloc(numOfTeams * sizeof *teams);


  for(c = 0; c < numOfTeams; c++){
    printf("\nEnter details of Hockey Team %d\n\n", c + 1);
    printf("\nTeam List: 1.Rauma | 2.Turku | 3.Helsinki | 4.Tampere\n\n");

    printf("Enter Select Team according to Number: ");
    teams[c].teamName=(char*)malloc(sizeof(char*));
    scanf("%d", &menuChoice);

    if(menuChoice == 1){
      printf("\nRauma Chosen\n");
      teams[c].teamName=("Rauma");
    } else if (menuChoice == 2) {
        printf("\nTurku Chosen\n");
        teams[c].teamName=("Turku");
      } else if(menuChoice == 3) {
        printf("\nHelsinki Chosen\n");
        teams[c].teamName=("Helsinki");
      } else if(menuChoice == 4) {
        printf("\nTampere Chosen\n");
        teams[c].teamName=("Tampere");
      } else if(menuChoice > 4) {
        printf("Invalid Input!\n");
        teams[c].teamName=("Error - Invalid Name");
      } else if(menuChoice <= 0) {
        printf("Invalid Input!\n");
        teams[c].teamName=("Error - Invalid Name");
      }

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
     printf("Team Rating: %-.1f out 10\n", arrayPointer->teamRating);

     printf("-------------------------\n");

     arrayPointer++;
   }

}

void teamRatingCalculator(TEAM *hockeyTeam) {


     float ratingCalculation = 0.0;


     ratingCalculation = ((float)hockeyTeam->teamWins)/((float)hockeyTeam->totalGamesPlayed);

     ratingCalculation *= 10;


     hockeyTeam->teamRating = ratingCalculation;

 }
