// Lawrence Scroggs CS202 04/06/19 program 1
// This file will hold the class for the obstacles class
// and the obstacle location class.  Obstacle location
// will be the parent class and obstacle will inherit
// these locations to then initiate one of the three
// obstacles

#include "drone.h"

class obstacle: public location{

  public:
    obstacle();
    ~obstacle();


  protected:
    int height;
    int index;
    char ob_location;

};
class obs_type: public obstacle{

  public:
    obs_type();
    
    void is_empty();
    bool set_post();
    bool set_touch();
    bool set_ladder();
  protected:
    bool post;
    bool touch;
    bool ladder;

};
