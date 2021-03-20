/*
 * File:   		Exercise8.c
 * Author: Nicholas Navarro
 * Description: Exercise 8 Main Source Code
 */



#include <stdio.h>
#include <stdlib.h> //scanf functions
#include <time.h> //used to seed time
#include <string.h> //string manipulation functions
#include "Array.h"
#include "Calculation.h"
#include "Finder.h"


#define SIZE 10 //for first part, tasks calls for size to be 10
#define MAX 256 //maxmun value that an integer can be





int main() {

  /*TASK 4*/
  int *dynamicPtr = NULL; //ptr for array to be filled dynamically
  int *isCorrect = NULL;  //ptr to store filled array
  int userNum = 0; //user input for guess of number
  timeSeeder(); //function call to seed time






  dynamicPtr = (int*)malloc(SIZE *sizeof(int)); //dynamically allocate array of size 256 x maximum value of int

  memChecker(dynamicPtr); //checks if memory has been allocated


  printf("Filling Array.....\n");
  arrayFiller(dynamicPtr, SIZE); //function call to fill array with random numbers
  printf("Printing Array.....\n");
  arrayPrinter(dynamicPtr, SIZE); //function call to print new array for testing

  free(dynamicPtr); //frees memory
  memChecker(dynamicPtr); //checks if memory is clear
  printf("Malloc Memory successfully freed.\n"); //if no message has come, memory is clear

  /* TESTING DONE, GUESS GAME NOW FOLLOWS */

  printf("\n");
  printf("Welcome to the Guesser!\n");

  dynamicPtr = (int*)malloc(SIZE * sizeof(int)); //again dynamically allocates array size

  arrayFiller(dynamicPtr, SIZE); //fills array with random numbers

  printf("Please Enter Your Guess: ");
  scanf("%d", &userNum); //reads guess
  isCorrect = userGuess(dynamicPtr, SIZE, userNum); //assigns the value returned from isCorrect Function


  if(isCorrect == NULL) { //if iscorrect records empty pointer
    printf("Your guess was not found in the array, better luck next time.....\n"); //fail message

  } else { //if pointer contains value
    printf("Good Job! Your guess (%d) was found in memory address (%p), of the random array!\n", userNum, isCorrect);
  }

  free(dynamicPtr); //free memory
  memChecker(dynamicPtr);//checks if memory is free
  printf("Malloc Memory successfully freed.\n");



  printf("\nTask 5, find the largest sum of adjacent numbers.\n");


  /*Task 5 Starts from here*/

  int *dynamicInputPtr = NULL; //first array ptr to pass into function text to fill
  char *userFile = "Numbers.txt"; //path for numbers to be filled
  char *testFile = "Test.txt"; //path for test file to check calculation
  int *newArray = NULL; //array to hold first filled array from numbers.txt
  int *testSumArray = NULL;//second array to be passed into texttofill function
  int *testArrayFilled = NULL;//array to hold filled array from file text.txt
  int newArraySize = 0; //int to hold size of first array
  int testArraySize = 0; //int to hold size of second array


  dynamicInputPtr = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  memset(dynamicInputPtr, '-', MAX * sizeof(int)); //sets empty cells to be set with value '-'

  testSumArray = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  memset(testSumArray, '-', MAX * sizeof(int));//sets empty cells to be set with value '-'

  newArray = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  memset(newArray, '-', MAX * sizeof(int));//sets empty cells to be set with value '-'

  testArrayFilled = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  memset(testArrayFilled, '-', MAX * sizeof(int));//sets empty cells to be set with value '-'

  newArray = textToArray(dynamicInputPtr,userFile); //function call to collect numbers from numbers.txt

  newArraySize = arraySize(newArray); //function call to get size of new array

  arrayPrinter(newArray, newArraySize); //function call to print new array for error checking


  testArrayFilled = textToArray(testSumArray,testFile); //function call to fill array with test.txt

  testArraySize = arraySize(testArrayFilled);//function call to get size of new array

  arrayPrinter(testArrayFilled,testArraySize);//prints new array for error checking

  maximuSubArray(testSumArray, testArraySize);//function call to find biggest 5 adjacent sum value


  free(newArray); //frees memory

  free(testArrayFilled); //frees memory


  printf("Malloc Memory successfully freed.\n");

  return 0;
}
