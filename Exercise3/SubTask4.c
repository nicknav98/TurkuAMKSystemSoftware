/*
File: SubTask4.c
Author: Nicholas Navarro
Description: Encoding Fibonacci Numbers and Checking if a generated random number is part of the sequence
*/

#include <stdio.h> //printf
#include <math.h> //square root function

//Function to check if a number is a perferct square, return yes if it is.
int isPerfectSquare(int x){
      int s = (int)sqrt(x); //sqaure root of x, x = inputted number
      return (s*s == x); //returning 1 ONLY IF sqrt x * sqrt x is = x
    }

//Function to check for is Fibonacci Numbers
int isFibonacci(int x){
        return isPerfectSquare(5*x*x + 4) ||
          isPerfectSquare(5*x*x - 4);
          // X is parameter for the check, called in isPerfectSquare,
          // Formula in function call is the fibonacci formula to check numbers.
    }


int main(){
int fiboRnd = 0; //int to store random number

unsigned seed = time(0); //seed initialising for rng
srand(seed); // rng seeded
fiboRnd = rand() % 100000; //rng called

printf("%d is the random number.\n", fiboRnd); //printing random number

if (isFibonacci(fiboRnd) == 1){
  //is the formula in the function returns 1, this means it is a fibbo number
  printf("%d is a Fibonacci Number!\n", fiboRnd);
}else{

  printf("%d is not a Fibonacci Number!\n", fiboRnd);
}


return 0;

}
