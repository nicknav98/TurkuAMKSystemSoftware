/*
 * File:   		Array.c
 * Author: Nicholas Navarro
 * Description: Array Function
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "Array.h"

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.
void arrayPrinter(int *arrPointer, int size) {



	printf("The values of the array are: \n");

  int i = 0; //counter variable

  for ( i = 0; i < size; i++ ) { //for each value from 0 to size of array
    printf("value %d: %d\n", i+1, (*arrPointer)); //print value of variable that pointer points to
    arrPointer++; //increase pointer to next array value
  }

}

int *arrayFiller (int *arrayFill, int size){



	int c = 0; //counter variable
  for (c = 0; c < size; c++)	{//for each value from 0 to size of array
    *(arrayFill + c) = rand() % 100; //fill array with random number corresponding to counter position

  }
  return arrayFill;
}

void memChecker(int *Ptr)	{

	if (Ptr == NULL) {
      printf("Memory not allocated.\n");

  }

}


void timeSeeder(){

	srand(time(0)); //seeds random number

}
