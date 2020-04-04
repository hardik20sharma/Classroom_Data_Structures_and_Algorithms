#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot = arr[low];
	int i = low+1;

	for(int j=low+1; j<high; j++)
		if(arr[j] < pivot)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}

	swap(arr[low], arr[i-1]);
	return (i-1);
}

void quicksort(int arr[], int low, int high)
{
	int pivot;
	if(low < high)
	{
		pivot = partition(arr, low, high);
		quicksort(arr, low, pivot-1);
		quicksort(arr, pivot+1, high);
	}
}

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {5, 7, 9, 1, 14, 36, 24};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	print(arr,n); cout << endl << endl;
	quicksort(arr, 0, n);
	print(arr,n);
}
