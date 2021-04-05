
/*
  File:         HockeyGame.c
  Author:	      Nicholas Navarro
  Description:  A simulation game that randomly determines the outcome of games based on a set of attributes, users define the attributes for each time, and a game simulation takes place.
  The games are carried out in three periods and the teams are allocated on a leaderboard based of team perfomance, after a set amount of games played by each team, the winner of the league is displayed.

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#include "HockeyTeams.h"
#include "Simulation.h"
#include "InputOutput.h"

#define STOP 100

int main(){

    int userChoice = 0;
    int teamAmount = 0;

    char *raumaFile = "RaumaPlayerList.txt";

    srand(time(0));


    TEAM *emptyteamPtr = NULL;
    TEAM *fillteamPtr = NULL;
    PLAYER *raumaPlayerList = NULL;

    emptyteamPtr = (TEAM *)malloc(sizeof(TEAM));
    fillteamPtr = (TEAM *)malloc(sizeof(TEAM));
    raumaPlayerList = (PLAYER *)malloc(sizeof(PLAYER));






    printf("Welcome to the Hockey League Tournament!\n");
    printf("Please Select an Option: 1. Start || 2. Instructions || 3.Terminate Program: ");

    scanf("%d",&userChoice);


    while(userChoice == 1){

      printf("\nPlease Enter the Amount of Teams you would like to compete for the AMK CUP!\n");
      scanf("%d",&teamAmount);

      fillteamPtr = teamArray(emptyteamPtr,teamAmount);
      free(emptyteamPtr);
      //arrayPrinter(teamList, teamAmount);


      gameSimulation(fillteamPtr,(fillteamPtr + 1));


      teamRatingCalculator(fillteamPtr);
      teamRatingCalculator((fillteamPtr + 1));

      gameSimulation(fillteamPtr, (fillteamPtr + 1));





      arrayPrinter(fillteamPtr, teamAmount);

      fileToPlayerList(raumaPlayerList, raumaFile);

      playerPrinter(raumaPlayerList,2);





      userChoice = STOP;















    }


    free(fillteamPtr);
    return 0;


}
