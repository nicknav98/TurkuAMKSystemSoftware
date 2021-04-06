/*
 * File:       	HockeyTeams.h
 * Author:  	Nicholas Navaarro
 * Description: HockeyTeams Header File
*/

#ifndef INPUTOUTPUT_H
#define INPUTOUTPUT_H

typedef struct PLAYER {
  int playerNumber;
  char* playerNationality;
  char* firstName;
  char* lastName;
  char* playerPosition;
  char* playerHand;
  int age;
  int yearAcquired;

  char* Team;

} PLAYER;

void fileToPlayerList(PLAYER *playerArrayPointer, char *filePath);
void playerPrinter(PLAYER *arrayPointer, int size);


#endif /* INPUTOUTPUT_H */
