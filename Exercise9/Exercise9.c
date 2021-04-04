/*
  File:         Exercise9.c
  Author:	      Nicholas Navarro
  Description:  Exercise 9 - Array of structs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Array.h"



int main() {
  TEAM* emptyTeams = malloc(sizeof(emptyTeams));
  TEAM* fillTeams = malloc(sizeof(fillTeams));

  PLAYER* emptyPlayers = malloc(sizeof(emptyPlayers));
  PLAYER* playerList = malloc(sizeof(playerList));
  int userInputTeams = 0;
  int userInputPlayers = 0;

  printf("Please enter the amount of teams you would like to define: ");
  scanf("%d", &userInputTeams);

  fillTeams = teamArray(emptyTeams,userInputTeams);
  arrayPrinter(fillTeams,userInputTeams);

  printf("Please enter the amount of players you would like to define: ");
  scanf("%d", &userInputPlayers);

  playerList = playerArray(emptyPlayers,userInputPlayers);
  playersPrinter(playerList,userInputPlayers);

  free(emptyTeams);
  free(fillTeams);
  free(emptyPlayers);
  free(playerList);

  return 0;

}
