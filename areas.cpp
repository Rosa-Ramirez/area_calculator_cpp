#include <iostream>

using namespace std;

int main()
{
	float radius = 0;
	float pi = 3.1416;
	float circleArea = 0;
	float sphereArea = 0;
	float squareArea = 0;
	float a = 0;
	float b = 0;
	int option = 0;
	
	if (option == 0)
	{
		cout << "_____________________" << endl;
		cout << "        Menu" << endl;
		cout << "_____________________" << endl;
		cout << "Select the option you want" << endl;
		cout << "1 to calculate area of the circle" << endl;
		cout << "2 to calculate area of the sphere" << endl;
		cout << "3 to calculate area of the square" << endl;
		cout << "4 to exit" << endl;
		cout << ">> ";
		cin >> option;
		
		if (option == 1)
		{
			cout << "Enter radius value" << endl;
			cout << ">> ";
			cin >> radius;
			
			circleArea = (radius*radius)*pi;
			
			cout << "The circle area is " << circleArea << endl << endl;
		}
		
		if (option == 2)
		{
			cout << "Enter radius value" << endl;
			cout << ">> ";
			cin >> radius;
			
			sphereArea = (radius*radius)*(pi*4);
			
			cout << "The sphere area is " << sphereArea << endl << endl;
		}
		
		if (option == 3)
		{
			cout << "Enter a value" << endl;
			cout << ">> ";
			cin >> a;
			
			cout << "Enter b value" << endl;
			cout << ">> ";
			cin >> b;
			
			squareArea = a*b;
			
			cout << "The square area is " << squareArea << endl << endl;
		}
	}
	cout << "Thanks for using this program" << endl;

	
	
	return 0;
}