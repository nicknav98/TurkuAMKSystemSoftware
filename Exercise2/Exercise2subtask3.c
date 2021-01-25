/*
File: Exercise2.c
Author: Nicholas Navarro
Description: Completing 3 Tasks set out in Exercise 2 of course.
Imported Modules: stdio for printf, math.h for pow(exponent,base)
*/


#include <math.h>
#include <stdio.h>


int main() {


double firstNumber = 0; //user inputed first number
double secondNumber = 0; //user inputed second number
int temp = 0; // temp variable to catch ExceptionHandling
int status = 0; // status variable for while loop when validating user input
float sumNumbers = 0; // var to hold sum
float avgNumbers = 0; //var to hold average of two numbers
int diffNumbers = 0; //var to hold difference between 2 numbers
float divNumbers = 0; //var to hold division of 2 numbers
float power = 0; //var to hold the first number power to the second number



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

if(firstNumber>secondNumber){ //comparison using >
  printf("Your first Number : %f is bigger than your second number: %lf !\n", firstNumber, secondNumber);

}else if(secondNumber>firstNumber){ //comparison if second number is bigger than first
  printf("Your second number: %f is bigger than your first number: %lf !\n", secondNumber, firstNumber);

}else if(firstNumber==secondNumber){ //check if both integers are equal
  printf("Both numbers are equal: %f and %f!\n", firstNumber, secondNumber);
}


sumNumbers = firstNumber+secondNumber; //adds two numbers
printf("The sum of these two integers are: %g\n", sumNumbers);//prints result

avgNumbers = sumNumbers/2;//calculates the average of the two numbers
printf("The average of these two integers are: %g\n", avgNumbers);//prints result

diffNumbers = firstNumber-secondNumber; //difference calculation
printf("The difference of these two numbers are: %d\n", diffNumbers);

if(secondNumber == 0){ //checking if divisor is 0, error handling
  printf("Division function cannot be executed due to a zero divisor\n");

}else{
  divNumbers = firstNumber/secondNumber; //calculation division
  printf("The first number divided by the second number is : %g\n", divNumbers); //prints result
}

power = pow(secondNumber,firstNumber); //calculates the power
printf("The first number to the power of the second number is: %lf\n", power);//prints results

}
