// Lawrence Scroggs CS202 04/06/19 program 1
// This file will hold the class for the obstacles class
// obstacles will have random attributes depending on the
// obstacle member sent into node class.  These will need
// to be set up so the drone can see them when moving
// through out the track.

#include <random>
#include <cctype>
#include <iostream>

using namespace std;

class obstacle{

  public:
    obstacle();
    ~obstacle();


  protected:
    int height;
    int index;
    char ob_location;

};
