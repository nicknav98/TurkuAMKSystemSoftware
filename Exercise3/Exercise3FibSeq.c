/*
File: Exercise3.c
Author: Nicholas Navarro
Description:
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include

void isPerfectSquare(int test){
  int s = (int) math.sqrt(test);
  return (s*s == test);
}

void isFibonacci(int n){
  return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n-4);
}







int main(){
int fiboRandomNUm = 0;

unsigned seed = time(0);
srand(seed);
fiboRandomNUm = rand() % 1000; //test range

printf("%d is the random number.", fiboRandomNUm);

if (isFibonacci(fiboRandomNUm) == True){
  printf("%d is a Fibonacci Number!", fiboRandomNUm);
}else{
  printf("%d is not a Fibonacci Number.", fiboRandomNUm);
}


return 0;

}
