/*
  File:         Exercise9.c
  Author:	      Nicholas Navarro
  Description:  Exercise 9 - Array of structs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Array.h"

#define MAX 256

int main() {
  TEAM* emptyTeams = NULL;
  TEAM* fillTeams = NULL;
  int userInput = 0;

  printf("Please enter the amount of teams you would liket to define: ");
  scanf("%d", &userInput);

  fillTeams = structArray(emptyTeams,userInput);
  arrayPrinter(fillTeams,userInput);



  return 0;

}
