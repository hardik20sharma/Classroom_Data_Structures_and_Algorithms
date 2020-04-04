#include<iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
	int i, j, k;
	int n1 = mid-l+1;
	int n2 = r-mid;

	int left[n1], right[n2];
	for(i=0; i<n1; i++)
		left[i] = arr[l+i];

	for(j=0; j<n2; j++)
		right[j] = arr[mid+j+1];

	i=0, j=0, k=l;
	while(i<n1 && j<n2)
		if(left[i]<right[j])
			arr[k++] = left[i++];
		else
			arr[k++] = right[j++];
	
	while(i<n1)
		arr[k++] = left[i++];
		
	while(j<n2)
		arr[k++] = right[j++];
}

void Merge_Sort(int arr[], int low, int size)
{
	int l = low;
	int r = size;
	int middle;
	if(l<r)
	{
		middle = (l+r)/2;
		Merge_Sort(arr, l, middle);
		Merge_Sort(arr, middle+1, r);
		Merge(arr, l, middle, r);
	}
}

void print(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {5, 9, 14, 16, 2, 30, 49, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	Merge_Sort(arr, 0, size);
	print(arr, size);
}
