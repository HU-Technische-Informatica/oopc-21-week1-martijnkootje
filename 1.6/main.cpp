#include "object.cpp"

int main(void){
	hwlib::target::window w(hwlib::xy( 180, 180));
	object o(w, 1);
	while(1){
		w.poll();
		hwlib::wait_ms(10);
		w.clear();
		o.draw();
	}
	
}
