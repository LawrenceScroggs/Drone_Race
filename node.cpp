// Lawrence Scroggs CS202 04/06/19 Program 1
// This will hold functions for the node class
// and the graph class.  This class will be the glue that holds the 
// racetrack together along with the ability to track both the drone
// location along with the location of all the obstacles within
// the data structure/race track.  The data structure I will be 
// implementing is a graph connected to a doubly linked list, connected 
// edges and vertices allowing the drone to move in four direction

#include "node.h"



using namespace std;


  
// finds where drone is in data stucture and returns updated position
char * node::forward(char * temp,node * current){

  if(temp[1] != current->location)
    return forward(temp,current->next);

  else
  {
    if(!current->next){
      ++temp[0];
      temp[1] = 'A';
      return temp;
    }
    else
    {
      temp[1] = current->next->location;
      return temp;
    }
  }
  
}
// gets info from drone and sends to node for check
char * racetrack::can_move(char * temp){

  char blah = temp[0];
  char * i = new char[2];
  i[0] = blah;
  int here = atoi(i);

  node * current = adj_list[here].head;

  
  strcpy(temp,current->forward(temp,current));

  return temp;


}
// tells drones race is starting
bool racetrack::start_race(){

  return true;

}
// gets the info to compare for drone
bool node::go_next(node * current){

  bool check = false;

  current = current->next;

  if(current)
    return true;


}
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
// displays the nodes in racetrack
void node::display(node * current){

  if(!current) return;

  cout << "Location: " << current->location << endl;
  display(current->next);

}

// builds racetrack for drones
void racetrack::build_track(){

  int temp = 0;
  int temp_c = 20; // sets length of linked list

  char temp_l = 'A';
 

  // implements graph as array of classes
  adj_list = new racetrack[list_size];
  racetrack * connect = NULL;

  for(int i = 0; i < list_size; ++i)
  {
    adj_list[i].head = NULL;
  }

  // while it is less than graph size make track
  while(!adj_list[temp].head && temp < list_size)
  {
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

  // sets height array
  for(int i = 0; i < 10; ++i){
    height[i] = temp_h;
    ++temp_h;
  }
  if(temp == 1)
  {
    next = NULL;
    index = connect;
  }
  
  else 
  {
    ++temp2;
    next = new node(--temp,connect,temp2);
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


}
// destructor for node
node::~node(){

}
// destructor for racetrack
racetrack::~racetrack(){

  //delete adj_list;
}
