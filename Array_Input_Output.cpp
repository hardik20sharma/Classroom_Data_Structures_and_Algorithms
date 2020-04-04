//LINKED LIST
#include<iostream>
#include<string.h>
using namespace std;

struct Person
{
	char name[20];
	int age;
	
}P[2];

int main()
{
	cout<<"\n--------------\n";
	for(int i=0; i<3; i++)
	{
		cout<<"Enter name: "; fflush(stdin); gets(P[i].name); 
		cout<<"Enter age: "; cin>>P[i].age;
	}
	
	cout<<"\n--------------\n";
	for(int i=0; i<3; i++)
	{
		fflush(stdout); puts(P[i].name);
		cout<<P[i].age<<endl;
	}
}
