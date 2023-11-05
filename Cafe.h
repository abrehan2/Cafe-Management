#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <windows.h>

using namespace std;

class Cafe{

	private:
	    string *items; // Dynamic memory allocation (30 items)
		double *price;
		int num [];
		
	public:
		Cafe();
		~Cafe();
	friend void set_items(Cafe &);
	friend void display_items(Cafe &);
	friend void select(Cafe &);
	friend void input(Cafe &);
	friend void display(Cafe &);
	friend void bill(Cafe &);
	friend void display_message(Cafe &);
	friend void display_error(Cafe &);
	friend void calculate(Cafe &);
	friend void validate_money(Cafe &);
	friend void customer_message(Cafe &);
	friend void display_last(Cafe &);
};

