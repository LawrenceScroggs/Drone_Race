// Lawrence Scroggs CS202 04/05/19 Program 1
// This program is an introduction to object oriented programming
// there will be multiple classes used to implement this program
// The classes will be used to hold information about the drone,
// the obstacles and the racetrack on which the drone will need to
// traverse throughout the race track.  


#include "node.h"

int main(){


  drone drone1;
  racetrack track;

  bool again = true;
  
  track.build_track();

  track.display_track();

  track.set_drone(drone1);


  return 0;



}


