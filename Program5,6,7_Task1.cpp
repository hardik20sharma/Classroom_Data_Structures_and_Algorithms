// WAP to insert, delete, display element in doubly linked list
#include<iostream>
using namespace std;

struct node
{
	node *prev;
	int info;
	node *next;	
} *start, *rear, *newptr, *ptr;

node *create_new_node(int inf)
{
	ptr = new node;
	ptr->prev=NULL;
	ptr->info=inf;
	ptr->next=NULL;
	
	return ptr;
}

void insert_new_node(node *n)
{
	if(start==NULL)
		start=rear=n;
	else
	{
		rear->next=ptr;
		ptr->prev=rear;
		rear=ptr;
	}
}

void display_node(node *n)
{
	while(n!=NULL)
	{
		cout<<n->info<<"->";
		n=n->next;
	}
	cout<<"END\n";
}

void delete_node()
{
	if(start!=NULL)
	{
		ptr = start->next;
		ptr->prev = NULL;
		delete start;
		start = ptr;
	}
}

int main()
{
	int num, info;
	start=NULL;
	rear=NULL;
	
	cout<<"Enter the elements: "; cin>>num;
	for(int i=0; i<num; i++)
	{
		cout<<"Enter the information: "; cin>>info;
		newptr=create_new_node(info);
		insert_new_node(newptr);
	}
	
	cout<<"\nDisplaying the list: \n";
	display_node(start);
	
	char ch='N';
	cout<<"\nWant to delete information ?\n"; cin>>ch;
	while(ch=='Y' || ch=='y')
	{
		delete_node();
		display_node(start);
		cout<<"\nWant to delete information ?"; cin>>ch;
	}
}
