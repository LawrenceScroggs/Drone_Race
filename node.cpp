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
void racetrack::build_track(){

  int temp = 0;
  char temp2 = 'A';

  if(!adj_list[temp])
  {
    adj_list[temp] = new node(temp2);
    adj_list[temp].next = NULL;
  }
}
node::node(char temp){

  location = temp;

}
// graph constructor sets data to null;
node::node(){

  height = 10;
  location = ' ';

}
// creates racetrack class sets head to null
racetrack::racetrack(){

  list_size = 4;


  adj_list = new node*[list_size];

  for(int i = 0; i < list_size; ++i)
  {
    adj_list[i] = NULL;
  }
  
}
// creates graph class initates graph table invokes adj const
/*graph::graph(): vertex(head){

  list_size = 4;

  graph_list = new vertex*[list_size];

  for(int i = 0; i < list_size; ++i)
  {
    graph_list[i] = NULL;
  }
}*/
// destructor for node
node::~node(){

}
// destructor for racetrack
racetrack::~racetrack(){

}
