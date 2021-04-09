/*
  File:         HockeyTeams.c
  Author:	      Nicholas Navarro
  Description:  File that handles user inputs and stores fixtures and points for team.
*/

#include<stdio.h> //basic operation
#include<string.h>//string manipulaion
#include<stdlib.h>//randon number genration


/*DEFININTION OF TEAM STRUCT*/
typedef struct TEAM {

  char* teamName;
  int leaguePosition;
  int teamWins;
  int teamLosses;
  int teamTies;
  int totalGamesPlayed;
  float pointPercentage;
  float teamRating;

} TEAM;




TEAM *teamArray(TEAM *emptyArray, int numOfTeams) { //function that takes an empty array and its size and fills it with teams


  int c = 0;//counter variable
  int menuChoice = 0;//user variable to catch user choice
  TEAM* teams = malloc(numOfTeams * sizeof *teams); //DYANMIC MEMORY ALLOCATION for array of teams


  for(c = 0; c < numOfTeams; c++){//for each step from 0 to maximun number of teams


    printf("\nTeam List: 1.Rauma | 2.Turku | 3.Helsinki | 4.Tampere\n\n");
    printf("Enter Select Team %d according to Number: ", c+1);


    teams[c].teamName=(char*)malloc(sizeof(char*));//dynamic memory allocation for team name attribute
    scanf("%d", &menuChoice);//scans user choice and places it in memu choice

    if(menuChoice == 1){//if user chooses rauma
      printf("\nRauma Chosen\n");
      teams[c].teamName=("Rauma");//team name is rauma
    } else if (menuChoice == 2) { //if user chooses Turku
        printf("\nTurku Chosen\n");
        teams[c].teamName=("Turku");//team name is Turku
      } else if(menuChoice == 3) { // if user chooses helsinki
        printf("\nHelsinki Chosen\n");
        teams[c].teamName=("Helsinki");//teamname is helsinki
      } else if(menuChoice == 4) {//if user chooses tampere
        printf("\nTampere Chosen\n");
        teams[c].teamName=("Tampere");//teams name is tampere
      } else if(menuChoice > 4) { //error catching, if user enters number bigger than 4
        printf("Invalid Input!\n");
        teams[c].teamName=("Error - Invalid Name");//assings error code to team name
      } else if(menuChoice <= 0) {//error catching if user enters a number equal or less than 0
        printf("Invalid Input!\n");
        teams[c].teamName=("Error - Invalid Name");//assigns error code to team name
      }

    }

  emptyArray = &teams[0];//points pointer to array

  return emptyArray;//returns filled array


}


void arrayPrinter(TEAM *arrayPointer, int size) {//function that takes a team pointer and its size

  int i = 0; //counter variable

  printf("\nPrinting Team List\n\n");

  for(i = 0; i < size; i++) {//for each step from 0 to array size
     printf("Team Name: %s\n", arrayPointer->teamName);//prints team name attribute
     printf("Team Wins: %d\n", arrayPointer->teamWins);//prints team wins attribute
     printf("Team Ties: %d\n", arrayPointer->teamTies);//prints team ties attribute
     printf("Team Losses: %d\n", arrayPointer->teamLosses);//prints team losses attribute
     printf("Total Games Played: %d\n", arrayPointer->totalGamesPlayed);//prints team total games attribute
     printf("Team Rating: %-.1f out 10\n", arrayPointer->teamRating);//prints team rating  attribute

     printf("-------------------------\n");

     arrayPointer++; //increases position of pointer
   }

}

void teamRatingCalculator(TEAM *hockeyTeam) {//functon that takes a team struct


     float ratingCalculation = 0.0; //float int to store rating


     ratingCalculation = ((float)hockeyTeam->teamWins)/((float)hockeyTeam->totalGamesPlayed); //rating calculation takes the value of teams wins / total games played

     ratingCalculation *= 10; //times rating by 10, so that it can be in format x.x instead of 0.xx


     hockeyTeam->teamRating = ratingCalculation; //assigns the rating calulated to team rating attribute

 }
