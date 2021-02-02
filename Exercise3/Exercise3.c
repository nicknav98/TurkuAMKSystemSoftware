/*
File: Exercise3.c
Author: Nicholas Navarro
Description: Number Summation to 100, Even Number Summation of Numbers to 100, Randon Number multiplied by itself to max INT value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main() {
  //Task 3
  int loopRange = 0; //Integer to hold maximum N value in the summation formula
  int evenRange = 0; //Integer to hold the maximum N value in the summation of even num. formula
  int counter1 = 0; //counter for first loop (summation of natural numbers)
  int counter2 = 0; //counter for second loop (summation of even natural numbers)
  int sum = 0; //integer for result of summation
  int evenSum = 0; //integer for result of even summation
  int oddSum = 0; //dump integer to hold summation of odd numbers
  int RandomNum = 0; //random number holder
  int counter3 = 0; //counter for third loop(multiplication summation)
  int multiSum = 0; //result of sum
  int upperLimit = 20; //random number generator - upper limit
  int lowerLimit = 2; //random number generator - lower limit

  printf("Task 3: Enter a number to find the sum of natural numbers up until this limit: "); //User Input for Range of Summation - USED AS TESTING FOR 0, -1. 1
  scanf("%d", &loopRange);


  for(counter1; counter1 <= loopRange; ++counter1){ //for loop until user given range, Eli, N in formula
    sum += counter1; //adding itself each step of loop

  }
  printf("The Sum of the Numbers 0 to %d is: %d\n",loopRange,sum); //prints result

  printf("Part 2: Please Enter a number to find the sum of even natural numbers up until this limit: "); //User Input for Range of Even Summation - USED AS TESTING FOR 0, -1. 1
  scanf("%d", &evenRange);

  for(counter2; counter2 <= evenRange; ++counter2){//for loop until user given range, Eli, N in formula
    if(counter2 % 2 == 0){//if number is even
      evenSum = evenSum + 1;//adding itself each step of loop
    }
    else{
        oddSum = oddSum + 1;//if number is odd, DUMP INTEGER; NEVER PRINTS OR USED
    }
}
   printf("Sum of All Even Numbers is: %d\n", evenSum); //Prints Even Sum Result

   unsigned seed = time(0);//initialising seed for random number

   // Seed the random number generator.
   srand(seed);

   RandomNum = (rand() % (upperLimit - lowerLimit + 1)) + lowerLimit; //generating RN, range from 2 to 20, as stated in INT initialization - See Start of Main
   printf("The random number is: %d \n", RandomNum);//Prints Random Number

for(multiSum = RandomNum; multiSum <= 65535; multiSum *= multiSum){ // MAX INT VALUE is 2 bytes, 65535 as a number, therefore set a maximum number -- multiplys each result by itself.
  printf("%d \t", multiSum); //prints each number
}


  printf("\nSum of Natural number squared, with limit of maximum 2-byte int storage,is: %d\n", multiSum); //prints result of summation of i squared.
  return 0;


}
