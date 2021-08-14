#include "hwlib.hpp"
#ifndef OBJECT_HPP
#define OBJECT_HPP

class object{
private:
	hwlib::line line1;
	hwlib::line line2;
	hwlib::circle circle1;
	hwlib::rectangle rectangle1;
	hwlib::window &w;
	int extrasize;
public:
	object(hwlib::window &w, int extrasize):
	line1(hwlib::line(hwlib::xy(10, 30-extrasize), hwlib::xy(10, 60+extrasize))),
	line2(hwlib::line(hwlib::xy(40, 30-extrasize), hwlib::xy(40, 60+extrasize))),
	circle1(hwlib::circle(hwlib::xy(25, 25), 15)),
	rectangle1(hwlib::rectangle(hwlib::xy(10, 10-extrasize), hwlib::xy(40, 40+extrasize))),
	w(w),
	extrasize(extrasize)
	{}
	
	void draw();
};

#endif // OBJECT_HPP
