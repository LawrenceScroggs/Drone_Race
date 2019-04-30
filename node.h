// Lawrence Scroggs CS202 04/06/19 Program1
// This file will hold the node class and the
// racetrack class the node class will hold information
// in which drone location will use to move around the track.
// Racetrack will be the graph so an array of the class
// racetrack that holds a head pointer within. Node will implement
// the linked list and hold the info that drone will need.

#include <random>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

#include "obstacles.h"

class node;
class racetrack;


class node{

  public:

    node(int count,racetrack * connect,char temp2);
    node();
    node(const node &);
    ~node();

    char * forward(char * temp, node * current);
    char get_loc();

    void display(node * head);

    bool go_next(node * current);
    bool set_touch_go(obstacle touch_go);
    bool set_post(obstacle post);
    bool set_ladder(obstacle ladder);

  protected:

    int height[10];
    char location;
    bool touch_go;
    bool post;
    bool ladder;

    node * next;
    node * prev;
    racetrack * index;

};
class racetrack{

  public:
    racetrack();
    ~racetrack();
    racetrack(const racetrack &);

    void build_track();
    void display_track();
    void get_info();
    char * can_move(char * temp);
    bool start_race();
    

  protected:

    int index = 0;
    int list_size;
    int count = 0;

    racetrack * adj_list;
    node * head;

};
