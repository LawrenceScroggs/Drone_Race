// Lawrence Scroggs CS202 04/05/19 Program 1
// This program is an introduction to object oriented programming
// there will be multiple classes used to implement this program
// The classes will be used to hold information about the drone,
// the obstacles and the racetrack on which the drone will need to
// traverse throughout the race track.  


#include "drone.h"

int main(){

  drone speedy;
  racetrack track;

  bool check = false;

  track.build_track();

  speedy.build_drone();

  speedy.display_drone();

  speedy.start_time(track.start_race());


  // sends drone location/checks availabilty/ updates position
  speedy.update_position(track.can_move(speedy.go_forward()));
  speedy.display_drone();

  speedy.move_up();
  speedy.display_drone();

  speedy.move_down();
  speedy.display_drone();


  // loop to check for finish line
  while(!check){
  check = speedy.update_position(track.can_move(speedy.go_forward()));

  speedy.display_drone();
  }


 

  return 0;



}


