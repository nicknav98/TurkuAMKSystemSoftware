/*
File: Exercise2.c
Author: Nicholas Navarro
Description: Completing 3 Tasks set out in Exercise 2 of course.
*/

#include <stdio.h>

int main() {
  /* code */

int firstNumber = 0;
int secondNumber = 0;

printf("Enter an Integer: ");
scanf("%d", &firstNumber);
if(isdigit(firstNumber)&isdigit(secondNumber))
{
    printf("You entered number: %d and: %s", &firstNumber &secondNumber);

}
else
{
  printf("Enter a number.....\n", );
  return 0;
}


  return 0;
}
