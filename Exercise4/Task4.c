/*
File: Task4.c
Author: Nicholas Navarro
Description: Task 4 generating random numbers to calculate system software grades
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>






int randomNumberGenerator(int num1, int num2){

  int randomNum = 0; // integer to hold random number
  if(num1 > num2){
  randomNum = (rand() % ((num1 - num2) + 1) + num2); //if the first number is bigger, user it as upper limit for random number
}else if(num2 > num1){ //if second number is bigger, use it as upper limit for random number
  randomNum = (rand() % ((num2 - num1) + 1) + num1);
  }else{
  randomNum = (rand() % num1);
  }
  return randomNum; //returns the random number generated
  }

int gradeEvaluator(int taskScore, int examScore){
      int sum = 0;
      int grade = 0;
      if(taskScore < 50 || examScore < 50){ //if one of either points is below 50, grade is 0
        grade = 0;
        return grade;
      }else{
        sum = taskScore + examScore; //adds the sum of the scores
      }

      if(sum <= 120){ // 120 or below classifies grade 1
        grade = 1;
      }
      else if(sum <= 140){ // 120 - 140 classifies grade 2
        grade = 2;
      }
      else if(sum <= 160){ // 140 - 160 classifies grade 3
        grade = 3;
      }
      else if(sum <= 180){ // 160 - 180 classifes grade 4
        grade = 4;
      }
      else if(sum >= 180){ //anything over 180 classifies grade 5
        grade = 5;
      }
      else{
        grade = 0; //exception handling
      }
      return grade; //returns the grade
}





int main(){

  int userInput1 = 1; //int to hold first user input - random number range
  int userInput2 = 1; //int to hold second input - random number range
  int minRange = 101; //int min range for exam and test scores NOTE! both min and max are EQUAL SO THAT THE RANDOM NUMBER USES THE IF STATEMENT TO MAKE IT FROM 0 To MAX RANGE ---- SEE RNG FUNCTION FOR INFO
  int maxRange = 101; //int min range for exam and test scores NOTE! both min and max are EQUAL SO THAT THE RANDOM NUMBER USES THE IF STATEMENT TO MAKE IT FROM 0 To MAX RANGE ---- SEE RNG FUNCTION FOR INFO
  int examScore = 0; //int for exam score
  int taskScore = 0; //int for tasks score

  /* Intializes random number generator */
  srand( time(NULL) );

  printf("Welcome To Random Number Generator!\n");
  printf("Two non-zero numbers will be used to define the random number range NOTE! if two numbers are equal, the range will be from 0 to numbers entered\n");

  printf("Please Enter 1st Number: ");
  scanf("%d", &userInput1); //catching user input 1
  if(userInput1 == 0){
    printf("0 Value Detected - Please Try Again\n"); //error handing, if 0 entered, program exits as 0 cause issues with random number generator
    return 0;
  }

  printf("Please Enter 2nd Number: ");
  scanf("%d", &userInput2); //catching user input 2
  if(userInput2 == 0){
    printf("0 Value Detected - Please Try Again\n");//error handing, if 0 entered, program exits as 0 cause issues with random number generator
    return 0;
  }

  printf("The Random Number Is: %d \n", randomNumberGenerator(userInput1,userInput2)); //calling function random number and printing result


  //Part B

  examScore = randomNumberGenerator(minRange,maxRange); //creating random exam score

  printf("---------------------------------");

  taskScore = randomNumberGenerator(minRange,maxRange); //creating random task score

  printf("Part B - Grade Evaluator. The Range of two random numbers are 0 to 200, lets see what grade you get!\n");
  printf("Your Tasks Score is: %d\n", taskScore); //prints tasks score
  printf("Your Exam Score is: %d\n", examScore); //prints exam score

  printf("The criteria for passing is having atleast 50 points in the exams as well as weekly tasks, minimum score for a grade is 100 points\n");
  printf("This means your grade for System Software is: %d\n", gradeEvaluator(taskScore,examScore)); //calls grade evaluator to print the result.

  return 0;

}
