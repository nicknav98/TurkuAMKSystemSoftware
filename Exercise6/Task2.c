/*
File: Task1.c
Author: Nicholas Navarro
Description: array manipulation with pointers
*/

#include <stdio.h>
#include <time.h> //used to seed time
#include <stdlib.h> //used for random number generation
#define SIZE 10 //size for subtask b and c



/* function initialising */
void arrayPrinter(int *arrPointer, int size); //function for array printing, with parameters of array, and the size of array
void arrayFiller(int *arrayFilled); //function for filling array with random numbers, with parameters of array
void sortArray(int *sorting); //function for sorting array from largest to smallest with parameters of array




int main(){

  srand(time(0)); //seeds random number

  int existingArr[5] = {1, 2, 3, 4, 5}; //initialising first array for subtask a
  int *existingPtr = &existingArr[0]; //creating pointer for first array and pointing to first value


  int randArray[SIZE] = {}; //initialising second array to be filled with random numbers
  int *randPtr = &randArray[0]; //creating pointer for random array and pointing to first value

  arrayPrinter(existingPtr, 5); //function call for printing array PART A


  arrayFiller(randPtr); //function call to fill array with random numbers
  arrayPrinter(randPtr, SIZE); //function call to print array



  sortArray(randPtr); //function call to sort array
  arrayPrinter(randPtr, SIZE); //function call to print sorted array

  return 0;

}

void arrayPrinter(int *arrPointer, int size) {

  printf("The values of the array are: \n");

  int i = 0; //counter variable

  for (i = 0; i < size; i++){ //for each value from 0 to size of array
    printf("value %d: %d\n", i, *arrPointer); //print value of variable that pointer points to
    arrPointer++; //increase pointer to next array value
  }

}

void arrayFiller (int *arrayFill){
  int c = 0; //counter variable
  for (c = 0; c < SIZE; c++){//for each value from 0 to size of array
    *(arrayFill + c) = rand() % 1000000; //fill array with random number corresponding to counter position

  }
}

void sortArray (int *sorting){

  int i = 0; //counter variable for first loop
  int j = 0; //counter variable for second loop
  int temp = 0; // variable to hold temporary variables

   for(i=0;i< SIZE;i++) // for each step in length
   {
    for(j=i+1; j < SIZE ;j++) //for each extra step in length
    {
     if((*sorting + i) < *(sorting +j)) //if the first number is smaller than the next
     {
      temp = *(sorting + i); //temp holds smaller
      *(sorting + i) = *(sorting+j); //bigger value takes precedence
      *(sorting+j) = temp; //smaller value takes after
     }
    }
   }





}
