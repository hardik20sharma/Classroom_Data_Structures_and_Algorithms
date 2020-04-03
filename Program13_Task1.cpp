// WAP of matrix multiplication
#include<iostream>
using namespace std;

int main()
{
	int r1, c1, r2, c2, i, j, k;
	cout<<"Enter number of rows of matrix 1: "; cin>>r1;
	cout<<"Enter number of columns of matrix 1: "; cin>>c1;
	cout<<"Enter number of rows of matrix 2: "; cin>>r2;
	cout<<"Enter number of columns of matrix 2: "; cin>>c2;
	
	if(c2!=r1)
	{
		cout<<"Not possible !!"; return(0);
	}
	int matrix1[r1][c1], matrix2[r2][c2], multiply_matrix[r1][c2];
	
	//Inputing Matrix 1
	cout<<"Enter matrix 1:\n";
	for(i=0; i<r1; i++)
		for(j=0; j<c1; j++)
			cin>>matrix1[i][j];
	
	//Inputing Matrix 2
	cout<<"Enter matrix 2:\n";
	for(i=0; i<r2; i++)
		for(j=0; j<c2; j++)
			cin>>matrix2[i][j];
			
	//Printing Matrix 1
	cout<<"Matrix 1 is -- \n";
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
			cout<<matrix1[i][j]<<" ";
		cout<<endl;		
	}
	
	//Printing Matrix 2
	cout<<"Matrix 2 is -- \n";
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
			cout<<matrix2[i][j]<<" ";
		cout<<endl;	
	}
	//Multiplying
	for(i=0; i<r1; i++)
		for(j=0; j<c1; j++)
		{
			multiply_matrix[i][j]=0;
			for(k=0; k<c1; k++)
				multiply_matrix[i][j]+=matrix1[i][k]+matrix2[k][j];
		}
	
	//Printing Multiply Matrix
	cout<<"Multiplied Matrix is -- \n";
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
			cout<<multiply_matrix[i][j]<<" ";
		cout<<endl;	
	}
}
