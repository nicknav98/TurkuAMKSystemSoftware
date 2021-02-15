/*
File: Task1.c
Author: Nicholas Navarro
Description: Modify code to be in-line with style guide standards, also fixing compiling errors
*/

#include <stdio.h>


int main() {

  int userNum = 1;
  int num1 = 0;
  int num2 = 1;
  int num3 = 2;
  int summationTotal = 0;
  int count = 0;

  printf("This programs runs summations with formula (3+n) with n as the limit.\n");

  printf("Enter the maximun range of additions to be run:\n");
  scanf("%d", &userNum);


  if(userNum < 1) {
    printf("Please enter a whole number more than 0\n");
  }else{
    count = 0;

    while( count < userNum ){
      summationTotal = num1 + num2 + num3;
      printf("The Sum is: %d\n", summationTotal);
      num1 = num2;
      num2 = num3;
      num3 = summationTotal;
      count++;
    }
  }
  return 0;
}
