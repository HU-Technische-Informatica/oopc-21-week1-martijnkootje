#ifndef FURNITURE_HPP
#define FURNITURE_HPP
#include <iostream>
#include <vector>

using namespace std;

class stoel{
private:
	int n_legs;
	int n_seats;

	void print_legs();
	void print_seats();
	int return_legs();
	int return_seats();

public:
	stoel(
	const int &poten,
	const int &zitplekken
	):

	n_legs(poten),
	n_seats(zitplekken)

	{};

	int legs();
	int seats();
	void print();
};

class tafel{
private:
	int n_legs;
	int lenght;
	int width;

	void print_legs();
	void print_lenght();
	void print_widht();
	int return_legs();
	int return_height();
	int return_widht();

public:
	tafel(
	const int &n_legs,
	const int &lenght,
	const int &width
	):
	n_legs(n_legs),
	lenght(lenght),
	width(width)
	{}

	void print();
	int legs();
	int widht();
	int height();
};

class furnatures{
private:
	vector<stoel> stoelen;
	tafel t;

	void print_tafel();
	void print_stoelen();

public:
	furnatures(
		vector<stoel> &stoelen,
		tafel &t
	):
		stoelen(stoelen),
		t(t)
	{}

	void print();
	void makeMoreHipster();
};

#endif //FURNITURE_HPP
