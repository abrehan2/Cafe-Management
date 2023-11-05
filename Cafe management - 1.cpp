#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include "Cafe.h"

using namespace std;

Cafe :: Cafe()
{
	items = new string [30];
	price = new double [30];
}

void set_items(Cafe &obj)
{
	//cafe items-lunch

	obj.items[0]="Sandwiches";
	obj.items[1]="Pasta";
	obj.items[2]="Panini";
	obj.items[3]="Chicken Pie";
	obj.items[4]="Chicken Strips";
	obj.items[5]="Nachos";
	obj.items[6]="Lasagna";
	obj.items[7]="Chicken Loaf";
	obj.items[8]="Chicken Parmesan";
	obj.items[9]="Cheese Puffs";

	//cafe items-desserts

	obj.items[10]="Apple Pie";
	obj.items[11]="Pancakes";
	obj.items[12]="Cheese Cake";
	obj.items[13]="Waffles";
	obj.items[14]="Sea Salt Cookies";
	obj.items[15]="Brownies";
	obj.items[16]="Donuts";
	obj.items[17]="Pretzel";
	obj.items[18]="Flan";
	obj.items[19]="Croissants";

	//cafe items-Beverages

	obj.items[20]="Brewed Coffee";
	obj.items[21]="Vanilla Bean Latte";
	obj.items[22]="Hot Chocolate";
	obj.items[23]="Tea";
	obj.items[24]="Americano";
	obj.items[25]="Espresso";
	obj.items[26]="Smoothie";
	obj.items[27]="Mint Margarita";
	obj.items[28]="Cranberry Margarita";
	obj.items[29]="Pink Cadillac Margarita";

	obj.price[0] = 10.75;
	obj.price[1] = 25.95;
	obj.price[2] = 8.55;
	obj.price[3] = 12.95;
	obj.price[4] = 19.15;
	obj.price[5] = 25.05;
	obj.price[6] = 13.00;
	obj.price[7] = 20.57;
	obj.price[8] = 11.05;
	obj.price[9] = 3.75;

	obj.price[10] = 19.75;
	obj.price[11] = 15.15;
	obj.price[12] = 21.25;
	obj.price[13] = 22.05;
	obj.price[14] = 7.75;
	obj.price[15] = 13.05;
	obj.price[16] = 22.15;
	obj.price[17] = 9.70;
	obj.price[18] = 22.65;
	obj.price[19] = 23.45;

	obj.price[20] = 25.01;
	obj.price[21] = 21.15;
	obj.price[22] = 8.75;
	obj.price[23] = 12.15;
	obj.price[24] = 20.55;
	obj.price[25] = 16.75;
	obj.price[26] = 5.95;
	obj.price[27] = 12.25;
	obj.price[28] = 22.52;
	obj.price[29] = 11.05;

}

void display_items(Cafe &obj)
{
int temp_length, x1, x2;
   
    time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
	
		 time_t now = time(0);
	     char* dt = ctime(&now);

	
    cout << endl << endl;
    cout << setw(95) << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout << setw(102) << "Welcome to your very own personalized cafe" << setw(160) << dt;
	cout << setw(95) << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
	cout << setw(100) << "-> All the prices are in dollars \n\n\n";
	for(int i=0;i<10;i++)
	{
		temp_length= obj.items[i].size();
		x1 = obj.items[i+10].size();
		x2 = obj.items[i+20].size();
		if(i>9)
		{
			temp_length++;
		}  
		   
			cout<< setw(20) << i+1<<"-"<<obj.items[i]<<setw(30-temp_length)<< obj.price[i]<<setw(7.5) << "|" << setw(7.5)<<i+10+1<<"-"<<obj.items[10+i] <<setw(30-x1) <<obj.price[i+10] <<setw(7.5) << "|" << setw(7.5) << i+20+1 << "-" << obj.items[i+20]<<setw(35-x2)<<obj.price[i+20] <<endl;
			 Sleep(450);	}
}
	int x;
void input(Cafe &obj)
{
	cout<<endl<<endl;
	Sleep(450);
    cout << setw(95) << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
   Sleep(500);
    cout << "-> Enter the number of items you want: ";
	cin >> x;
Sleep(800);
	if(x<0)   
	{
	    	Sleep(700);
		cout << "\n-> Invalid input.\n\n";
		Sleep(700);
		display_last(obj);
		exit(0);
	}

else
{	Sleep(700);
cout << "\n-> Valid input.\n";
Sleep(700);
}

	
cout << "\n-> Enter the serial number of an item you want: ";
Sleep(700);
for(int i=0; i<x; ++i)
cin >> obj.num[i];


for(int i=0; i<x; ++i)
{

	if(obj.num[i]<0 || obj.num[i]>30)
	{   
		display_error(obj);
}

 }

for(int i=0; i<x; ++i)
{

	if(obj.num[i]>=0 || obj.num[i]<=30)
	{
			display_message(obj);
}

break;

 }
}
int m;

void display(Cafe &obj)
{
   
    cout << "\n\n-> Selected items: \n\n";
    for(int i=0; i<x; ++i)
    {
     
    cout << ++m << "-" << obj.items[--obj.num[i]] << endl << endl;
     Sleep(600);
}
}

void display_message(Cafe &obj)
{   
   Sleep(900);
	cout << "\n-> We serve what you love!\n";
	Sleep(800);
	
}

void display_error(Cafe &obj)
{    	Sleep(700);
	cout << "\n-> Try again!\n\n";
	Sleep(800);
	display_last(obj);
	exit(0);
}

void bill(Cafe &obj)
{
	int temp_length, x1, x2;
	
	 time_t now = time(0);
	 char* dt = ctime(&now);

	cout << endl << endl;
    
    cout << setw(85) << "---------\n";
	cout << setw(84) << "Receipt\n";
    cout << setw(86) << "---------\n\n";
    
    cout << setw(92) << dt << endl << endl;
    
	for(int i=0; i<x; ++i)
	{   
		temp_length= obj.items[obj.num[i]].size();

		if(i>=9)
            ++temp_length;

cout<< setw(56) << i+1<<"-"<<obj.items[obj.num[i]]<<setw(45-temp_length)<< obj.price[obj.num[i]] << endl;
Sleep(600);
				}
				
			}
	
	double total, amount;
	
	void calculate(Cafe & obj)
	{
	
	for(int i=0; i<x; ++i)
	{		            
			total = total + obj.price[obj.num[i]];
			Sleep(550);
	}
       
	cout << endl << endl;
	cout << setw(106) <<"-------------------------------------------------------"<<endl<<endl;
	cout << setw(68) << "Total price: " << setw(34) << total << endl << endl;
	cout << setw(106) <<"-------------------------------------------------------"<<endl;
		
	}
	
	double insert, c;
	
	void validate_money(Cafe &obj)
	{
	
	cout<<endl<<endl;	
	cout << "-> Enter amount: ";
	cin >> amount;
		
		if(amount<0)
		
		{    Sleep(600);
		cout << "\n-> Invalid amount entered.\n\n";
		display_last(obj);
			exit(0);
		}
		
		else if(amount>total)
		{
						Sleep(800);		
			cout<< "\n-> Amount entered was greater than total. Please collect the remaining amount of " << amount-total << " from the cash despenser.\n\n";
			Sleep(800);
			cout << "-> Ready to serve.\n\n";
				Sleep(800);
			 customer_message(obj);	
			 Sleep(900);
			 display_last(obj);
		}
		
	else  if(amount == total)
		
		{   
		Sleep(600);
		cout << "\n-> Valid amount entered.\n\n";
	      	Sleep(700);
		  	cout << "-> Ready to serve.\n\n";
			  	Sleep(700);	
			 customer_message(obj);	
			 display_last(obj);	
		}
		
		 if(amount < total)
		{   Sleep(600);
		    c = total - amount;
			cout << "\n-> Remaining amount to insert: " << c << endl << endl;
				Sleep(700);
				cout << "-> Please insert more amount: ";
		     	cin >> insert;
		     	
		     	if(insert<0)
		     	{   	Sleep(700);
		     			cout << "\n-> Invalid amount entered.\n\n";
		     				Sleep(700);
		     				display_last(obj);
		              	exit(0);
				 }
		     	
		     	
		     	if((insert+amount) == total)
		     	{
		     			Sleep(700);
				cout << "\n-> Amount received.\n\n";
					Sleep(700);
				cout << "-> We are ready to serve.\n\n";
					Sleep(600);
			
				customer_message(obj);
					display_last(obj);
				 }
				 
				 if((insert+amount)>total)
		{
								Sleep(800);
			cout<< "\n->Amount entered was greater than total. Please collect the remaining amount of " << (insert+amount)-total << " from the cash despenser.\n\n";
			Sleep(800);
			cout << "-> Ready to serve.\n\n";
				Sleep(800);
			 customer_message(obj);	
			 Sleep(900);
			 	display_last(obj);
		}
				 
				  if((insert+amount)<total)
				 {
				 	Sleep(800);
		
				cout << "\n-> Sorry! Because of less amount, you failed to taste what you selected. \n\n";
					Sleep(800);
				cout << "-> Please take the entered amount from the cash dispenser and run the code again. \n\n";
				Sleep(950);
				display_last(obj);
				exit(0);
			
				 }
				 		}
																					
			}
			
			void display_last(Cafe &obj)
			{				
	        	system("cls");
	        	 Sleep(600);
		cout << endl << endl << endl << endl << endl << endl << endl;
		cout << setw(118) << "Project by: 1) Asmara Irfan 2) Sarah Mujtaba 3) Abdul Rehan \n\n";
			Sleep(500);
		cout << setw(101) << "Instructor: Abdul Haleem Butt\n\n"; 
			Sleep(500);
		cout << setw(104) <<"Software engineering - section A\n\n\n";
			Sleep(500);
		cout << setw(100) << "Air university, Islamabad\n\n\n";
		
			}
						
	void customer_message(Cafe &obj)
		{
			
			cout << "-> Thank you for ordering! We hope to see you next time.";
			Sleep(1200);
			
		}
		
	Cafe :: ~Cafe()
	{
	delete [] items;
	delete [] price;
	}
