// Lawrence Scroggs CS202 04/06/19 Program 1
// This file will hold all the functions for the 
// Drone Class
// Controller Class
// Location Class
// I will use this file to implement constructors and their initialization list
// along with the functions used throughout the program.  Drone will be information held
// on it's location, the drone itself and the controller for the drone

#include "drone.h"

location::location(){

  a_location = new char[3];
  for(int i; i < 3; ++i)
    a_location[i] = 0;

  height = 0;

  level = 0;
  
}
