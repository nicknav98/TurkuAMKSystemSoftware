/*
 * File:   		Finder.c
 * Author: Nicholas Navarro
 * Description: Finder Function
 */

#include <stdio.h>
#include "Finder.h"

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.

int *userGuess(int *arrayPtr, int size, int userInput)	{

	int c = 0;
	int arrayValue = 0;
	int *finalValue = NULL;

	for(c= 0; c < size; c++) {

		arrayValue = *(arrayPtr + c);

		if(arrayValue == userInput) {
			finalValue = (arrayPtr+c);
			printf("Number Found in Position: %d!\n", c+1);
		}
	}

	return finalValue;

}
