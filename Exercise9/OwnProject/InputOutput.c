/*
  File:         HockeyTeams.c
  Author:	      Nicholas Navarro
  Description:  File that handles user inputs and stores fixtures and points for team.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct PLAYER {
  int playerNumber;
  char* playerNationality;
  char* firstName;
  char* lastName;
  char* playerPosition;
  char* playerHand;
  int age;
  int yearAcquired;

} PLAYER;


PLAYER *fileToPlayerList(PLAYER *playerArrayPointer, char *filePath) {

  FILE *openFile = fopen(filePath, "r");
  int c = 0;
  int ret = 0;



  printf("%s, opened \n", filePath);




  if (! openFile ) // equivalent to saying if ( in_file == NULL i.e if no file is found)
             {
                printf("Error!, file not found!\n");

             }

do { //while the end of file hasnt been read

    PLAYER *players = malloc(sizeof *players);

    players[c].playerNationality=(char*)malloc(sizeof(char*));
    players[c].firstName=(char*)malloc(sizeof(char*));
    players[c].lastName=(char*)malloc(sizeof(char*));
    players[c].playerPosition=(char*)malloc(sizeof(char*));
    players[c].playerHand=(char*)malloc(sizeof(char*));


    ret = fscanf(openFile, "%d %s %s %s %s %s %d %d\n", &players[c].playerNumber,
                          players[c].playerNationality,
                          players[c].firstName,
                          players[c].lastName,
                          players[c].playerPosition,
                          players[c].playerHand,
                          &players[c].age,
                          &players[c].yearAcquired );
    c++;
    playerArrayPointer = &players[0];

    }   while(ret != EOF);


    fclose(openFile); //close file
    printf("%s, closed, with %d players added to the List! \n", filePath, c+1); //makes sure file is closed, and prints number of entries made


    return playerArrayPointer;

}

void playerPrinter(PLAYER *arrayPointer, int size) {

  int i = 0;

  printf("\nPrinting Team List\n\n");

  for(i = 0; i < size; i++) {
     printf("Player First Name: %s\n", arrayPointer->firstName);
     //printf("Team Wins: %d\n", arrayPointer->teamWins);
     //printf("Team Ties: %d\n", arrayPointer->teamTies);
     //printf("Team Losses: %d\n", arrayPointer->teamLosses);
     //printf("Total Games Played: %d\n", arrayPointer->totalGamesPlayed);
     //printf("Team Rating: %-.1f\n", arrayPointer->teamRating);

     printf("-------------------------\n");

     arrayPointer++;
 }

}
