#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include "Cafe.h"

using namespace std;

	
int main()
{	

    system("color  8F");
	Cafe C;
 	set_items(C);
	display_items(C);
	input(C);
	display(C);
	bill(C);
	calculate(C);
	validate_money(C);
	
	 
		system("pause");
	    

	return 0;
}
