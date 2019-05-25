
#include <iostream>

using namespace std;

void bubbleSort()

{
	int size, j, z, x;
	double arr[100];
	
	cout << "Bubble Sorting..." << "\n";
	cout << "Enter the array size : " << flush; cin >> size;
	cout << "Enter the " << size << " elements : " << "\n";
	
	for (x = 0; x < size; x++)
	{
		cin >> arr[x];
	}
	
	cout << "\n";
	
	cout << "Your data : ";
	for (x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	
	cout << "\n";
	
	for (x = 0; x < size; x++)
	{
		for(j = 0; j < size - x - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				z = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = z;
			}
		}
	}
	
	cout << "\n";
	cout << "After using bubble sort... \n \n";
	cout << "Sorted data : ";
	for (x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
		
	}
}

void selectionSort()
{
	
	int size, j, z, x;
	double arr[100];
	
	cout << "Selection Sorting..." << "\n";
	cout << "Enter the array size : " << flush; cin >> size;
	cout << "Enter the " << size << " elements : " << "\n";
	
	for (x = 0; x < size; x++)
	{
		cin >> arr[x];
	}
	
	cout << "\n";
	
	cout << "Your data : ";
	for (x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	
	cout << "\n";
	
	for (x = 0; x < size; x++)
	{
		for(j = x + 1; j < size; j++)
		{
			if (arr[x] > arr[j])
			{
				z = arr[x];
				arr[x] = arr[j];
				arr[j] = z;
			}
		}
	}
	
	cout << "\n";
	cout << "After using selection sort... \n \n";
	cout << "Sorted data : ";
	for (x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
		
	}

}
int main()


	{
	char choice;
	cout << "[S] Selection or [B] Bubble Sort? : "; cin >> choice;
	
	switch (choice)
	{
	case 's':
	case 'S':
		selectionSort ();
	break;
	
	case 'b':
	case 'B':
		bubbleSort ();
	break;
	
	default:
		cout << "You must choose between S or B!";
	break;
	}
	
	return 0;
	
}

