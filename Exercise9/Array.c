/*
 * File:	Array.c
 * Author:	Nicholas Navarro
 * Description: Struct Program
*/

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
  char* teamName;
  int league;
  float rating;
} TEAM;


typedef struct
{
  char* playerName;
  char* Team;
  float pointsPerGame;
} PLAYER;



TEAM *teamArray(TEAM *emptyArray, int numOfTeams) {


  int c = 0;
  TEAM* teams = malloc(numOfTeams * sizeof *teams);


  for(c = 0; c < numOfTeams; c++){
    printf("\nEnter details of Hockey Team %d\n\n", c + 1);

    printf("Enter Team Name: ");
    teams[c].teamName=(char*)malloc(sizeof(char*));
    scanf("%s", teams[c].teamName);

    printf("Enter league position: ");
    scanf("%d", &teams[c].league);

    printf("Enter ŕating in format x.x out of 10: ");
    scanf("%f", &teams[c].rating);

  }

  emptyArray = &teams[0];

  return emptyArray;

  



}

PLAYER *playerArray(PLAYER *emptyArray, int numOfPlayers) {


  int c = 0;
  PLAYER* players = malloc(numOfPlayers * sizeof *players);


  for(c = 0; c < numOfPlayers; c++){
    printf("\nEnter details of Player  %d\n\n", c + 1);

    printf("Enter Player Name: ");
    players[c].playerName=(char*)malloc(sizeof(char*));
    scanf("%s", players[c].playerName);

    printf("Enter Player's Team: ");
    players[c].Team = (char*)malloc(sizeof(char*));
    scanf("%s", players[c].Team);

    printf("Enter points per game in format x.x out of 10: ");
    scanf("%f", &players[c].pointsPerGame);

  }

  emptyArray = &players[0];

  return emptyArray;

  free (players);



}

void arrayPrinter(TEAM *arrayPointer, int size) {

  int i = 0;

  printf("\nPrinting Team List\n");

  for(i = 0; i < size; i++) {
     printf("Team Name: %s\n", arrayPointer->teamName);
     printf("League Position: %d\n", arrayPointer->league);
     printf("Team Rating: %.1f\n", arrayPointer->rating);

     printf("-------------------------\n");

     arrayPointer++;
 }


}


void playersPrinter(PLAYER *arrayPointer, int size) {

  int i = 0;

  printf("\nPrinting Player List\n");

  for(i = 0; i < size; i++) {
     printf("Player Name: %s\n", arrayPointer->playerName);
     printf("Player's Team: %s\n", arrayPointer->Team);
     printf("Player's Points per Game: %.1f\n", arrayPointer->pointsPerGame);
     printf("-------------------------\n");

     arrayPointer++;
 }


}
