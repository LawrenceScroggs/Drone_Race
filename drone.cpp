// Lawrence Scroggs CS202 04/06/19 Program 1
// This file will hold all the functions for the 
// Drone Class
// Controller Class
// Location Class
// I will use this file to implement constructors and their initialization list
// along with the functions used throughout the program.  Drone will be information held
// on it's location, the drone itself and the controller for the drone

#include "drone.h"

using namespace std;


// builds new drone and sets name and location
void drone::display_drone(){

  cout << "Name: " << drone_name << endl;
  display();

} 
// displays protected location
void location::display(){

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
}
// drone destructor
drone::~drone(){


}
// drone constructor that sets location
location::location(char *& b_location){

  a_location[0] = b_location[0];
  a_location[1] = b_location[1];
  a_location[2] = b_location[2];

}
// basic drone constructor
location::location(){

  a_location = new char[3];
  for(int i; i < 3; ++i)
    a_location[i] = 0;

  
}
// drone destructor
location::~location(){

}
