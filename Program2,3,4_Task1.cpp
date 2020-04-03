//WAP to insert, display and delete element in linked list
#include<iostream>
using namespace std;

struct node
{
	int info;
	node *next;	
} *start, *rear, *newptr, *ptr;

//Creating new node
node *create_node(int inf)
{
	ptr=new node;
	ptr->info=inf;
	ptr->next=NULL;
	return ptr;
}

//Insert Node
void insert_node(node *n)
{
	if(start==NULL)
		start=rear=n;
	else
	{
		rear->next=n;
		rear=n;
	}
}

//Display Node
void display_node(node *n)
{
	while(n!=NULL)
	{
		cout<<n->info<<"->";
		n=n->next;
	}
	cout<<"END\n";
}

//Delete Node
void delete_node()
{
	if(start!=NULL)
	{
		ptr=start->next;
		delete start;
		start=ptr;
	}
}

int main()
{
	int num, info;
	start=NULL;
	rear=NULL;
	
	cout<<"Enter the number of elements: "; cin>>num;
	for(int i=0; i<num; i++)
	{
		cout<<"Enter the information: "; cin>>info;
		newptr = create_node(info);
		insert_node(newptr);
	}
	cout<<"Displaying information: \n"; display_node(start);
	
	char ch='N';
	cout<<"\nWant to delete information ?"; cin>>ch;
	while(ch=='Y' || ch=='y')
	{
		delete_node();
		display_node(start);
		cout<<"\nWant to delete information ?"; cin>>ch;
	}
}
