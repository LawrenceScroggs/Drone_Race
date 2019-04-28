// Lawrence Scroggs CS202 04/06/19 Program 1
// This will hold functions for the node class
// and the graph class.  This class will be the glue that holds the 
// racetrack together along with the ability to track both the drone
// location along with the location of all the obstacles within
// the data structure/race track.  The data structure I will be 
// implementing is a graph connected to a doubly linked list, connected 
// edges and vertices allowing the drone to move in four direction

#include "node.h"




// displays track
void racetrack::display_track(){

  int temp = 0;

  node * current = NULL;

  while(temp < list_size){

    current = adj_list[temp].head;
    cout << "Index: " << temp << endl;
    adj_list[temp].head->display(current);
    ++temp;
    
  }
} 
// connects LLL for racetrack
void node::display(node * current){

  if(!current) return;

    
  cout << "Location: " << current->location << endl;
  display(current->next);

}

// builds racetrack for drones
void racetrack::build_track(){

  int temp = 0;
  int temp_c = 5;

  char temp_l = 'A';
  
  adj_list = new racetrack[list_size];
  racetrack * connect = NULL;

  for(int i = 0; i < list_size; ++i)
  {
    adj_list[i].head = NULL;
  }

  while(!adj_list[temp].head && temp < list_size)
  {
    cout << "in here" << endl;

    if(temp == list_size-1)
    {
      connect = &adj_list[0];
      adj_list[temp].head = new node(temp_c,connect,temp_l);
      
    }
    else
    {
      adj_list[temp].head = new node(temp_c,connect,temp_l);
      ++temp;
    }

  }
}
node::node(int temp,racetrack * connect, char temp2){

  int temp_h = 0;

  location = temp2;

  for(int i = 0; i < 10; ++i){
    height[i] = temp_h;
    ++temp_h;
  }
  if(temp == 1)
  {
    cout << "print " << location << endl;
    next = NULL;
    index = connect;
    
  }
  

  else 
  {
    ++temp2;
    next = new node(--temp,connect,temp2);
    cout << "here " << location << endl;
    index = connect;
  }
}
// graph constructor sets data to null;
node::node(){

  int temp_h = 0;

  for(int i = 0; i < 10; ++i){
    height[i] = temp_h;
    ++temp_h;
  }
  location = ' ';

  next = NULL;

}
// creates copy constructor for node
node::node(const node &){

}
// creates racetrack class sets head to null
racetrack::racetrack(){

  list_size = 4;

  head = NULL;
  
}
// copy constructor for racetrack
racetrack::racetrack(const racetrack &){

  list_size = 4;

  adj_list = new racetrack[list_size];

  for(int i = 0; i < list_size; ++i)
  {
    adj_list[i].head = NULL;
    cout << i << endl;
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
