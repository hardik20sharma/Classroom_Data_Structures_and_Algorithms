// BUBBLE SORT ---- TEAM 3
#include<iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void BubbleSort(int arr[], int n)
{
	int temp;
	int k=1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
				
			cout << k++ <<".\t"; PrintArray(arr, n);
		}
	cout << endl;
	}
}

int main()
{
	int arr[] = {9,1,5,4,8,6,3,12};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "Unsorted Array----"; PrintArray(arr, n); cout << endl;
		
	cout << "Steps: \n\n"; BubbleSort(arr, n);
	
	cout << "\nSorted Array----"; PrintArray(arr, n);
}
