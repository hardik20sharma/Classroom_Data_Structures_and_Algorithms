#include<iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	
	int Left_Array[n1], Right_Array[n2];
	
	for(i=0; i<n1; i++)
		Left_Array[i] = arr[low + i];
	for(j=0; j<n2; j++)
		Right_Array[j] = arr[mid + j + 1];
		
	i=0; j=0; k=low;
	
	while(i<n1 && j<n2)
		if(Left_Array[i] <= Right_Array[j])
			arr[k++] = Left_Array[i++];
		else
			arr[k++] = Right_Array[j++];
			
	while(i<n1)
		arr[k++] = Left_Array[i++];
	while(j<n2)
		arr[k++] = Right_Array[j++];
}

void MergeSort(int arr[], int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high)/2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid+1, high);
		Merge(arr, low, mid, high);
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
	int size = sizeof(arr)/sizeof(arr[0]);
	PrintArray(arr, size);
	MergeSort(arr, 0, size-1);
	PrintArray(arr, size);
}
