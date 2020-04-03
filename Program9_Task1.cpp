//WAP to reverse elements of an array
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number of elements: "; cin>>num;
	
	int array[num];
	cout<<"----------------\nInserting Data...\n";
	for(int i=0; i<num; i++)
		cin>>array[i];
	
	cout<<"----------------\nDisplaying Data...\n";
	for(int i=0; i<num; i++)
		cout<<array[i]<<"\t";
		
	int temp;	
	cout<<"----------------\nReversing Data...\n";
	for(int i=0; i<num/2; i++)
	{
		temp = array[num-i-1];
		array[num-i-1] = array[i];
		array[i] = temp;
	}
	
	cout<<"----------------\nDisplaying Data...\n";
	for(int i=0; i<num; i++)
		cout<<array[i]<<"\t";
}
