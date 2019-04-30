// Lawrence Scroggs CS202 04/05/19 Program 1
// This file will hold the drone class of the program
// and the location class.  Drone will be a child of location
// this way it will be a location and more.


#include <random>
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

#include "node.h"

class drone;


class location{

  public:
    location();
    location(char *& b_location);
    ~location();
    
    void display_location();
    

  protected:

    char * a_location;
    char * s_location;


};
class drone: public location{

  public:
    drone();
    drone(const drone &);
    drone(char *& a_name, char *& b_location);
    ~drone();
    

    char * go_forward();

    void move_down();
    void move_up();
    void build_drone();
    void display_drone();
    void set_track(racetrack * ob);
    void start_time(bool check);

    bool update_position(char * temp);

  protected:

    bool start;
    char * drone_name;
    int drone_count = 0;

};
