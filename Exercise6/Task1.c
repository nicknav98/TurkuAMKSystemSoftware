/*
File: Task1.c
Author: Nicholas Navarro
Description: make 3 different variables and manipulate the variables

*/
#include <stdio.h>

int main(){

  /* initialising all variables */
  int integerVar = 0; //integer variable to hold number
  char charVar = '0'; //character variable to hold character
  float floatChar = 1.0; //float variable

  /* initialising all pointers */

  int *integerPointer = &integerVar; //points to integer address
  char *charPointer = &charVar; //points to character memory address
  float *floatPointer = &floatChar; //points to float memory address


  printf("There are 3 variables in this program.\n");
  printf("The integer variable holds the value: %d\n", *integerPointer); //prints value of integer
  printf("The character variable holds the character: %c\n", *charPointer); //prints value of character
  printf("The float variable holds the value: %f\n", *floatPointer); //prints value of float

  printf("--------------------------------------------\n");
  printf("The memory address of the integer pointer is: %p\n", integerPointer); //prints the memory address
  printf("The memory address of the character pointer is: %p\n", charPointer);
  printf("The memory address of the float pointer is: %p\n", floatPointer);

  return 0;



}
