/*
 * File:   		Exercise8.c
 * Author: Nicholas Navarro
 * Description: Exercise 8 Main Source Code
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h> //used to seed time
#include "Array.h"
#include "Calculation.h"
#include "Finder.h"


#define SIZE 10



int main() {

  /*TASK 4*/
  int *dynamicPtr = NULL;
  int *isCorrect = NULL;
  int userNum = 0;
  timeSeeder();






  dynamicPtr = (int*)malloc(SIZE *sizeof(int));

  memChecker(dynamicPtr);


  printf("Filling Array.....\n");
  arrayFiller(dynamicPtr, SIZE);
  printf("Printing Array.....\n");
  arrayPrinter(dynamicPtr, SIZE);

  free(dynamicPtr);
  memChecker(dynamicPtr);
  printf("Malloc Memory successfully freed.\n");

  /* TESTING DONE, GUESS GAME NOW FOLLOWS */

  printf("\n");
  printf("Welcome to the Guesser!\n");

  dynamicPtr = (int*)malloc(SIZE * sizeof(int));

  arrayFiller(dynamicPtr, SIZE);

  printf("Please Enter Your Guess: ");
  scanf("%d", &userNum);
  isCorrect = userGuess(dynamicPtr, SIZE, userNum);


  if(isCorrect == NULL) {
    printf("Your guess was not found in the array, better luck next time.....\n");

  } else {
    printf("Good Job! Your guess (%d) was found in memory address (%p), of the random array!\n", userNum, isCorrect);
  }

  free(dynamicPtr);
  memChecker(dynamicPtr);
  printf("Malloc Memory successfully freed.\n");


  /*Task 5 Starts from here*/

  int *dynamicInputPtr = NULL;
  char *userFile = "Numbers.txt";
  int *newArray = NULL;


  newArray = textToArray(dynamicInputPtr,userFile);


  arrayPrinter(newArray, 102);










  return 0;
}
