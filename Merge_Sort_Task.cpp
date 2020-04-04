#include<iostream>
using namespace std;

void Merge(int arr[], int low, int middle, int high)
{
	int i, j ,k;
	
	int n1 = middle - low + 1;		// Length of Left Array
	int n2 = high - middle;		// Length of Right Array

	int Left_Array[n1], Right_Array[n2];
	
	for(i=0; i<n1; i++)				// Storing the elements in Left_Array
		Left_Array[i] = arr[low + i];
	
	for(j=0; j<n2; j++)				// Storing the elements in Right_Array
		Right_Array[j] = arr[middle + 1 + j];

	i = 0; j = 0; k = low;

	while(i<n1 && j<n2)			// Merging the two arrays with conditions
		if(Left_Array[i] < Right_Array[j])
			arr[k++] = Left_Array[i++];
		else
			arr[k++] = Right_Array[j++];

	while(i < n1)					// Adds the remaining elements of Left_Array
		arr[k++] = Left_Array[i++];

	while(j < n2)					// Adds the remaining elements of Right_Array
		arr[k++] = Right_Array[j++];
}

void MergeSort(int arr[], int low, int high)
{
	int middle;
	if(low < high)
	{
		middle = (low + high)/2;

		MergeSort(arr, low, middle);
		MergeSort(arr, middle+1, high);

		Merge(arr, low, middle, high);
	}
}

int main()
{
	int arr[] = {4, 6, 2, 3, 1, 8, 9, 5, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";	
	
	MergeSort(arr, 0, n);

	cout << endl <<endl;
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}
