/*
File: Exercise2.c
Author: Nicholas Navarro
Description: Asking for 2 Numbers from user, running checks on number and basic math use, random number generator and array comparison.
*/

#include <stdio.h>
#include <math.h>

int main(){

  //TASK 3
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

  //Task 4

  int randomNum = 0;// var to store random number

  // Get the system time.
   unsigned seed = time(0);

   // Seed the random number generator.
   srand(seed);


  randomNum = rand() %100; //producing random number with range 0 - 100

  printf("Your Random Number is: %d\n",randomNum); //printing random number

  if(randomNum % 2 == 0){ //checking for odd of even, if mod 2 is equal to 0, than even
    printf("Your Random Number: %d is even\n",randomNum);

  }else{
    printf("Your Random Number %d is odd\n", randomNum);
  }


  if(randomNum % 8 == 0){ //checking divisibility by 8, if mod 8 = 0, than yes
    printf("Your Random Number is Divisible by 8\n");
  }else{
    printf("Your Random Number is not divisible by 8\n");

  }

  if(randomNum % 3 == 0){ //checking div by 3, if mod 3 = 0, than yes
    printf("Your Random Number is Divisible by 3\n");
  }else{
    printf("Your Random Number is not divisble by 3\n");
  }



if(randomNum % 3 == 0){ //checking div by 3, if mod 3 = 0, than yes
    printf("Your Random Number is Divisible by 3\n");
  }else{
    printf("Your Random Number is not divisble by 3\n");
  }



  //TASK 5

int arr[10] = {1, 2, 3, 5, 6, 8, 9, 4, 7, 12}; //hard coded loop
int loopCount = 0; //loop 1 counter
int i = 0; // loop 2 counter

printf("Array in Order : \n");

for(loopCount = 0; loopCount < 10; loopCount++){ //printing each element and adding 1 to counter
 printf("%d\t", arr[loopCount]);
 if (arr[loopCount] == randomNum){ //if one element equals the generated random number
 printf("The Random Number is found in the array!: %d & %d !", arr[loopCount], randomNum );
}
}

//when counter = 10, loop breaks
printf("\nArray in Reverse Order: \n"); //counting each element in reverse
for(i = 9; i>=0; i--){
 printf("%d\t", arr[i]);

}



 return 0;
}
