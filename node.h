// Lawrence Scroggs CS202 04/06/19 Program1
// This file will hold the node class and the
// graph class the node class will hold information
// of the location of the drone and the graph which 
// is the racetrack for the drone.  This will also be
// the base class for both sets of drone and obstacle 
// allowing for shared functioniality between the sets

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;



class node{

  public:
    node();
    ~node();


    int set_location(int temp, int temp2);

  protected:
    int d_loc;
    int o_loc;
    int location_num;
    int x;
    int y;

    class vertex * connect;


};
class vertex: public node{

  public:
    vertex(node *& head);
    ~vertex();


  protected:

    node * head;


};
class graph: public vertex{

  public:
    graph();
    ~graph();

    int build_track();

  protected:


    int list_size;
    vertex ** graph_list;
    node * next;
    node * prev;

};
