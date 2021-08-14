#include "object.hpp"

void object::draw(){
	line1.draw(w);
	line2.draw(w);
	circle1.draw(w);
	rectangle1.draw(w);
	w.flush();
}

