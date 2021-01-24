/*
File: Exercise2.c
Author: Nicholas Navarro
Description: Completing 3 Tasks set out in Exercise 2 of course.
*/


#include <math.h>
#include <stdio.h>


int main() {
  /* code */

double firstNumber = 0; //user inputed first number
double secondNumber = 0; //user inputed second number
int temp = 0; // temp variable to catch ExceptionHandling
int status = 0; // status variable for while loop when validating user input
float sumNumbers = 0; // var to hold sum
float avgNumbers = 0; //var to hold average of two numbers
int diffNumbers = 0; //var to hold difference between 2 numbers
float divNumbers = 0; //var to hold division of 2 numbers



printf("Enter an Integer: ");
status = scanf("%lf", &firstNumber); //scanning user input and assigning 1 to status to allow while loop to run
while(status!=1){
    while((temp=getchar()) != EOF && temp != '\n'); //temp var holding character of input
    printf("Invalid input...");
    return 0;
 }
//repeated code for second user input
printf("Enter another Integer: ");
status = scanf("%lf", &secondNumber);
while(status!=1){
    while((temp=getchar()) != EOF && temp != '\n');
    printf("Invalid input...");
    return 0;
 }

if(firstNumber>secondNumber) //comparison using >
  printf("Your first Number : %f is bigger than your second number: %lf !\n", firstNumber, secondNumber);

if(secondNumber>firstNumber) //integer size variabler
  printf("Your second number: %f is bigger than your first number: %lf !\n", secondNumber, firstNumber);

if(firstNumber==secondNumber) //check if both integers are equal
  printf("Both numbers are equal: %f and %f!\n", firstNumber, secondNumber);


sumNumbers = firstNumber+secondNumber;
printf("The sum of these two integers are: %g", sumNumbers);

avgNumbers = sumNumbers/2;
printf("The average of these two integers are: %g", avgNumbers);

diffNumbers = firstNumber-secondNumber;
printf("The difference is these two numbers are: %d", diffNumbers);

if(secondNumber == 0)
  printf("Division function cannot be executed due to a zero divisor");

else(secondNumber != 0);
  divNumbers = firstNumber/secondNumber;
  printf("The first number divided by the second number is : %g", divNumbers);



printf("The first number to the power of the second number is: %lf", power);

}
