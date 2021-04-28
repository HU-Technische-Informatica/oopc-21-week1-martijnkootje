#include "filled_rectangle.hpp"
#include "hwlib.hpp"

void filled_rectangle::print(){
	int_fast16_t xDraw, yDraw;
	for(int i = start_x; i < end_x; i++){
		for(int j = start_y; j< end_y; j++){
			xDraw = i;
			yDraw = j;
			w.write(xy(xDraw, yDraw) , red);
		}
	}
   w.flush();
}