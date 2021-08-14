#include "furniture.hpp"
#include <iostream>

using namespace std;


//stoel class
void stoel::print(){
	print_legs();
	print_seats();
}

void stoel::print_legs(){
std::cout << "stoelpoten: " << n_legs << "\n";
}
void stoel::print_seats(){
std::cout << "stoelzitjes: " << n_seats << "\n";
}


int stoel::legs(){
	int i = return_legs();
	return i;
}

int stoel::return_legs(){
	return n_legs;
}

int stoel::seats(){
	int i = return_seats();
	return i;
}

int stoel::return_seats(){
	return n_seats;
}



//tafel class
void tafel::print(){
	print_legs();
	print_lenght();
	print_widht();
}

void tafel::print_legs(){
std::cout << "tafelpoten: " <<n_legs << "\n";
}

void tafel::print_lenght(){
std::cout<< "tafellengte: " << lenght << "\n";
}

void tafel::print_widht(){
std::cout<< "tafelbreedte: " << width << "\n";
}

int tafel::legs(){
	int i = return_legs();
	return i;
}

int tafel::return_legs(){
	return n_legs;
}

int tafel::widht(){
	int i = return_widht();
	return i;
}

int tafel::return_widht(){
	return width;
}

int tafel::height(){
	int i = return_height();
	return i;
}

int tafel::return_height(){
	return lenght;
}



//furnature class
void furnatures::print(){
	print_stoelen();
	print_tafel();
}

void furnatures::print_stoelen(){
	cout<< "Bij deze meubelgroep horen \n[ " << endl;
	for(stoel s : stoelen){
		s.print();
	}
}

void furnatures::print_tafel(){
	t.print();
	cout<< "]" << endl;
}

void furnatures::makeMoreHipster(){
	vector<stoel> v;
	for(stoel s: stoelen){
		stoel ns(s.legs()-1, s.seats());
		v.push_back(ns);
	}

	stoelen.clear();

	for(stoel s : v){
		stoelen.push_back(s);
	}

	tafel nt(t.legs() + stoelen.size(), t.height(), t.widht());

	t = nt;
}



