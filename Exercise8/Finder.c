/*
 * File:   		Finder.c
 * Author: Nicholas Navarro
 * Description: Finder Function
 */

#include <stdio.h>
#include <string.h>
#include "Finder.h"

int *userGuess(int *arrayPtr, int size, int userInput)	{

	int c = 0;
	int arrayValue = 0;
	int *finalValue = NULL;

	for(c= 0; c < size; c++) {

		arrayValue = *(arrayPtr + c);

		if(arrayValue == userInput) {
			finalValue = (arrayPtr+c);
			printf("Number Found in Position: %d!\n", c);
		}
	}

	return finalValue;

}

int arraySize(int *array) {

	int count = 0; //counter variable


	while (*(array + count) != 757935405){ //while the array elements doesnt equal to the numerical value of -
		count++; //increase counter
	}

	return count; //return the counter, which holds the size of array

}
