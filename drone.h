// Lawrence Scroggs CS202 04/05/19 Program 1
// This file will hold the drone class of the program
// it will also hold the location and controller class.
// The parent class will be the location class this way 
// the drone is a location and the controller is a drone
// they controller will access the drone and drone will move 
// location

#include <random>
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <cstring>



class location{

  public:
    location();
    location(char *& b_location);
    ~location();
    
    void display();
    

  protected:

    char * a_location;


};
class drone: public location{

  public:
    drone();
    drone(char *& a_name, char *& b_location);
    ~drone();

    void build_drone();
    void display_drone();

  protected:
    char * drone_name;


};
class controller{

  public:
    controller();
    ~controller();
    void move_forward();
    void move_back();
    void move_up();
    void move_down();
    void set_start();

  protected:


};
