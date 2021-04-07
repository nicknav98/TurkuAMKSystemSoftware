/*
  File:         Simulation.c
  Author:	      Nicholas Navarro
  Description:  File that handles simulation functions

*/

#ifndef SIMULATION_H
#define SIMULATION_H



void gameSimulation(TEAM *hockeyTeam1, TEAM *hockeyTeam2);
void teamToFile(char *filePath, TEAM *teamList, int amount);

#endif /* SIMULTION.H */
