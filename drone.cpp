// Lawrence Scroggs CS202 04/06/19 Program 1
// This file will hold all the functions for the 
// Drone Class
// Location Class
// I will use this file to implement constructors and their initialization list
// along with the functions used throughout the program.  Drone will be information held
// on it's location.  Drone will be a child class that to Location so it is a location and more!!!

#include "drone.h"





// moves drone down in height
void drone::move_down(){

  if(a_location[2] != '0')
    --a_location[2];

  else
    cout << "Can't go lower" << endl;

}
// moves drone up in height
void drone::move_up(){

  if(a_location[2] != '9')
    ++a_location[2];

  else
    cout << "Can't go higher" << endl;

}

// updates position
bool drone::update_position(char * temp){

  strcpy(a_location,temp);

  if(a_location[0] == '3' && a_location[1] == 'T')
  {
    cout << "FINISH LINE!!!!!  " << drone_name << " WINS!! " << endl;
    return true;
  }
  else 
    return false;

}
// sends location to racetrack checks for obstacles
char * drone::go_forward(){

  char * temp = new char[3];
  strcpy(temp,a_location);

  return temp;


}
// sets starting bool to true if ready
void drone::start_time(bool check){

  start = check;

}
// sets the drone up with a name and its starting location
void drone::build_drone(){

  
  cout << "Please enter the name of your drone: ";
  char * temp = new char[100];
  cin.get(temp,100);
  cin.ignore(100,'\n');
  cout << endl << endl;

  //sets locations for each of the drone objects
  if(drone_count == 0){

    char * temp2 = new char[4];
    temp2[0] = '0';  // index of vertex
    temp2[1] = 'A';  // node location
    temp2[2] = '0';  // height

    drone_name = temp;
    a_location = temp2;
    ++drone_count;

  }
  else if(drone_count == 1){
    
    char * temp2 = new char[4];
    temp2[0] = '0';
    temp2[1] = 'A';
    temp2[2] = '3';

    drone_name = temp;
    a_location = temp2;
    ++drone_count;

  }
  else if(drone_count == 2){
    
    char * temp2 = new char[4];
    temp2[0] = '0';
    temp2[1] = 'A';
    temp2[2] = '6';

    drone_name = temp;
    a_location = temp2;
    ++drone_count;
  }
  else
    cout << "Too many drones for track" << endl << endl;

}
// builds new drone and sets name and location
void drone::display_drone(){

  cout << "Name: " << drone_name << endl;
  display_location();

} 
// displays protected location
void location::display_location(){

  cout << "Location: " << a_location << endl;

}
//builds drone constructor sets name and location
drone::drone(char *& a_name,char *& b_location): location(b_location){

  drone_name = new char[strlen(a_name) + 1];
  strcpy(drone_name,a_name);


}
// basic drone constructor
drone::drone(){

  drone_name = new char[100];
  start = false;

}
// drone destructor
drone::~drone(){

  delete drone_name;

}
drone::drone(const drone & obj){

  drone_name = obj.drone_name;
  start = obj.start;


}
// drone constructor that sets location
location::location(char *& b_location){

  a_location[0] = b_location[0];
  a_location[1] = b_location[1];
  a_location[2] = b_location[2];


}
// basic drone constructor
location::location(){

  a_location = new char[4];
  for(int i; i < 3; ++i)
    a_location[i] = 0;

}
// drone destructor
location::~location(){

  delete a_location;

}
