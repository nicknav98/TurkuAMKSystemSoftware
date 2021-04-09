/*
  File:         Simulation.c
  Author:	      Nicholas Navarro
  Description:  File that handles simulation functions

*/
#include<stdio.h>//basic operation
#include<string.h>//string manipulaion
#include<stdlib.h>//randon number genration

#define STOP 100 //stop variable to stop while loops

/*Team struct decleration, used in game simulation*/
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


void gameSimulation(TEAM *hockeyTeam1, TEAM *hockeyTeam2){ //functions that takes pointer of two teams

  int gamePeriod = 0; //variable to game periods
  int isGameOver = 0; //boolean variable to stop game once it reaches STOP value

  int team1Goals = 0; //var for goals scored for team 1
  int team2Goals = 0; //var for goals scored by team 2



  while(isGameOver != STOP){ //while boolean variable does not equal stop

    for(gamePeriod = 0; gamePeriod < 3; gamePeriod++){ //for each game period

      if(hockeyTeam1->teamRating > hockeyTeam2->teamRating) {//if team1 has a rating higher than team 2

        team1Goals = team1Goals + rand() % (5 + (int)hockeyTeam1->teamRating);//team 1 has a higher range of scoring opportunities
        team2Goals = team2Goals + rand() % 5; //team 2 gaols have a range from 0 to 5

      } else if (hockeyTeam2->teamRating > hockeyTeam2->teamRating) { //if teams 2 has a higher rating than team 1

        team2Goals = team2Goals + rand() % (5 + (int)hockeyTeam1->teamRating); //team 2 has a higher rating than team 1
        team1Goals = team1Goals + rand() % 5; //team 1 has range 0 to 5

      } else { //if both teams rating are equal
        team1Goals = team1Goals + rand() % 5; //equal opportunities to score 5 goals per period
        team2Goals = team2Goals + rand() % 5;

        }
    }

    isGameOver = STOP; //breaks while loop
  }

    /* Checks who has a higher goal count, and declared winner, with message printing the results */
      if(team1Goals > team2Goals){
      printf("Team 1 won the game with %d goals compared to Team 2's %d goals!\n\n", team1Goals, team2Goals);
      hockeyTeam1->teamWins += 1; //add 1 to wins for team 1
      hockeyTeam2->teamLosses += 1; //add 1 to loses for team 2
    } else if (team2Goals > team1Goals){
      printf("Team 2 won the game with %d goals compared to Team 1's %d goals!\n\n", team2Goals, team1Goals);
      hockeyTeam2->teamWins += 1; //add 1 to wins for team 2
      hockeyTeam1->teamLosses += 1; //adds 1 to losses for team 1
    } else if (team1Goals == team2Goals){ //if game is tied
      printf("Team 1 tied the game with %d goals compared to Team 2's %d goals!\n\n", team1Goals, team2Goals);
      hockeyTeam1->teamTies += 1; //add one to both team ties counter
      hockeyTeam2->teamTies += 1;
    }


    /*Adds one for total games played, used in the rating calculation function*/
    hockeyTeam1->totalGamesPlayed += 1;
    hockeyTeam2->totalGamesPlayed += 1;


}


void teamToFile(char *filePath, TEAM *arrayPointer, int amount) {//prints tournament results to an empty text file, with parameters of file name, tourament array and size of array
  FILE *openFile = fopen(filePath, "wb");//opens file in writable format
  int c = 0;//counter variable

  for (c = 0; c < amount; c++){//for each step from 0 to amount of array entries

    fwrite(arrayPointer, sizeof(TEAM), 2, openFile);//write data from pointer
    arrayPointer++;//increase postion of pointer



  }

  fclose(openFile);//closes file

  printf("Team Results have been printed to %s file! \n", filePath);//message to confirm it was a success 

}
