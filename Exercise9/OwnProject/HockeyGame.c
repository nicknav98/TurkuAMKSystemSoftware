
/*
  File:         HockeyGame.c
  Author:	      Nicholas Navarro
  Description:  A simulation game that randomly determines the outcome of games based on a set of attributes, users define the attributes for each time, and a game simulation takes place.
  The games are carried out in three periods and the teams are allocated on a leaderboard based of team perfomance, after a set amount of games played by each team, the winner of the league is displayed.

*/
/* IMPORTING LIBRAARIES*/
#include<stdio.h>//basic operations
#include<string.h>//string manipulation and struct management
#include<stdlib.h>//conversion and random number functions
#include<time.h>//used to seed random number generator

#include "HockeyTeams.h"//CHECK HOCKEYTEAMS.C
#include "Simulation.h"//CHECK SIMULATION.C
#include "InputOutput.h"//CHECK InputOutput.C

#define STOP 100 //As we use userinput to select through menus, I assigned 100 as STOP to stop certain while loops

#define TEAMAMOUNT 2 //Max amount of teams allowed in team array
#define PLAYERAMOUNT 6 //Max amount of players allowed in a team

int main(){

    int userChoice = 0; //variable to hold user choice
    int gameAmount = 0; //counter to hold the amount of games
    int gameCounter = 0; //counts amounts of game played

    /* IMPORTING TEXT FILES CONTAINING TEAMS PLAYERS*/
    char *raumaFile = "RaumaPlayerList.txt";
    char *helsinkiFile = "HelsinkiPlayerList.txt";
    char *tampereFile = "TamperePlayerList.txt";
    char *turkuFile = "TurkuPlayerList.txt";


    char *writeFile = "Results.txt"; //FILE THAT HOLDS TOURNAMENT RESULTS

    srand(time(0)); //Seeds random number for simulation functions


    TEAM *emptyteamPtr = NULL;//initalized pointer for empty team array
    TEAM *fillteamPtr = NULL;//initalized pointer to hold filled team array

    /* struct PLAYER array pointers, respective to teams - used to be filled with players from text file */
    PLAYER *raumaPlayerList = NULL;
    PLAYER *helsinkiPlayerList = NULL;
    PLAYER *tamperePlayerList = NULL;
    PLAYER *turkuPlayerList = NULL;




    emptyteamPtr = (TEAM *)malloc(sizeof(TEAM)); //dynamic memory allocation for empty team array
    fillteamPtr = (TEAM *)malloc(sizeof(TEAM));//dyamic memory allocated for team arrays

    /*START----assigning dyanmic memory to each attribute in our defined struct players array */
    raumaPlayerList = malloc(sizeof(PLAYER)*8); //times by 8 so that we can have more than 4 players in our player lists
    raumaPlayerList->playerNationality = (char*)malloc(sizeof(char));
    raumaPlayerList->firstName = (char*)malloc(sizeof(char));
    raumaPlayerList->lastName = (char*)malloc(sizeof(char));
    raumaPlayerList->playerPosition = (char*)malloc(sizeof(char));
    raumaPlayerList->playerHand = (char*)malloc(sizeof(char));
    raumaPlayerList->Team = (char*)malloc(sizeof(char));

    helsinkiPlayerList = malloc(sizeof(PLAYER)*8);//times by 8 so that we can have more than 4 players in our player lists
    helsinkiPlayerList->playerNationality = (char*)malloc(sizeof(char));
    helsinkiPlayerList->firstName = (char*)malloc(sizeof(char));
    helsinkiPlayerList->lastName = (char*)malloc(sizeof(char));
    helsinkiPlayerList->playerPosition = (char*)malloc(sizeof(char));
    helsinkiPlayerList->playerHand = (char*)malloc(sizeof(char));
    helsinkiPlayerList->Team = (char*)malloc(sizeof(char));

    tamperePlayerList = malloc(sizeof(PLAYER)*8);//times by 8 so that we can have more than 4 players in our player lists
    tamperePlayerList->playerNationality = (char*)malloc(sizeof(char));
    tamperePlayerList->firstName = (char*)malloc(sizeof(char));
    tamperePlayerList->lastName = (char*)malloc(sizeof(char));
    tamperePlayerList->playerPosition = (char*)malloc(sizeof(char));
    tamperePlayerList->playerHand = (char*)malloc(sizeof(char));
    tamperePlayerList->Team = (char*)malloc(sizeof(char));

    turkuPlayerList = malloc(sizeof(PLAYER)*8);//times by 8 so that we can have more than 4 players in our player lists
    turkuPlayerList->playerNationality = (char*)malloc(sizeof(char));
    turkuPlayerList->firstName = (char*)malloc(sizeof(char));
    turkuPlayerList->lastName = (char*)malloc(sizeof(char));
    turkuPlayerList->playerPosition = (char*)malloc(sizeof(char));
    turkuPlayerList->playerHand = (char*)malloc(sizeof(char));
    turkuPlayerList->Team = (char*)malloc(sizeof(char));
    /*DYANMIC MEMORRY ALLOCATION END*/






    printf("Welcome to the Hockey League Tournament!\n");
    printf("Please Select an Option: 1. Start || 2. Instructions || 3.Terminate Program: ");

    scanf("%d",&userChoice); //users input is stored into userchoise variable

    while(userChoice == 2) { //If user chooses instruction option
      printf("This is a simulation game of 2 hockey teams fighting for the Turku AMK Cup!\n");
      printf("Follow onscreen prompts to enter the amount of games you would like the teams to play, and what teams you would like to see play for the cup!\n");
      printf("The algorithm considers past game performance, calculates a team rating based on wins divided by total games played, and simulates 3 periods per game based on potentiality to score.\n\n");
      printf("Please Select an Option: 1. Start || 2. Instructions || 3.Terminate Program: ");//repeats the options for user to select, to be able to play or terminate the program
      scanf("%d",&userChoice);//users input is stored into userchoise variable
    }


    while(userChoice == 1){//if user choose start

      printf("\n----Select two teams you would like to compete in the AMK Hockey Cup!----- \n\n");


      fillteamPtr = teamArray(emptyteamPtr,TEAMAMOUNT); //function call to fill team array with fillteamPtr
      free(emptyteamPtr);//frees empty team ptr as we dont need memory anymore

      /*Function returns Error - Invalid Name, if the user doesnt select a viable option*/
      if(strcmp(fillteamPtr->teamName, "Error - Invalid Name") == 0) { //string comparison, error catching - if users doesnt select an option, the program terminates
        printf("Error Found! Invalid User Input....Program Terminating....\n");
        return 0;//program termination
      } else if(strcmp((fillteamPtr+1)->teamName, "Error - Invalid Name") == 0) {//string comparison, error catching - if users doesnt select an option, the program terminates, function
        printf("Error Found! Invalid User Input....Program Terminating....\n");
        return 0;//program terminiation
      }

      printf("\nPlease Enter the amount of games you would like to simulate: ");
      scanf("%d", &gameAmount); //scans user input for amount of games to be played

      if (gameAmount < 0){ //error catching, if user enters value less than 0
        printf("Please enter an integer bigger than 0....Program Terminating\n");
        return 0;
      } else if(gameAmount == 0) { //error catching, if user enters 0
        printf("0 Games have been played due to unforeseen circumstances, program terminating...\n");
        return 0;
      }

      for (gameCounter = 0; gameCounter < gameAmount; gameCounter++) { //from 0 to users game amount, increasing by 1
      gameSimulation(fillteamPtr,(fillteamPtr + 1));//function call to play game
      teamRatingCalculator(fillteamPtr); //function call to calculate team rating
      teamRatingCalculator((fillteamPtr + 1)); //function call to calculate team rating for second team
      }

      userChoice = STOP;//Stops while loop
    }

    while(userChoice == STOP){ //when the userchoice is equal to STOP value



    printf("Tournament Now Over! Results printed below!\n\n");

    arrayPrinter(fillteamPtr, TEAMAMOUNT);//prints array of team with results simulated from the game, using the pointer and array size as parameters

    printf("-------------------------------------\n");


    /*DETERMINING WHAT TEAMS HAVE PLAYED ACCORDING TO TEAM NAME AND PRINTING PLAYER LIST*/
    if(strcmp(fillteamPtr->teamName, "Turku") == 0) {//if first team name is Turku
       fileToPlayerList(turkuPlayerList,turkuFile);//function call to fill turku team pointer with players from turku txt file
       playerPrinter(turkuPlayerList,PLAYERAMOUNT);
    }

    else if(strcmp(fillteamPtr->teamName, "Tampere") == 0) { //if first team name is Tampere
       fileToPlayerList(tamperePlayerList,tampereFile);//function call to fill tampere team pointer with players from tampere txt file
       playerPrinter(tamperePlayerList,PLAYERAMOUNT);//prints pointer
    }

    else if(strcmp(fillteamPtr->teamName, "Rauma") == 0) { //if first name is Rauma
       fileToPlayerList(raumaPlayerList,raumaFile);//function call to fill rauma team pointer with players from rauma txt file
       playerPrinter(raumaPlayerList,PLAYERAMOUNT);//prints pointer
    }

    else if(strcmp(fillteamPtr->teamName, "Helsinki") == 0) { //if first name is Helsinki
       fileToPlayerList(helsinkiPlayerList,helsinkiFile);//function call to fill heslinki team pointer with players from helsinki txt file
       playerPrinter(helsinkiPlayerList,PLAYERAMOUNT);//prints pointer
    }



    /* SEPERATOR */

    if(strcmp((fillteamPtr+1)->teamName, "Turku") == 0) { //if second team name is Turku
       fileToPlayerList(turkuPlayerList,turkuFile);//function call to fill turku team pointer with players from turku txt file
       playerPrinter(turkuPlayerList,PLAYERAMOUNT);//prints pointer
    }

    else if(strcmp((fillteamPtr+1)->teamName, "Tampere") == 0) {//if second team name is Tampere
       fileToPlayerList(tamperePlayerList,tampereFile);//function call to fill tampere team pointer with players from tampere txt file
       playerPrinter(tamperePlayerList,PLAYERAMOUNT);//prints pointer
    }

    else if(strcmp((fillteamPtr+1)->teamName, "Rauma") == 0) {//if second team name is Rauma
       fileToPlayerList(raumaPlayerList,raumaFile);//function call to fill rauma team pointer with players from rauma txt file
       playerPrinter(raumaPlayerList,PLAYERAMOUNT);//prints pointer
    }

    else if(strcmp((fillteamPtr+1)->teamName, "Helsinki") == 0) {//if second team name is Helsinki
       fileToPlayerList(helsinkiPlayerList,helsinkiFile);//function call to fill heslinki team pointer with players from helsinki txt file
       playerPrinter(helsinkiPlayerList,PLAYERAMOUNT);//prints pointer
    }





    printf("\n---------------------\n");

    printf("\nSaving results to file...\n");

    teamToFile(writeFile, fillteamPtr, TEAMAMOUNT); //function call to print the game results to a text file

    printf("Thank you for playing Hockey Simulator, please check out my other repo's on GitHub! @NickNav98\n");

    printf("Author: Nicholas Navarro \nExercise 9 System Software \nTurku AMK\n\n");


    free(fillteamPtr); //DYANMIC MEMORY FREED
    free(raumaPlayerList); //DYNAMIC MEMORY FREED
    free(helsinkiPlayerList); //DYNAMIC MEMORY FREED
    return 0; //terminates program
  }

    while(userChoice == 3){ //if user chooses to terminates program
      printf("Program Terminated\n");
      return 0;//terminates program
    }


    while(userChoice != 3 || userChoice != 2 || userChoice != 1 || userChoice != STOP) { //if user enters an option or string or character that is not viable
      printf("Invalid Input\n"); //error message
      printf("Program Terminated\n");
      return 0;//program terminates
    }


}
