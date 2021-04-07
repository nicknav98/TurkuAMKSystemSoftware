
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

#define TEAMAMOUNT 2
#define PLAYERAMOUNT 5

int main(){

    int userChoice = 0;
    int gameAmount = 0;
    int gameCounter = 0;

    char *raumaFile = "RaumaPlayerList.txt";
    char *helsinkiFile = "HelsinkiPlayerList.txt";
    char *tampereFile = "TamperePlayerList.txt";
    char *turkuFile = "TurkuPlayerList.txt";





    char *writeFile = "Results.txt";

    srand(time(0));


    TEAM *emptyteamPtr = NULL;
    TEAM *fillteamPtr = NULL;

    PLAYER *raumaPlayerList = NULL;
    PLAYER *helsinkiPlayerList = NULL;
    PLAYER *tamperePlayerList = NULL;
    PLAYER *turkuPlayerList = NULL;




    emptyteamPtr = (TEAM *)malloc(sizeof(TEAM));
    fillteamPtr = (TEAM *)malloc(sizeof(TEAM));

    raumaPlayerList = malloc(sizeof(PLAYER)*8);
    raumaPlayerList->playerNationality = (char*)malloc(sizeof(char));
    raumaPlayerList->firstName = (char*)malloc(sizeof(char));
    raumaPlayerList->lastName = (char*)malloc(sizeof(char));
    raumaPlayerList->playerPosition = (char*)malloc(sizeof(char));
    raumaPlayerList->playerHand = (char*)malloc(sizeof(char));
    raumaPlayerList->Team = (char*)malloc(sizeof(char));

    helsinkiPlayerList = malloc(sizeof(PLAYER)*8);
    helsinkiPlayerList->playerNationality = (char*)malloc(sizeof(char));
    helsinkiPlayerList->firstName = (char*)malloc(sizeof(char));
    helsinkiPlayerList->lastName = (char*)malloc(sizeof(char));
    helsinkiPlayerList->playerPosition = (char*)malloc(sizeof(char));
    helsinkiPlayerList->playerHand = (char*)malloc(sizeof(char));
    helsinkiPlayerList->Team = (char*)malloc(sizeof(char));

    tamperePlayerList = malloc(sizeof(PLAYER)*8);
    tamperePlayerList->playerNationality = (char*)malloc(sizeof(char));
    tamperePlayerList->firstName = (char*)malloc(sizeof(char));
    tamperePlayerList->lastName = (char*)malloc(sizeof(char));
    tamperePlayerList->playerPosition = (char*)malloc(sizeof(char));
    tamperePlayerList->playerHand = (char*)malloc(sizeof(char));
    tamperePlayerList->Team = (char*)malloc(sizeof(char));

    turkuPlayerList = malloc(sizeof(PLAYER)*8);
    turkuPlayerList->playerNationality = (char*)malloc(sizeof(char));
    turkuPlayerList->firstName = (char*)malloc(sizeof(char));
    turkuPlayerList->lastName = (char*)malloc(sizeof(char));
    turkuPlayerList->playerPosition = (char*)malloc(sizeof(char));
    turkuPlayerList->playerHand = (char*)malloc(sizeof(char));
    turkuPlayerList->Team = (char*)malloc(sizeof(char));







    printf("Welcome to the Hockey League Tournament!\n");
    printf("Please Select an Option: 1. Start || 2. Instructions || 3.Terminate Program: ");

    scanf("%d",&userChoice);


    while(userChoice == 1){

      printf("\nPlease Enter the you would like to compete in the AMK Pond Hockey Cup!\n");


      fillteamPtr = teamArray(emptyteamPtr,TEAMAMOUNT);
      free(emptyteamPtr);

      printf("\nPlease Enter the amount of games you would like to simulate: ");
      scanf("%d", &gameAmount);

      for (gameCounter = 0; gameCounter < gameAmount; gameCounter++) {
      gameSimulation(fillteamPtr,(fillteamPtr + 1));
      teamRatingCalculator(fillteamPtr);
      teamRatingCalculator((fillteamPtr + 1));
      }

      userChoice = STOP;
    }

    while(userChoice == STOP){



    printf("Tournament Now Over! Results printed below!\n\n");

    arrayPrinter(fillteamPtr, TEAMAMOUNT);

    printf("-------------------------------------\n");

    if(strcmp(fillteamPtr->teamName, "Turku") == 0){
       fileToPlayerList(turkuPlayerList,turkuFile);
       playerPrinter(turkuPlayerList,PLAYERAMOUNT);
    }

    else if(strcmp(fillteamPtr->teamName, "Tampere") == 0){
       fileToPlayerList(tamperePlayerList,tampereFile);
       playerPrinter(tamperePlayerList,PLAYERAMOUNT);
    }

    else if(strcmp(fillteamPtr->teamName, "Rauma") == 0){
       fileToPlayerList(raumaPlayerList,raumaFile);
       playerPrinter(raumaPlayerList,PLAYERAMOUNT);
    }

    else if(strcmp(fillteamPtr->teamName, "Helsinki") == 0){
       fileToPlayerList(helsinkiPlayerList,helsinkiFile);
       playerPrinter(helsinkiPlayerList,PLAYERAMOUNT);
    }

    if(strcmp((fillteamPtr+1)->teamName, "Turku") == 0){
       fileToPlayerList(turkuPlayerList,turkuFile);
       playerPrinter(turkuPlayerList,PLAYERAMOUNT);
    }

    else if(strcmp((fillteamPtr+1)->teamName, "Tampere") == 0){
       fileToPlayerList(tamperePlayerList,tampereFile);
       playerPrinter(tamperePlayerList,PLAYERAMOUNT);
    }

    else if(strcmp((fillteamPtr+1)->teamName, "Rauma") == 0){
       fileToPlayerList(raumaPlayerList,raumaFile);
       playerPrinter(raumaPlayerList,PLAYERAMOUNT);
    }

    else if(strcmp((fillteamPtr+1)->teamName, "Helsinki") == 0){
       fileToPlayerList(helsinkiPlayerList,helsinkiFile);
       playerPrinter(helsinkiPlayerList,PLAYERAMOUNT);
    }



    printf("\n---------------------\n");

    printf("\nSaving results to file...\n");

    teamToFile(writeFile, fillteamPtr, TEAMAMOUNT);

    printf("Thank you for playing Hockey Simulator, please check out my other repo's on GitHub! @NickNav98\n");

    printf("Author: Nicholas Navarro \nExercise 9 System Software \nTurku AMK\n\n");


    free(fillteamPtr);
    free(raumaPlayerList);
    free(helsinkiPlayerList);
    return 0;
  }







    while(userChoice == 2) {
      printf("This is a simulation game of 2 hockey teams fighting for the Turku AMK Cup!\n");
      printf("Follow onscreen prompts to enter the amount of games you would like the teams to play, and what teams you would like to see battle for the cup!\n");
      printf("The algorithm considers past game performace, calculates a team rating based on wins divided by total games played, and simulates 3 periods\n");
      printf("Please Select an Option: 1. Start || 2. Instructions || 3.Terminate Program: ");
      scanf("%d",&userChoice);
    }


    while(userChoice == 3){
      printf("Program Terminated\n");
      return 0;
    }


    while(userChoice != 3 || userChoice != 2 || userChoice != 1 || userChoice != STOP) {
      printf("Invalid Input\n");
      printf("Program Terminated\n");
      return 0;
    }




    return 0;


}
