#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
	int i, j, min, temp; 
  
    for (i = 0; i < n-1; i++) 
    { 
        min = i; 
        for (j = i+1; j < n; j++) 
 	       	if (arr[j] < arr[min]) 
    	        min = j; 

        temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp; 
    }
}

void DisplayArray(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[10], n;
	cout << "Enter the number of elements: "; cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	
	DisplayArray(arr, n);
	SelectionSort(arr, n);
	DisplayArray(arr, n);
}
