/*
File: Task3.c
Author: Nicholas Navarro
Description: Array generation, filling arrays with random numbers and printing in descending order
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //used to seed random seed generator


#define SIZE 10 //defining the maximum size of arrays

//function to print arrays
void printArray(int *array, int length){ //takes two arguments, array, and length of array, which is always SIZE
  int counter = 0;
  for(counter = 0; counter < length; counter++){
    printf("%d\t", array[counter]); //printing each value
  }

}


//function to fill arrays with random numbers
int arrayFill(int *fillArray){ //takes an empty array as arguement
  int i = 0; //variable to initalize for loop

  for(i = 0; i < SIZE; i++){ //for each step from 0 to SIZE
    fillArray[i] = rand() % 1000000; //fill each array location with random number with max Range 1million
  }
  return fillArray[SIZE];
}


//array to sort values from biggest to smallest
int sortArray(int *a, int length){ //two arguments, array and length of array, which is always SIZE

 int i = 0; //counter variable for first loop
 int j = 0; //counter variable for second loop
 int temp = 0; // variable to hold temporary variables

 for(i=0;i< length;i++) // for each step in length
 {
  for(j=i+1; j < length ;j++) //for each extra step in length
  {
   if(a[i]< a[j]) //if the first number is smaller than the next
   {
    temp = a[i]; //temp holds smaller
    a[i] = a[j]; //bigger value takes precedence
    a[j] = temp; //smaller value takes after
   }
  }
 }
  return a[SIZE]; //returns sorted Array
}



int main(){

    srand(time(0)); //seeds random number with time

    int emptyArray[SIZE] = {}; //initalising array to be manipulated

    arrayFill(emptyArray); //function call to fill array



    printf("Generated Array is :\n");
    printArray(emptyArray,SIZE); //function call to print array
    printf("\n--------------\n");

    sortArray(emptyArray,SIZE); //function call to sort array

    printf("The array in descending order: \n");
    printArray(emptyArray, SIZE); //function call to print sorted array
    printf("\nEnd of Program\n");

    return 0;
}
