#include <iostream>

using namespace std;

	void formula()
	{
	
	char choice;
	do
	{
		
	
	int operation, x, z, a;
	
	
	cout << "MENU:" << "\n";
	cout << "(1) Add" << "\n";
	cout << "(2) Subtract" << "\n";
	cout << "(3) Multiply" << "\n";
	cout << "(4) Divide" << "\n";
	cout << "(5) Modulus" << "\n";
	cout << "\n";
	
	cout << "Enter your choice: "; cin >> operation;
	cout << "Enter your two numbers: " << "\n"; cin >> x; cin >> a;
	
	switch (operation)
	{
	case 1:
		z = x + a;
		cout << "Result: " << z;
		break;
		
	case 2: 
		z = x - a;
		cout << "Result: " << z;
		break;
		
	case 3:
		z = x * a;
		cout << "Result: " << z;
		break;
		
	case 4:
		z = x / a;
		cout << "Result: " << z;
		break;
	case 5:
		z = x % a;
		cout << "Result: " << z;
		break;
	}
	
	cout << "\n \n";
	cout << "Continue? (y): ";
	cin >> choice;
	cout << "\n";
	
	} while (choice == 'y' || choice == 'Y');
	}

int main()

{
	formula();
	
	return 0;
}
