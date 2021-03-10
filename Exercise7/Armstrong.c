/*
 * File:   		Armstrong.c
 * Author:	Nicholas Navarro
 * Description: Armstrong numbers to be filled in array
 */

#include <stdio.h>
#include <math.h> //for pow()
#include "Armstrong.h"
#define MAXRANGE 100000

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.


int testArmstrong(int *fillArray) {

	int i = 0; //counter integer
	int sum = 0; //integer to hold result
	int num = 0; //integer to hold the number to be tested
	int lastDigit = 0; //integer to hold the last digit
	int digits = 0; //integer to hold number of digits
  int lower = 0; //integer to hold lower range
	int upper = MAXRANGE; //integer to hold max range
	int arrayPosition = 0; //integer to hold the positional co-ordinates





	for(i=lower; i<=upper; i++) {
         sum = 0;

         // Copy the value of num for processing /
         num = i;

         // Find total digits in num /
         digits = (int) log10(num) + 1;

         // Calculate sum of power of digits /
         while(num != 0)
         {
             //Extract the last digit /
             lastDigit = num % 10;

             // Find sum of power of digits
             // Use ceil() function to overcome any rounding errors by pow()
             sum = sum + ceil(pow(lastDigit, digits));

             // Remove the last digit /
             num = num / 10;
         }

         //Check for Armstrong number */
         if(i == sum)
         {

						 *(fillArray + arrayPosition) = i; //fills the position of the array with armstrong num
						 arrayPosition = arrayPosition + 1; //moves to next position of the array




         }

		}




	 return *fillArray;
}
