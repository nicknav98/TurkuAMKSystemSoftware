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
int temp = 0;
int status = 0;


printf("Enter an Integer: ");
status = scanf("%d", &firstNumber);
while(status!=1){
    while((temp=getchar()) != EOF && temp != '\n');
    printf("Invalid input...");
    return 0;
 }

printf("Enter another Integer: ");
status = scanf("%d", &secondNumber);
while(status!=1){
    while((temp=getchar()) != EOF && temp != '\n');
    printf("Invalid input...");
    return 0;
 }

if(firstNumber>secondNumber)
  printf("Your first Number : %d is bigger than your second number: %d !\n", firstNumber, secondNumber);
if(secondNumber>firstNumber)
  printf("Your second number: %d is bigger than your first number: %d !\n", secondNumber, firstNumber);
if(firstNumber==secondNumber)
  printf("Both numbers are equal: %d and %d!\n", firstNumber, secondNumber);



}
