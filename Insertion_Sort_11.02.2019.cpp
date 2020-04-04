#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
	int j, key;
	for(int i=1; i<n; i++)
	{
		key = arr[i];
		j = i-1;
		while(j >= 0 && arr[j] > key)
			arr[j+1] = arr[j--];

		arr[j+1] = key;
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
	int arr[]={4,3,2,9,11,1,5};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Unsorted Array ---\t"; DisplayArray(arr,n);
	InsertionSort(arr, n);
	cout << "Sorted Array ---\t"; DisplayArray(arr,n);
}
