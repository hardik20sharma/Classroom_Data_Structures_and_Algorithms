// WAP to display pascal's triangle as well as store in array
#include<iostream>
using namespace std;

int main()
{
	int rows, val, i, j, k, n=0;
	cout << "Enter the number of rows: "; cin >> rows;
	int array[rows];
	
	for(i = 0; i < rows ; i++)
	{
		val = 1;
		for(j = i; j < rows-1 ; j++)
			cout << " ";
			
		for(k = 0; k <= i; k++)
		{
			cout << " " << val;
			val = val * (i-k) / (k+1);
		}
		array[n++] = val;
		cout << endl;
	}
}
