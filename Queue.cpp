/*
//Write a program to implement stack

#include<iostream>
using namespace std;

main()
{
	int top=-1,i,a[10];
	char ch;
	do
	{
		cout<<"Enter Elements: ";
		cin>>a[++top];
		for(i=0;i<=top;i++)
			cout<<a[i]<<"<-";
		cout<<"\n\nContinue(y/n): ";
		cin>>ch;	
	}while(ch=='y');
	ch=='n';
	do
	{
		cout<<endl<<"Deleting element..."<<endl;
		top--;
		for(i=0;i<=top;i++)
			cout<<a[i]<<"<-";
			cout<<"\n\nContinue(y/n): ";
			cin>>ch;	
	}while(ch=='y');
}
*/

//Write a program to implement queue

#include<iostream>
using namespace std;

main()
{
	int front=-1,rear=-1;
	int i,a[10];
	char ch;
	do
	{
		cout<<"Enter Elements: ";
		cin>>a[++rear];
		if(rear==0)
			++front;
		if(rear>=10)
			cout<<"OverFlow";	
		for(i=front;i<=rear;i++)
			cout<<"->"<<a[i];
		cout<<"\n\nContinue Inserting(y/n): ";
		cin>>ch;	
	}while(ch=='y');
	
	ch=='n';
	
	do
	{
		cout<<endl<<"Deleting element..."<<endl;
		front++;
		if(front>rear)
			cout<<"UnderFlow";
		for(i=front;i<=rear;i++)
			cout<<"->"<<a[i];
			cout<<"\n\nContinue Deleting(y/n): ";
			cin>>ch;		
	}while(ch=='y');
}
