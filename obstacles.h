// Lawrence Scroggs CS202 04/06/19 program 1
// This file will hold the class for the obstacles class
// and the obstacle location class.  Obstacle location
// will be the parent class and obstacle will inherit
// these locations to then initiate one of the three
// obstacles

#include "node.h"


class obstacle: public node{

  public:
    obstacle();
    ~obstacle();

  protected:

  private:
    int ob_location;
    bool post;
    bool touch_go;
    bool ladder;

};
class ob_location: public obstacle{

  protected:
    ob_location();
    
    void is_empty();
    bool set_post();
    bool set_touch();
    bool set_ladder();

};
