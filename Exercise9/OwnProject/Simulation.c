/*
  File:         Simulation.c
  Author:	      Nicholas Navarro
  Description:  File that handles simulation functions

*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
#define STOP 100

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

void gameSimulation(TEAM *hockeyTeam1, TEAM *hockeyTeam2){

  int gamePeriod = 0;
  int userInput = 0;

  int team1Goals = 0;
  int team2Goals = 0;

  printf("Enter 1 to start the game: ");
  scanf("%d", &userInput);

  while(userInput != STOP){

    for(gamePeriod = 0; gamePeriod < 3; gamePeriod++){

      team1Goals = team1Goals + rand() % 5;
      team2Goals = team2Goals + rand() % 5;
    }



    userInput = STOP;

    }


    if(team1Goals > team2Goals){
      printf("Team 1 won the game with %d goals compared to Team 2's %d goals!\n", team1Goals, team2Goals);
      hockeyTeam1->teamWins += 1;
      hockeyTeam2->teamLosses += 1;
    } else if (team2Goals > team1Goals){
      printf("Team 2 won the game with %d goals compared to Team 1's %d goals!\n", team2Goals, team1Goals);
      hockeyTeam2->teamWins += 1;
      hockeyTeam1->teamLosses += 1;
    } else if (team1Goals == team2Goals){
      printf("Team 1 tied the game with %d goals compared to Team 2's %d goals!\n", team1Goals, team2Goals);
      hockeyTeam1->teamTies += 1;
      hockeyTeam2->teamTies += 1;
    }






  }
