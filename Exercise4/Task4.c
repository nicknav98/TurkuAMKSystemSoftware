/*
File: Task4.c
Author: Nicholas Navarro
Description: Task 4 generating random numbers to calculate system software grades
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumberGenerator(int num1, int num2){
  //static time integer to hold base of time
  int randomNum = 0;
  /* Intializes random number generator */
  srand(time(0));

  if(num1 > num2){
  randomNum = (rand() % (num1 - num2 + 1) + num2);
  }else if(num2 > num1){
  randomNum = (rand() % (num2 - num1 + 1) + num1);
  }else{
  randomNum = (rand() % num1);
  }
  return randomNum;
  }

int gradeEvaluator(int taskScore, int examScore){
      int sum = 0;
      int grade = 0;
      if(taskScore < 50 || examScore < 50){
        grade = 0;
        return grade;
      }else{
        sum = taskScore + examScore;
      }

      if(sum <= 120){
        grade = 1;
      }
      else if(sum <= 140){
        grade = 2;
      }
      else if(sum <= 160){
        grade = 3;
      }
      else if(sum <= 180){
        grade = 4;
      }
      else if(sum >= 180){
        grade = 5;
      }
      else{
        grade = 0;
      }
      return grade;
}





int main(){

  int userInput1 = 1;
  int userInput2 = 1;
  int minRange = 0;
  int maxRange = 100;
  int examScore = 0;
  int taskScore = 0;

  printf("Welcome To Random Number Generator!\n");
  printf("Two non-zero numbers will be used to define the random number range NOTE! if two numbers are equal, the range will be from 0 to numbers entered\n");

  printf("Please Enter 1st Number: ");
  scanf("%d", &userInput1);
  if(userInput1 == 0){
    printf("0 Value Detected - Please Try Again\n");
    return 0;
  }

  printf("Please Enter 2nd Number: ");
  scanf("%d", &userInput2);
  if(userInput2 == 0){
    printf("0 Value Detected - Please Try Again\n");
    return 0;
  }

  printf("The Random Number Is: %d \n", randomNumberGenerator(userInput1,userInput2));


  //Part B

  examScore = randomNumberGenerator(minRange,maxRange);
  taskScore = randomNumberGenerator(minRange,maxRange);

  printf("---------------------------------");
  printf("Part B - Grade Evaluator. The Range of two random numbers are 0 to 200, lets see what grade you get!\n");
  printf("Your Tasks Score is: %d\n", taskScore);
  printf("Your Exam Score is: %d\n", examScore);

  printf("The criteria for passing is having atleast 50 points in the exams as well as weekly tasks, minimum score for a grade is 100 points\n");
  printf("This means your grade for System Software is: %d\n", gradeEvaluator(taskScore,examScore));

  return 0;

}
