/*
 * File:   		Exercise7.c
 * Author:    Nicholas Navarro
 * Description: main file that calls functions created in task 2 and 3
 */

#include <stdio.h>
#include "Armstrong.h"
#include "PrimeFactor.h"


void arrayPrinter(int *arrPointer, int size) {

  printf("The values of the array, with Armstrong Numbers, are: \n");

  int c = 0; //counter variable

  for (c = 0; c < size; c++ ) { //for each value from 0 to size of array
    printf("value %d: %d\n", c, (*arrPointer)); //print value of variable that pointer points to
    arrPointer++; //increase pointer to next array value
  }

}


int main (){

	int testArray[20] = {}; //empty array created
	int *testPtr = &testArray[0]; //pointer created




  testArmstrong(testPtr); //passes array to function test armstrong

  arrayPrinter(testPtr, 20); //prints results

  testPrime(testPtr); //prints prime number of each element

	return 0;
}
