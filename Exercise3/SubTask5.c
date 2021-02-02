/*
File: SubTask4.c
Author: Nicholas Navarro
Description: Encoding Fibonacci Numbers and Checking if a generated random number is part of the sequence
*/

#include <stdio.h> //printf
int collatzRandom = 0; //int to store random number


int collatz_count_until_1(unsigned int n){ //Function Definition for collatz Formula

  int counter = 0; //LOCAL VARIABLE - USED ONLY IN FUNCTION - Counts runs of while loop Elikä Sequence Length

  while(n != 1){ // while loop initialising - runs if n(parameter number) is not equal 1. Defines end of Collatz formula
    printf("%d - ", n); //Prints Out Each Step of N
    if(n % 2 == 0){ //Formula for Collatz when number is Even
      n /= 2;

    }else{
      n = (3 * n) + 1; //Formula for collatz when N is odd


    }
    counter++;
  }
  printf("\nThe Collatz Sequence Has Length: %d \n", counter); //Prints runs of while loop as Sequence Length
}


int main(){


  unsigned seed = time(0); //seed initialising for rng
  srand(seed); // rng seeded

  collatzRandom = rand() % 100; //rng called

  printf("The Random Number is %d :\n ", collatzRandom);  //printing random number as well as each step of Collatz
  if (collatzRandom == 0 || collatzRandom == 1){ //if the number is 0 OR 1
    printf("Mathematical Error, Collatz undefinined, or if 1, holds length 0 and only contains 1\n");
  }else{
  collatz_count_until_1(collatzRandom); //function call for collatz calculation
}
  return 0;
}
