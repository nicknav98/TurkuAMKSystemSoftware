/*

  File:         Exercise9.c
  Author:	      Nicholas Navarro
  Description:  Exercise 9 - Array of structs

*/

/* IMPORTING LIBRARIES AND PRE PROCESSING */
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for certain functions outlined in main code comments
#include "Array.h" //Including Array.c and Array.h - please refer to these pages for more info



int main() {

  /* VARIABLE AND POINTER DEFINITIONS*/

  TEAM* emptyTeams = malloc(sizeof(emptyTeams)); //TEAM pointer for dynamic array of hockey teams, TEAM is a custom struct found in Array.c
  TEAM* fillTeams = malloc(sizeof(fillTeams)); //TEAM Pointer that will store the filled team array

  PLAYER* emptyPlayers = malloc(sizeof(emptyPlayers)); //PLAYER Poiner for dyamic array of hockey players, PLAYER is a custom struct found in Array.c
  PLAYER* playerList = malloc(sizeof(playerList)); //PLAYER pointer to filled array of hockey players
  int userInputTeams = 0; //integer to store the amoount of teams the user would like to input into array
  int userInputPlayers = 0;//integer to store amount of players the user would like to input to array

  printf("Please enter the amount of teams you would like to define: ");
  scanf("%d", &userInputTeams); //reads user input into variable

  if(userInputTeams <= 0){ //if the user enters a value less than 0
    printf("Invalid Input...Please Enter a value larger than 0, Program Terminating\n"); //ERROR MESSAGE PRINTING
    return 0; //Terminates program

  }

  fillTeams = teamArray(emptyTeams,userInputTeams); //function call to fill the empty array, and assign it the fillTeams pointer, using the array size defined by user Input
  free(emptyTeams); //FREES EMPTY POINTER !!
  arrayPrinter(fillTeams,userInputTeams); //prints the array of teams the user constructed

  printf("Please enter the amount of players you would like to define: ");
  scanf("%d", &userInputPlayers); //assigns user input to variable

  if(userInputPlayers <= 0){ //if user enters a value 0 or less
    printf("Invalid Input...Please Enter a value larger than 0, Program Terminating\n");//ERROR MESSAGE PRINT
    return 0;//Terminates Program

  }

  playerList = playerArray(emptyPlayers,userInputPlayers); //function call to assign players to array, with the size defined by UserInput
  free(emptyPlayers); //FREES EMPTY POINTER!!


  playersPrinter(playerList,userInputPlayers);//Function call to print list of players


  free(fillTeams);//FREES DYNAMIC MEMORY FROM TEAM POINTER

  free(playerList);//FREES DYNAMIC MEMORY FROM TEAM POINTER

  return 0; //Program terminates

}
