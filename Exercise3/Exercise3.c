/*
File: Exercise3.c
Author: Nicholas Navarro
Description:
*/

#include <stdio.h>

#include <stdio.h>

int main() {
  //Task 3
  int loopRange = 0;
  int evenRange = 0;
  int counter1 = 0;
  int counter2 = 0;
  int userInput = 0;

  printf("Task 3: Enter a Number as the length of loop: ");
  loopRange = scanf("%d ", &loopRange);

  for (counter1=0; counter1<=loopRange; counter1++){
    printf("%d ",counter1);


  }
  return 0;
}
