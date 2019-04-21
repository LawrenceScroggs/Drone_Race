// Lawrence Scroggs CS202 04/06/19 Program 1
// This will hold functions for the node class
// and the graph class.  This class will be the glue that holds the 
// racetrack together along with the ability to track both the drone
// location along with the location of all the obstacles within
// the data structure/race track.  The data structure I will be 
// implementing is a graph connected to a doubly linked list, connected 
// edges and vertices allowing the drone to move in four direction

#include "node.h"

// graph constructor sets data to null;
node::node(){

  d_loc = 0;
  o_loc = 0;

}
// creates adjacent class sets head to null
adjacent::adjacent(node *& head){

  head = NULL;
}
// creates graph class initates graph table invokes adj const
graph::graph(): adjacent(head){

  list_size = 13;

  graph_list = new adjacent*[list_size];

  for(int i = 0; i < list_size; ++i)
  {
    graph_list[i];
  }
}
// destructor for node
node::~node(){

}
// destructor for graph
graph::~graph(){

}
// destructor for adjacent
adjacent::~adjacent(){

}
