#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
	int min;	
	for(int i=0; i<n; i++)
	{
		min = i;
		for(int j=i+1; j<n; j++)
			if(arr[j] < arr[min])
				min = j;
		swap(arr[min], arr[i]);
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
	int arr[]={4,2,6,8,5,9,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Unsorted Array ---\t"; DisplayArray(arr,n);
	SelectionSort(arr,n);
	cout << "Sorted Array ---\t"; DisplayArray(arr,n);
	return 0;
}
