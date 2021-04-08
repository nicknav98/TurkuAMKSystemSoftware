/*
 * File:	Array.c
 * Author:	Nicholas Navarro
 * Description: .c file that contains all functions used in Exercise9.c, and also includes struct types
*/


/* IMPORTING LIBRARIES */
#include<stdio.h> //used for basic functions
#include<string.h> //used for string conversions
#include<stdlib.h> //used for scanf functions
#include<math.h>

typedef struct //custom defined data type TEAM
{
  char* teamName; //CHAR VARIABLE TO STORE TEAM NAME
  int league; //INT VARIABLE TO HOLD LEAGUE POSITION
  float rating; //FLOAT VARIABLE TO HOLD TEAM RATING
} TEAM; //Struct Identifier


typedef struct
{
  char* playerName; //CHAR VARIABLE TO HOLD PLAYER NAME
  char* Team; //CHAR VARIABLE TO HOLD TEAM PLAYER BELONGS TO
  float pointsPerGame; //FLOAT VARIABLE TO HOLD POINTS PER GAME
} PLAYER; //struct Identifier



TEAM *teamArray(TEAM *emptyArray, int numOfTeams) { //Array that takes in a empty array and an array size, which will be filled with user input


  int c = 0; //counter variable
  TEAM* teams = malloc(numOfTeams * sizeof *teams); //empty TEAM array with dynamic memory


  for(c = 0; c < numOfTeams; c++){ //for each step from 0 to the user inputted size
    printf("\nEnter details of Hockey Team %d\n\n", c + 1); //prints meesage plus array position

    printf("Enter Team Name: ");
    teams[c].teamName=(char*)malloc(sizeof(char*)); //allocates dyamic memory for string, since user can enter any name
    scanf("%s", teams[c].teamName); //scans user input and places it in array position with team name attribute

    printf("Enter league position: ");
    scanf("%d", &teams[c].league); //scan user input and places it into league attribute

    printf("Enter ŕating in format x.x out of 10: ");
    scanf("%f", &teams[c].rating); //scans user input and places it into league attribute

  }

  emptyArray = &teams[0];//points empty pointer to user crated array

  return emptyArray;//returns filled pointer





}

PLAYER *playerArray(PLAYER *emptyArray, int numOfPlayers) { //function that fills an empty pointer with a filled pointer that points to an array of players


  int c = 0;//counter variable
  PLAYER* players = malloc(numOfPlayers * sizeof *players);//dyanmically allocates size of players


  for(c = 0; c < numOfPlayers; c++){ //for each steop from 0 to user defined size
    printf("\nEnter details of Player  %d\n\n", c + 1); //prints instructions and array position

    printf("Enter Player Name: ");
    players[c].playerName=(char*)malloc(sizeof(char*));//dynamically allocates memory to string length
    scanf("%s", players[c].playerName);//scanfs users string and places it in playername attribute

    printf("Enter Player's Team: ");
    players[c].Team = (char*)malloc(sizeof(char*));////dynamically allocates memory to string length
    scanf("%s", players[c].Team);//scans and places it in team name

    printf("Enter points per game in format x.x out of 10: ");
    scanf("%f", &players[c].pointsPerGame);//reads float number and places it in pointspergame attribute

  }

  emptyArray = &players[0];//pointer points to filled array

  return emptyArray;//returns filled pointer

}

void arrayPrinter(TEAM *arrayPointer, int size) { //function thats prints a filled team array and takes the size of the array as a upper limit

  int i = 0;//counter variable

  printf("\nPrinting Team List\n");

  for(i = 0; i < size; i++) {//for each step from 0 to size of array
     printf("Team Name: %s\n", arrayPointer->teamName);//print team name attribute
     printf("League Position: %d\n", arrayPointer->league);//print league attriute
     printf("Team Rating: %.1f\n", arrayPointer->rating);//print team rating attribute

     printf("-------------------------\n");//seperator line

     arrayPointer++;//increase position of array
 }


}


void playersPrinter(PLAYER *arrayPointer, int size) { //function thats prints a filled player array and takes the size of the array as a upper limit

  int i = 0;

  printf("\nPrinting Player List\n");

  for(i = 0; i < size; i++) {//for each step from 0 to size of array
     printf("Player Name: %s\n", arrayPointer->playerName);//print playername attribute
     printf("Player's Team: %s\n", arrayPointer->Team);//print team attriute
     printf("Player's Points per Game: %.1f\n", arrayPointer->pointsPerGame);//print points per game attriute
     printf("-------------------------\n");//seperator line

     arrayPointer++;//increase position pointer 
 }


}
