#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float radius =0;
	float pi = 3.1416;
	float area = 0;
	float a = 0;
	float b = 0;
	int option = 0;
	
	do
	{
		cout << "_______________________________" << endl << endl;
		cout << "             Menu" << endl;
		cout << "_______________________________" << endl << endl;
		cout << "Select the option you want" << endl;
		cout << "1 to calculate area of te circle" << endl;
		cout << "2 to calculate area of te sphere" << endl;
		cout << "3 to calculate area of te square" << endl;
		cout << "4 to exit" << endl;
		cout << ">> ";
		cin >> option;
		
		switch(option)
		{
			case 1:
				cout << endl << "Enter a radius value" << endl;
				cout << ">> ";
				cin >> radius;
				
				area = (pow(radius, 2)) * pi;
				
				cout << endl << "The circle area is " << area << endl << endl;
				break;
				
			case 2:
				cout << endl << "Enter a radius value" << endl;
				cout << ">> ";
				cin >> radius;
				
				area = (pow(radius, 2)) * (4 * pi);
				
				cout << endl <<"The sphere area is " << area << endl << endl;
				break;
			
			case 3:
				cout << endl << "Enter a value" << endl;
				cout << ">> ";
				cin >> a;
				cout << endl << "Enter b value" << endl;
				cout << ">> ";
				cin >> b;
				
				area = a * b;
				
				cout << endl << "The square area is " << area << endl << endl;
				break;
			
			case 4:
				cout << endl << "Thanks for using this program" << endl;
		}
	}
	while (option != 4);
	
	return 0;
}