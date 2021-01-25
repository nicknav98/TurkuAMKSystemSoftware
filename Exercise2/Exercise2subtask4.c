#include <stdio.h>
#include <stdlib.h>


int main(){
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

}
