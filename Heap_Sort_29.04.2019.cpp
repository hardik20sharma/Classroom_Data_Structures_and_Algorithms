#include<iostream>
using namespace std;

void Heapify(int arr[], int n, int i)
{
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;
	
	if(l < n && arr[largest] < arr[l])
		largest = l;
	
	if(r < n && arr[largest] < arr[r])
		largest = r;
		
	if(largest != i)
	{
		swap(arr[i], arr[largest]);
		Heapify(arr, n, largest);
	}
}

void HeapSort(int arr[], int n)
{
	for(int i=(n/2-1); i>=0; i--)
		Heapify(arr, n, i);
	
	for(int i=n-1; i>=0; i--)
	{
		swap(arr[0], arr[i]);
		Heapify(arr, i, 0);
	}
}

void PrintArray(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = {8,2,6,1,7,9,4,3,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr, n);
	HeapSort(arr, n);
	PrintArray(arr, n);	
}
