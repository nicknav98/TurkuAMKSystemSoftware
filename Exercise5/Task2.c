/*
File: Task2.c
Author: Nicholas Navarro
Description: Take arguments and check for prime numbers
*/

#include <stdio.h>
#include <stdlib.h> //to convert characters to integers, atoi function
#include <math.h> // square root functions



int primeCheck(int checkVar){ //function to check for prime

  int primeCounter = 0; //counter variable
  int m = sqrt(checkVar); //square root of arguement value
  int flag = 0; //boolean variable to show either prime or not prime


  // Iterate from 2 to sqrt(n)
  for(primeCounter = 2; primeCounter <= m; primeCounter++){
    // If checkVar is divisible by any number between
    // 2 and n/2, it is not prime
    if(checkVar%primeCounter == 0){
      flag = 1; //turns flag to 1, to show that primecheck is complete and to stop the function
      return 0;
    }

    if (flag == 0) { //if number is prime, turning flag to 1 doesnt change, returns true value (1)
    return 1;
    }
  }
  return 0;
}







int main(int argc, char *argv[]) {

  if (argc > 2){
    printf("Please Enter 1 Argument\n");
    return 0;
  }else{

    int userNum = atoi(argv[1]);//integer to store arguement value, converts character to integer

    if(userNum < 0 || userNum > 100000){ //if arguement value is outside the range of 0 - 100000
      printf("Please enter 1 integer bigger than 0 and smaller than 100000\n"); //error message
      return 0;
    }else if( userNum == 0){
      printf("Please enter an Integer\n"); //error message, userNum return 0 if invalid characters are entered
      return 0;
    }else{
      printf("Your integer was: %d\n",userNum); //prints integer given

    }

    int primeFunctionCall = primeCheck(userNum); //function call, integer to hold result from prime check function

    if(primeFunctionCall == 0){
      printf("The number entered: %d is not a prime number\n", userNum);
      return 0;
    }else if(primeFunctionCall == 1){
      printf("The number entered: %d is a prime number\n", userNum);
      return 0;
    }

  }







}
