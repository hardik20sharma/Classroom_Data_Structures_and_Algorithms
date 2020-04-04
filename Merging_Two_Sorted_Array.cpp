#include<iostream>
using namespace std;

void Merge(int arr1[5], int arr2[5], int n1, int n2)
{
	int arr[10], i = 0, j = 0, k=0;
		
	while(i<n1 && j<n2)			//Compares and puts the value which is lesser
	{
		if(arr1[i] < arr2[j])
			arr[k] = arr1[i++];
		else
			arr[k] = arr2[j++];
		k++;
	}
	
	while (i < n1) 			//Copies the remainging elements of arr1
        arr[k++] = arr1[i++]; 	//if there are any
  
    while (j < n2) 				//Copies the remaining elements of arr2
        arr[k++] = arr2[j++]; 	//if there are any
	
	for(i=0; i<k; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr1[4] = {6,7,8,9}, arr2[4] = {1,3,4,5};
	Merge(arr1, arr2, 4, 4);
}
