// WAP to insert, display, delete elements in circular linked list
#include<iostream>
using namespace std;

struct node
{
	int info;
	node *next;
} *start, *rear, *newptr, *ptr;

node *create_new_node(int inf)
{
	ptr = new node;
	ptr->info = inf;
	ptr->next = NULL;
}

void insert_node(node *n)
{
	if(start == NULL)
		start = rear = n;
	else
	{
		rear->next = n;
		n->next = start;
		rear = n;
	}
}

void display_node(node *n)
{
	if(start == NULL)
		cout << "UNDERFLOW ERROR !!\n";
	else
	{
		while(n)
		{
			cout << n->info <<"->";
			if(n->next == start)
				break;
			n = n->next;
		}
		cout << "END\n";
	}
}

void delete_node(int inf)
{
	bool cnd;
	if(start==NULL)
	{
		cout << "UNDERFLOW\n";
	}
	else
	{
		node *store;
		ptr = start;
		while(ptr->info!=inf)
		{
			store = ptr;
			ptr = ptr->next;			
		}
		
		store->next = ptr->next;
		delete ptr;
	}
}

int main()
{
	int ch=0, info;
	flag1:
	cout << "------------------\n";
	cout << "1. Insert Element\n";
	cout << "2. Display Element\n";
	cout << "3. Delete Element\n";
	cout << "Enter your choice: "; cin >> ch;
	cout << "------------------\n";
	switch(ch)
	{
		case 1: 
			cout << "Enter the information: "; cin >> info;
			newptr = create_new_node(info);
			if(!newptr)
			{
				cout<<"Problem creating in node !";
				exit(0);
			}
			insert_node(newptr);
			goto flag1;
			
		case 2:
			cout << "Displaying data...\n";
			display_node(start);
			goto flag1;
		case 3:
			cout << "Enter the element to delete: "; cin >> info;
			delete_node(info);
			goto flag1;
		default:
			cout << "Wrong Input !!\n\n";
			goto flag1;
	}
}
