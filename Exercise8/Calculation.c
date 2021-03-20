/*
 * File:   		Calculation.c
 * Author: Nicholas Navarro
 * Description: Calculation Function
 */

#include <stdio.h>
#include "Calculation.h"

void maximuSubArray(int *subArray, int size) {

	int i = 0; //counter variable
	int j = 0; //counter variable
	int k = 0; //counter variable
  int sum = 0; //temp variable to hold the sum of 5 numbers
	int maxSum = 0; //vairable to hold the highest sum


	for(i=0; i<size; i++) //for each step from 1 to size of array
  {
    for(j=i; j<size; j++) //for each step from 1 to size of the array
    {
      sum = 0; //temp is empty
      for(k=i ; k<j; k++) //for each value higher than previous value
      {
        sum = sum + *(subArray + k); //temp adds prevous number to next number in array
      }
      if(sum>maxSum) //if sum is bigger than highest sum
        maxSum = sum; //maxSum now holds the biggest number
    }
   }
  printf("The Maximum Sum of Adjacent Numbers is: %d\n", maxSum);//prints result

}
