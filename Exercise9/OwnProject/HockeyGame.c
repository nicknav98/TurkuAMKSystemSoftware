
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
    char *helsinkiFile = "HelsinkiPlayerList.txt";

    srand(time(0));


    TEAM *emptyteamPtr = NULL;
    TEAM *fillteamPtr = NULL;

    PLAYER *raumaPlayerList = NULL;
    PLAYER *helsinkiPlayerList = NULL;




    emptyteamPtr = (TEAM *)malloc(sizeof(TEAM));
    fillteamPtr = (TEAM *)malloc(sizeof(TEAM));

    raumaPlayerList = malloc(sizeof(PLAYER));
    raumaPlayerList->playerNationality = (char*)malloc(sizeof(char));
    raumaPlayerList->firstName = (char*)malloc(sizeof(char));
    raumaPlayerList->lastName = (char*)malloc(sizeof(char));
    raumaPlayerList->playerPosition = (char*)malloc(sizeof(char));
    raumaPlayerList->playerHand = (char*)malloc(sizeof(char));
    raumaPlayerList->Team = (char*)malloc(sizeof(char));

    helsinkiPlayerList = malloc(sizeof(PLAYER));
    helsinkiPlayerList->playerNationality = (char*)malloc(sizeof(char));
    helsinkiPlayerList->firstName = (char*)malloc(sizeof(char));
    helsinkiPlayerList->lastName = (char*)malloc(sizeof(char));
    helsinkiPlayerList->playerPosition = (char*)malloc(sizeof(char));
    helsinkiPlayerList->playerHand = (char*)malloc(sizeof(char));
    helsinkiPlayerList->Team = (char*)malloc(sizeof(char));







    printf("Welcome to the Hockey League Tournament!\n");
    printf("Please Select an Option: 1. Start || 2. Instructions || 3.Terminate Program: ");

    scanf("%d",&userChoice);


    while(userChoice == 1){

      printf("\nPlease Enter the Amount of Teams you would like to compete in the AMK Pond Hockey League!\n");
      scanf("%d",&teamAmount);

      fillteamPtr = teamArray(emptyteamPtr,teamAmount);
      free(emptyteamPtr);



      gameSimulation(fillteamPtr,(fillteamPtr + 1));


      teamRatingCalculator(fillteamPtr);
      teamRatingCalculator((fillteamPtr + 1));

      gameSimulation(fillteamPtr, (fillteamPtr + 1));

      printf("Tournament Now Over! Results printed below!\n\n");





      arrayPrinter(fillteamPtr, teamAmount);

      fileToPlayerList(raumaPlayerList, raumaFile);

      playerPrinter(raumaPlayerList,4);

      fileToPlayerList(helsinkiPlayerList, helsinkiFile);

      playerPrinter(helsinkiPlayerList,4);

      printf("\n---------------------\n");

      printf("Thank you for playing Hockey Simulator, please check out my other repo's on GitHub! @NickNav98");

      printf("Author: Nicholas Navarro \n Exercise 9 System Software \n Turku AMK\n\n");







      userChoice = STOP;















    }


    free(fillteamPtr);
    free(raumaPlayerList);
    free(helsinkiPlayerList);
    return 0;


}
