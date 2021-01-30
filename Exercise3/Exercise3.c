/*
File: Exercise3.c
Author: Nicholas Navarro
Description:
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  //Task 3
  int loopRange = 0;
  int evenRange = 0;
  int counter1 = 0;
  int counter2 = 0;
  int sum = 0;
  int evenSum = 0;
  int oddSum = 0;
  int RandomNum = 0;
  int counter3 = 0;
  int multiSum = 0;
  int multiResult = 0;
  int upperLimit = 20;
  int lowerLimit = 2;

  printf("Task 3: Enter a number to find the sum of natural numbers up until this limit: ");
  scanf("%d", &loopRange);


  for(counter1; counter1 <= loopRange; ++counter1){
    sum += counter1;

  }
  printf("The Sum of the Numbers 0 to %d is: %d \n ",loopRange,sum);

  printf("\n Part 2: Please Enter a number to find the sum of even natural numbers up until this limit: ");
  scanf("%d", &evenRange);

  for(counter2; counter2 <= evenRange; ++counter2){
    if(counter2 % 2 == 0){
      evenSum = evenSum + 1;
    }
    else{
        oddSum = oddSum + 1;
    }
}
   printf("Sum of All Even Numbers is: %d\n", evenSum);

   unsigned seed = time(0);

   // Seed the random number generator.
   srand(seed);

   RandomNum = (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit;
   printf("The random number is: %d \n", RandomNum);

  while (multiSum <= 20000000){
    multiResult = RandomNum*RandomNum;
    multiSum = multiResult*multiResult;

}


  printf("Sum of Natural number squared is: %d\n", multiSum);
  return 0;




}
