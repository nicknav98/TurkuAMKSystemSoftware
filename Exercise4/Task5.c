/*
File: Task5.c
Author: Nicholas Navarro
Description: Rock Paper Scissors Game
*/

/*
Rock Paper Scissors --------
Rock = 1
Paper = 2
Scissors = 3

Numerical representation to make coding simpler
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int aiChoice(){ //function to create choice for computer
  int choice = 0;
  choice = 1 + (rand() % 3);
  return choice;
}

int roundWinner(int ai, int user){ //determines round winners
  int winner = 0;

  if( ai == user){
    return winner;
  }else if( ai == 1 && user == 2){
    winner = 1;
    return winner;
  }else if( ai == 1 && user == 3){
    winner = 2;
    return winner;
  }else if( ai == 2 && user == 1){
    winner = 2;
    return winner;
  }else if( ai == 2 && user == 3){
    winner = 1;
    return winner;
  }else if( ai == 3 && user == 1){
    winner = 1;
    return winner;
  }else if( ai == 3 && user == 2){
    winner = 2;
    return winner;
  }
  else
    return 3;

}


void helpGuide(int true){
  if (true == 1){
  printf("To Select a symbol, enter the corresponding numbers of: 1 = Rock, 2 = Paper and 3 = Scissors\n");
  printf("Best to 3 Wins, Our A.I decides on a random number\n");

  return;

}else{
  return;
}

}

int main(){
  srand( time(NULL) ); //seeding random number
  int gameActive = 0; //integer to check if game state is active
  int userInput = 0;
  int winner = 0; //integer to decide game winner
  printf("Welcome to Rock Paper Scissors!\n");
  printf("Select an Option - 1 = Game Start, 2 = Help Guide, 3 = Game Reset, 4 = Quit:\n");
  scanf("%d ", &userInput);

  if (userInput == 4){ //4 quits game
    return 0;
  }

  else if(userInput == 1){ //starts game
    gameActive = 1;
  }

  else if(userInput > 4 || userInput < 1){
    printf("Error, Invalid Input\n");
    return 0;
  }
while (gameActive == 0){ //game is active from start, repeats option calls so that user can continue through menus

  if(userInput == 3){
    printf("Game Reset - Please Select an Option:\n");
    scanf("%d ", &userInput);
    return gameActive = 0;
  }else if(userInput == 2){
    helpGuide(1);
    printf("Enter Option 1 2 or 3\n");
    scanf("%d ",&userInput);
    return gameActive = 0;
  }else if(userInput == 1){
    gameActive = 1;

  }
}

if (gameActive == 1){
  while(gameActive == 1){ //game is active while 1 is the value to game activity
    int userWinCount = 0; // counter for user wins
    int aiWinCount = 0; // counter for ai wins


    while(userWinCount < 3 || aiWinCount < 3){ //while both user OR ai holds wins less than 3
      int userSelect;
      int aiSelect;
      int round;


      aiSelect = aiChoice(); // generates number for ai
      printf("Enter a number: 1 = Rock, 2 = Paper, 3 = Scissors\n");
      scanf("%d ", &userSelect);



      round = roundWinner(aiSelect,userSelect); //calls function to check who won the round

      if(round == 2){
        aiWinCount++; //add 1 count to ai if ai won (function output = 2)
      }else if(round == 1){
        userWinCount++; // add 1 coun to user if user wins (function output = 1)
      }


    }
    if(userWinCount == 3){
      gameActive = 0;
      winner = 1;

    }else if(aiWinCount == 3){
      gameActive = 0;
      winner = 2;
    }
  }


}
if(winner == 1){
  printf("Congrats! You Won!\n");
  return 0;
}else if(winner == 2){
  printf("The computer won.....\n");
  return 0;
}

return 0;
}
