/*
File: Task3.c
Author: Nicholas Navarro
Description: Array generation, filling arrays with random numbers and printing in descending order
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 10

void printArray(int *array, int length){
  int counter = 0;
  for(counter = 0; counter < length; counter++){
    printf("%d\t", array[counter]);
  }

}



int arrayFill(int *fillArray){
  int i = 0;

  for(i = 0; i < SIZE; i++){
    fillArray[i] = rand() % 1000000;
  }
  return fillArray[SIZE];
}



int sortArray(int *a, int length){
 int i, j, temp;
 for(i=0;i< length;i++)
 {
  for(j=i+1; j < length ;j++)
  {
   if(a[i]< a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
  return a[SIZE];
}









int main(){

    srand(time(0));
    int emptyArray[SIZE] = {};
    //int newArray[SIZE] = {};
    arrayFill(emptyArray);



    printf("Generated Array is :\n");
    printArray(emptyArray,SIZE);
    printf("\n--------------\n");
    sortArray(emptyArray,SIZE);
    printf("The array in descending order: \n");
    printArray(emptyArray, SIZE);
    printf("\nEnd of Program\n");

    return 0;
}
