#include<iostream>
using namespace std;

struct node		// Structure of a node
{
	int info;
	node *next;
} *start, *rear, *ptr, *newptr;

node *create_node(int inf)	// This function creates a new node
{
	ptr = new node;
	ptr->info = inf;
	ptr->next = NULL;
	
	return ptr;		// Returning pointer
}

void insert_node(node *n)	// This function inserts the node in list
{
	if(start == NULL)
		start = rear = n;	
	else
	{
		rear->next = n;
		rear = n;
	}
}

void display_node(node *n)	//This function displays the list
{
	if(start == NULL)
		cout << "END\n";
	else
	{
		while(n)
		{
			cout << n->info << "->";
			if(n->next == start)		// Condition for breaking the loop
				break;
			n = n->next;
		}
		cout << "END\n";
	}
}

void delete_node(int inf)	//This function deletes the node
{
	bool cnd;
	if(start==NULL)
		cout << "UNDERFLOW ERROR\n";
	
	else
	{
		node *store;
		ptr = start;
		
		while(ptr->info != inf)
		{
			store = ptr;
			ptr = ptr->next;
		}
		
		if(cnd == false)
			cout << "Information not found !!\n";
		else
		{
			store->next = ptr->next;
			delete ptr;
		}
	}
}

int main()
{
	int ch = 0, info;
	
	flag:
	cout << "====================\n";
	cout << "1. Insert Node. \n";
	cout << "2. Display Node. \n";
	cout << "3. Delete Node. \n";
	cout << "4. Exit \n";
	cout << "Enter you choice: "; cin >> ch; 
	cout << "====================\n";
	
	switch(ch)
	{
		case 1:
			cout << "Enter the information: "; cin >> info;
			newptr = create_node(info);
			if(!newptr)
			{
				cout << "Memory Error\n"; 
				exit(0);
			}
			insert_node(newptr);
			goto flag;
			
		case 2:
			cout << "Displaying the information: \n";
			display_node(start);
			goto flag;
		
		case 3:
			cout << "Enter the information you want to delete: "; cin >> info;
			delete_node(info);
			goto flag;
	
		case 4:
			exit(0);
		
		default:
			cout << "Wrong Input !!\n\n";
			goto flag;
	}	
}
