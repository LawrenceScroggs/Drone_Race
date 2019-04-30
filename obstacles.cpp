// Lawrence Scroggs CS202 04/06/19 program1
// This will hold all the functions for the obstacle
// and obstacle location classes.  The functions
// will consist of the three different obstacles that the
// drone may come in contact with. These will check the data
// of node and set randomly



#include "obstacles.h"

// builds obstacles constructor
obstacle::obstacle(){
  
    height = 0;
    index = 0;
    ob_location = ' ';
} 
// obstacle destructor
obstacle::~obstacle(){

    height = 0;
    index = 0;
    ob_location = ' ';

}

  




