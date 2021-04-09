/*
  File:         HockeyTeams.c
  Author:	      Nicholas Navarro
  Description:  File that handles user inputs and stores fixtures and points for team.
*/

#include<stdio.h>//basic operation
#include<string.h>//string manipulaion
#include<stdlib.h>//randon number genration



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


void fileToPlayerList(PLAYER *playerArrayPointer, char *filePath) {//function that takes a file path and array of players, and assigns players from txt to array

  FILE *openFile = fopen(filePath, "r");//opens filepath in read format

  int c = 0;//positional variable

  /* VARIABLE INITIALIZATION -integer variables to read text files integers .*/
  int shirtNumber = 0; //var to hold shirt number
  int age = 0; //var to hold age from text file
  int year = 0; //var to hold year from text file

  /* VARIABLE INITIALIZATION - char variables to hold data from text file */
  char* firstname; //holds first name
  char* lastname; //holds last name
  char* nation; //holds nationality from text file
  char* position; //holds player postion from text file
  char* shootingHand; //holds shooting hand from text file
  char* team; //holds team name fom text file

  /* DYNAMIC MEMORY ALLOCATION - for char variables to be able to hold name strings for any size of name */

  firstname = (char*)malloc(sizeof(char*));

  lastname = (char*)malloc(sizeof(char*));

  nation = (char*)malloc(sizeof(char*));

  position = (char*)malloc(sizeof(char*));

  shootingHand = (char*)malloc(sizeof(char*));

  team = (char*)malloc(sizeof(char*));
 /* END OF DYANMIC MEMORY ALLOCATION */


  printf("%s, opened \n", filePath); //prints file is in the process of being opened

  if (! openFile ) // equivalent to saying if ( in_file == NULL i.e if no file is found)
             {
                printf("Error!, file not found!\n"); //prints error message

             }

  while(!feof(openFile)){ //while the end of file has not ben read

    fscanf(openFile,"%d %s %s %s %s %s %d %d %s\n", &shirtNumber, nation, firstname, lastname, position, shootingHand, &age, &year, team); //reads the data from text file in format the file is written in, and stores them in respective vars

    playerArrayPointer[c].playerNumber = shirtNumber; //assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].playerNationality = nation;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].firstName = firstname;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].lastName = lastname;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].playerPosition = position;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].playerHand = shootingHand;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].age = age;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].yearAcquired = year;//assigns data from text to pointer of players, with positional variable C pointing to address

    playerArrayPointer[c].Team = team;//assigns data from text to pointer of players, with positional variable C pointing to address


    /* DYNAMIC MEMORY ALLOCATION - Reseting variables so new data can be saved to them */
    firstname = (char*)malloc(sizeof(char*));

    lastname = (char*)malloc(sizeof(char*));

    nation = (char*)malloc(sizeof(char*));

    position = (char*)malloc(sizeof(char*));

    shootingHand = (char*)malloc(sizeof(char*));

    team = (char*)malloc(sizeof(char*));

    c++; //increases c, which in turn increases the position of the array

    }

    /*FREES ALL MEMORY FROM VARIABLES ONCE TEXT DATA TO ARRAY FUNCTION IS DONE */
    free(firstname);
    free(lastname);
    free(nation);
    free(position);
    free(shootingHand);
    free(team);


    fclose(openFile); //close file
    printf("%s, closed, with %d players added to the List! \n", filePath, c); //makes sure file is closed, and prints number of entries made

}

void playerPrinter(PLAYER *arrayPointer, int size) { //function that takes a filled array and its size as its arguemnets and prints content

  int i = 0; //positional variable

  printf("\nPrinting Team List\n\n");

  for(i = 0; i < size; i++) { //from each step from 0 to array size, increase c by 1, c is used to access the position of the array

    /*This function prints the arrays attributes line by line */

     printf("Player Number: %d\n", arrayPointer[i].playerNumber); //prints player number attribute
     printf("Player Nationality: %s\n", arrayPointer[i].playerNationality);//prints player nationality
     printf("Player First Name: %s\n", arrayPointer[i].firstName);//prints player first name
     printf("Player Last Name: %s\n", arrayPointer[i].lastName);//prints players last name
     printf("Player Position: %s\n", arrayPointer[i].playerPosition);//prints postion
     printf("Player's Shooting Hand: %s\n", arrayPointer[i].playerHand);//prints players shooting hand
     printf("Player's Age: %d\n", arrayPointer[i].age);//prints age
     printf("Player's Joined the Team in Year: %d\n", arrayPointer[i].yearAcquired);//prints year acquired, time spent in team
     printf("Player Belongs to Team: %s\n", arrayPointer[i].Team); //prints players team


     printf("-------------------------\n"); //seperator 


 }

}
