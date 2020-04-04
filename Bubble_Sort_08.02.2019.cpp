#include<iostream>
using namespace std;

class Bubble_Sort
{
public:
	void sort(int a[], int n);
	void display(int a[], int n);
};

void Bubble_Sort :: sort(int a[], int n)
{
	int i, j, temp;
	for(i=0; i<n; i++)
	{
		for(j=0; j<=(n-i-1); j++)
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
	}
}

void Bubble_Sort :: display(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl << endl;
}

int main()
{
	int a[] = {13, 2, 5, 6, 25, 15 };
	int n = sizeof(a) / sizeof(a[0]);
	
	Bubble_Sort b;
	cout << "Array before sorting.\n"; b.display(a, n);
	b.sort(a, n);	
	cout << "Array after sorting.\n"; b.display(a, n);
}
