/*
 * File:   		PrimeFactor.c
 * Author: Nicholas Navarro
 * Description: findds all prime factors of a given number, in this case, the array elements
 */

#include <stdio.h>
#include <math.h> //for prime calculations
#include "PrimeFactor.h"

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.
void testPrime(int *primeArray) {

	int counter = 0; //counter variable
	int i = 0; //counter variable
	int j = 0; //counter variable
	int isPrime = 0; //boolean variable to check if prime number is yes or no


	for ( counter = 0; counter < 20; counter++ ) { //for each value from 0 to size of array

		int num = *(primeArray + counter);

		if (num==0 || num == 1 || num == 2){
			printf("\n%d is a prime number\n", num);
		}

		else{
    /* Input a number from user */
		printf("\nAll Prime Factors of %d are: ", num);

    /* Find all Prime factors */
    for(i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                printf("%d. ", i);
            }

				}

    }



	}
}
printf("\n"); //prints new line
}
