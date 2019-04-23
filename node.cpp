// Lawrence Scroggs CS202 04/06/19 Program 1
// This will hold functions for the node class
// and the graph class.  This class will be the glue that holds the 
// racetrack together along with the ability to track both the drone
// location along with the location of all the obstacles within
// the data structure/race track.  The data structure I will be 
// implementing is a graph connected to a doubly linked list, connected 
// edges and vertices allowing the drone to move in four direction

#include "node.h"


// builds racetrack for drones
int graph::build_track(){

  int x1 = 0;
  int y1 = 0;

  if(!head){

    graph_list->*head = new node;
    graph_list->set_location(x1,y1);
  }

 
  
  

}
// graph constructor sets data to null;
node::node(){

  d_loc = 0;
  o_loc = 0;
  x = 0;
  y = 0;

}
// creates vertex class sets head to null
vertex::vertex(node *& head){

  head = NULL;
}
// creates graph class initates graph table invokes adj const
graph::graph(): vertex(head){

  list_size = 13;

  graph_list = new vertex*[list_size];

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
// destructor for vertex
vertex::~vertex(){

}
