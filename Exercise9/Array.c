/*
 * File:	Array.c
 * Author:	Nicholas Navarro
 * Description: Struct Program
*/

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct
{
  char* teamName;
  int league;
  float rating;
} TEAM;


typedef struct
{
  char* playerName;
  TEAM TEAM;
  float pointsPerGame;
} PLAYER;



TEAM *structArray(TEAM *emptyArray, int numOfTeams) {


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

  free (teams);



}

void arrayPrinter(TEAM *arrayPointer, int size) {

  int i = 0;

  printf("\nPrinting Team List\n");

  for(i = 0; i < size; i++) {
     printf("Team Name: %s\n", arrayPointer->teamName);
     printf("League Position: %d\n", arrayPointer->league);
     printf("Team Rating: %f\n", arrayPointer->rating);

     arrayPointer++;
 }


}
