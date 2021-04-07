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

  char* Team;

} PLAYER;


void fileToPlayerList(PLAYER *playerArrayPointer, char *filePath) {

  FILE *openFile = fopen(filePath, "r");

  int c = 0;

  int shirtNumber = 0;
  int age = 0;
  int year = 0;

  char* firstname;
  char* lastname;
  char* nation;
  char* position;
  char* shootingHand;
  char* team;

  firstname = (char*)malloc(sizeof(char*));

  lastname = (char*)malloc(sizeof(char*));

  nation = (char*)malloc(sizeof(char*));

  position = (char*)malloc(sizeof(char*));

  shootingHand = (char*)malloc(sizeof(char*));

  team = (char*)malloc(sizeof(char*));



  printf("%s, opened \n", filePath);

  if (! openFile ) // equivalent to saying if ( in_file == NULL i.e if no file is found)
             {
                printf("Error!, file not found!\n");

             }

  while(!feof(openFile)){

    fscanf(openFile,"%d %s %s %s %s %s %d %d %s\n", &shirtNumber, nation, firstname, lastname, position, shootingHand, &age, &year, team);

    playerArrayPointer[c].playerNumber = shirtNumber;

    playerArrayPointer[c].playerNationality = nation;

    playerArrayPointer[c].firstName = firstname;

    playerArrayPointer[c].lastName = lastname;

    playerArrayPointer[c].playerPosition = position;

    playerArrayPointer[c].playerHand = shootingHand;

    playerArrayPointer[c].age = age;

    playerArrayPointer[c].yearAcquired = year;

    playerArrayPointer[c].Team = team;


    firstname = (char*)malloc(sizeof(char*));

    lastname = (char*)malloc(sizeof(char*));

    nation = (char*)malloc(sizeof(char*));

    position = (char*)malloc(sizeof(char*));

    shootingHand = (char*)malloc(sizeof(char*));

    team = (char*)malloc(sizeof(char*));

    c++;

    }


    free(firstname);
    free(lastname);
    free(nation);
    free(position);
    free(shootingHand);
    free(team);


    fclose(openFile); //close file
    printf("%s, closed, with %d players added to the List! \n", filePath, c); //makes sure file is closed, and prints number of entries made

}

void playerPrinter(PLAYER *arrayPointer, int size) {

  int i = 0;

  printf("\nPrinting Team List\n\n");

  for(i = 0; i < size; i++) {
     printf("Player Number: %d\n", arrayPointer[i].playerNumber);
     printf("Player Nationality: %s\n", arrayPointer[i].playerNationality);
     printf("Player First Name: %s\n", arrayPointer[i].firstName);
     printf("Player Last Name: %s\n", arrayPointer[i].lastName);
     printf("Player Position: %s\n", arrayPointer[i].playerPosition);
     printf("Player's Shooting Hand: %s\n", arrayPointer[i].playerHand);
     printf("Player's Age: %d\n", arrayPointer[i].age);
     printf("Player's Joined the Team in Year: %d\n", arrayPointer[i].yearAcquired);
     printf("Player Belongs to Team: %s\n", arrayPointer[i].Team);


     printf("-------------------------\n");


 }

}
