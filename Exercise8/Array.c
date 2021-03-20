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
    printf("value %d: %d |\n", i+1, (*arrPointer)); //print value of variable that pointer points to
    arrPointer++; //increase pointer to next array value
  }

	printf("\nPrinting Finished\n");
}

int *arrayFiller (int *arrayFill, int size){



	int c = 0; //counter variable
  for (c = 0; c < size; c++)	{//for each value from 0 to size of array
    *(arrayFill + c) = rand() % 100; //fill array with random number corresponding to counter position

  }
  return arrayFill;
}

void memChecker(int *Ptr)	{

	if (Ptr == NULL) { //if pointer paramter holds no value
      printf("Memory not allocated.\n");

  }

}

int *textToArray(int *array, char *filePath) {



	FILE *openFile = fopen(filePath, "r"); //opens file
	int c = 0; //counter variable

	printf("%s, opened \n", filePath); //message to show file is opened

	if (! openFile ) // equivalent to saying if ( in_file == NULL i.e if no file is found)
             {
                printf("Error!, file not found!\n");
                return 0;
             }



	while(!feof(openFile)) { //while the end of file hasnt been read
		fscanf(openFile, "%d", &*(array+c)); //scans numbers and place them into array+position
		c++; //increase the position of array

	}




	fclose(openFile); //close file
	printf("%s, closed, with %d numbers added to the array \n", filePath, c-1); //makes sure file is closed, and prints number of entries made

	return array; //returns the filled array

}



void timeSeeder(){

	srand(time(0)); //seeds random number

}
