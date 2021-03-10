/*
 * File:   		Armstrong.c
 * Author:
 * Description:
 */

#include <stdio.h>
#include <math.h>
#include "Armstrong.h"
#define MAXRANGE 100000

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.

int testArmstrong(int *fillArray) {

	int num, lastDigit, digits, sum, counter;
  int lower = 0;
	int upper = MAXRANGE;
	int arrayPosition = 0;


     printf("Armstrong number between %d to %d are: \n", lower, upper);

  while( arrayPosition < 20) {
		 for(counter=lower; counter<=upper; counter++)
     {
         sum = 0;

         // Copy the value of num for processing
         num = counter;

         // Find total digits in num
         digits = (int) log10(num) + 1;

         // Calculate sum of power of digits
         while(num > 0)
         {
             // Extract the last digit
             lastDigit = num % 10;

             // Find sum of power of digits
             // Use ceil() function to overcome any rounding errors by pow()
             sum = sum + ceil(pow(lastDigit, digits));

             // Remove the last digit
             num = num / 10;
         }

          // Check for Armstrong number
         if(counter == sum)
         {
             *(fillArray + arrayPosition) = counter;
						 arrayPosition++;
         }
     }
	 }

	 return *fillArray;

}
