// WAP to implement bubble sort
#include<iostream>
using namespace std;

int main()
{
	int n, temp;
	
	cout << "Enter the number of elements: "; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	cout << "Unsorted Array: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	
	//Bubble Sort	
	for(int i=0; i<n; i++)
		for(int j=0; j<(n-i-1); j++)
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);		
			}
			
	cout << "\nSorted Array: ";		
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}
