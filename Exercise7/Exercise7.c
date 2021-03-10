/*
 * File:   		Exercise7.c
 * Author:    Nicholas Navarro
 * Description: Task 2 - Checking Armstrong Arrays
 */

#include <stdio.h>
#include "Armstrong.h"
#include "PrimeFactor.h"


void arrayPrinter(int *arrPointer, int size) {

  printf("The values of the array are: \n");

  int i = 0; //counter variable

  for ( i = 0; i < size; i++ ) { //for each value from 0 to size of array
    printf("value %d: %d\n", i, (*arrPointer + i)); //print value of variable that pointer points to
    arrPointer++; //increase pointer to next array value
  }

}


int main (){

	int testArray[20] = {};
	int *testPtr = &testArray[0];




  testArmstrong(testPtr);

  arrayPrinter(testPtr, 20);

	return 0;
}
