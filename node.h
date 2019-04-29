// Lawrence Scroggs CS202 04/06/19 Program1
// This file will hold the node class and the
// graph class the node class will hold information
// of the location of the drone and the graph which 
// is the racetrack for the drone.  This will also be
// the base class for both sets of drone and obstacle 
// allowing for shared functioniality between the sets

#include <random>
#include <iostream>
#include <cctype>
#include <cstring>
#include "drone.h"


using namespace std;
class node;
class racetrack;


class node{

  public:

    node(int count,racetrack * connect,char temp2);
    node();
    node(const node &);
    ~node();

    void display(node * head);

  protected:

    int height[10];
    char location;

    node * next;
    node * prev;
    racetrack * index;

};
class racetrack{

  public:
    racetrack();
    ~racetrack();
    racetrack(const racetrack &);

    void set_drone(drone & a_drone);
    void build_track();
    void display_track();

  protected:

    int drone_count = 0;
    int list_size;
    int count = 0;

    drone * drone1;
    drone * drone2;
    drone * drone3;
    
    racetrack * adj_list;
    node * head;

};
