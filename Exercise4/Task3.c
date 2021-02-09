/*
File: Task3.c
Author: Nicholas Navarro
Description: Exercise 4 Task 3 - Reading User Input using functions.Static Variables used to hold the changed integers used in functions
*/

#include <stdio.h>

int countNegNumbers(int number){ // declaring function to count every negative number given
    static int negative = 0; //variable to hold amount of negative
    if (number < 0) {
        negative++; //add 1 to counter for every number below 0
    }
    return negative;
}

int sumInput(int number) { //declaring function to count every number entered
    static int sum = 0; //static variable to hold the sum of numbers
    sum += number; //add sum to user inputed number
    return sum;
}

int sumDivByThree(int number){ //declaring function to count every number that is divisible by 3
    static int sumthree = 0; //static variable to hold sum of number that have mod 3 = 0
    if (number % 3 == 0){
        sumthree += number; //adds number to sumthree
    }
    return sumthree;
}

int main(){
    int userInput = 1;
    while (userInput != 0) {
        printf("Welcome to Number Counter! Please enter 0 to stop the couting process");
        printf("Enter a number!: ");
        scanf("%d, ", &userInput); //store user input into UserInput variable
        countNegNumbers(userInput); //function call for every number
        sumInput(userInput); //function call to calculate sum
        sumDivByThree(userInput); //function call to check for mod 3
    }
    printf("You have entered %d negative number/s.\n", countNegNumbers(userInput));
    printf("The sum of all number/s entered is:  %d\n", sumInput(userInput));
    printf("The sum of all number/s that are only divisible by three entered is:  %d\n", sumDivByThree(userInput));
    return 0;
}
