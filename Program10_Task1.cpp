// WAP to display sum of numbers using array
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
	
	sum = 0;
	cout <<"Adding the numbers: \n";
	for(int i=0; i<num; i++)
		sum += array[i];
}
