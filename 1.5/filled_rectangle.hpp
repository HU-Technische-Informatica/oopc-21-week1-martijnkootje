#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP

#include "hwlib.hpp"

class filled_rectangle {
private:    

   hwlib::window & w;
   int start_x;
   int start_y; 
   int end_x;
   int end_y;

public:

   filled_rectangle( 
       hwlib::window & w,
       int p_start_x, int p_start_y, 
       int p_end_x, int p_end_y 
   ): 
      w( w )
   {
      start_x = p_start_x;
      start_y = p_start_y;
      end_x   = p_end_x;
      end_y   = p_end_y;
   }

   void print();
};
#endif // FILLED_RECTANGLE_HPP
