
#include <iostream>

using namespace std;

void bubblesort()

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
int main()

{
	bubblesort();	
	
	return 0;
	
}

