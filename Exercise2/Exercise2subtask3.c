/*
File: Exercise2.c
Author: Nicholas Navarro
Description: Completing 3 Tasks set out in Exercise 2 of course.
*/

#include <stdio.h>
#include <math.h>

int main() {
  /* code */

int firstNumber = 0; //user inputed first number
int secondNumber = 0; //user inputed second number
int temp = 0; // temp variable to catch ExceptionHandling
int status = 0; // status variable for while loop when validating user input
int sumNumbers = 0; // var to hold sum
float avgNumbers = 0; //var to hold average of two numbers
int diffNumbers = 0; //var to hold difference between 2 numbers
float divNumbers = 0; //var to hold division of 2 numbers
int powerNumbers = 0; //var to hold 1st to the power of 2nd number


printf("Enter an Integer: ");
status = scanf("%d", &firstNumber); //scanning user input and assigning 1 to status to allow while loop to run
while(status!=1){
    while((temp=getchar()) != EOF && temp != '\n'); //temp var holding character of input
    printf("Invalid input...");
    return 0;
 }
//repeated code for second user input
printf("Enter another Integer: ");
status = scanf("%d", &secondNumber);
while(status!=1){
    while((temp=getchar()) != EOF && temp != '\n');
    printf("Invalid input...");
    return 0;
 }

if(firstNumber>secondNumber) //comparrison using >
  printf("Your first Number : %d is bigger than your second number: %d !\n", firstNumber, secondNumber);
if(secondNumber>firstNumber) //integer size variable
  printf("Your second number: %d is bigger than your first number: %d !\n", secondNumber, firstNumber);
if(firstNumber==secondNumber) //check if both integers are equal
  printf("Both numbers are equal: %d and %d!\n", firstNumber, secondNumber);

int sumNumbers = firstNumber + secondNumber;
printf("The sum of these two integers are: %d", sumNumbers);

float avgNumbers = sumNumbers/2;
printf("The average of these two integers are: %d", avgNumbers)

if(secondNumber = 0){
  printf("Division function cannot be executed due to a zero divisor");
}
else{
  float divNumbers = firstNumber/secondNumber;
  printf("The first number divided by the second number is : %d", divNumbers);
}

int powerNumbers = pow(firstNumber,secondNumber);

printf("The first number to the power of the second number is: ", powerNumbers);








}
