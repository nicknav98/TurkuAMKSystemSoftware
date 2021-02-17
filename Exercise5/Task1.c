/*
File: Task1.c
Author: Nicholas Navarro
Description: Modify code to be in-line with style guide standards, also fixing compiling errors.
Part 1 is a program that calculates the summation of (3+n) with the limit being user-defined.

Part 2 is a program that creates an array, asks the user to fill it, and prints out the last value
*/

#include <stdio.h> //removed uneccessary libraries, stdio.h needed for printf and scanf
#define SIZE 100  //value used to initalize array size (part 2)


int main() {

                        /* PART 1*/


  int userNum = 0; //integer to hold user-inputted number
  int num1 = 0; //first number in equation
  int num2 = 1; //second number in equation
  int num3 = 2; //third number in equation
  int summationTotal = 0; //summations of equations
  int count = 0; //counter to restrict runs of while loop to user inputted number

  printf("This programs runs summations with formula (3+n) with n as the limit.\n");

  printf("Enter the maximun range of additions to be run:\n");
  scanf("%d", &userNum); //reads user input


  if(userNum < 1) { //if user inputs number less than 1, throws error
    printf("Please enter a whole number more than 0\n"); //error message
    return 0;
  }else{

    while( count < userNum ){ //loop runs until counter is equal to user's number
      summationTotal = num1 + num2 + num3; //sumation formula
      printf("The Sum is: %d\n", summationTotal); //prints result
      num1 = num2; //new assignment of numbers
      num2 = num3;
      num3 = summationTotal;
      count++; //adds 1 to counter
    }
  }


                        /* PART 2*/

  int stepAmount = 0; //integer for loop initalising, and counting steps
  int loopRange = 0; //integer to hold the range of loop

  float userArr[SIZE]= {}; //initalising user's array

  printf("Enter the amount of entries you would like to make into an array: \n");
  scanf("%d", &loopRange); //reads user input for loops range
  printf("The Amount of Entries is: %d \n", loopRange); //prints loops range

  for (stepAmount; stepAmount < loopRange; stepAmount++){

    printf("Enter a number to be saved in the array: \n");
    scanf("%f", &userArr[stepAmount]);//reads users number to be saved

    if(userArr[0] < userArr[stepAmount]){ //if statement to catch highest entered number, stores the highest number in index 0,
      // continuously checks against hightest amount
      userArr[0] = userArr[stepAmount];
    }


  }




  printf("The biggest value in the array is: %f \n", userArr[0]); //prints the largest number entered in the array


  return 0;
}
