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

	return ptr;
}

void insert_node(node *n)
{
	if(start == NULL)
		start = rear = n;
	else
	{
		rear->next = n;
		rear = n;
		rear->next = start;
	}
}

void display_list()
{
	if(start==NULL)
		cout << "END\n";
	
	else
	{
		node *n = start;
		while(n)
		{
			cout << n->info << "->";
			if(n->next == start)
				break;
			n = n->next;
		}
		cout << "END\n";
	}
}

int main()
{
	int ch = 0, info;
	
	flag:
	cout << "====================\n";
	cout << "1. Insert Node. \n";
	cout << "2. Display List. \n";
	cout << "3. Delete Node. \n";
	cout << "4. Exit \n";
	cout << "Enter you choice: "; cin >> ch; 
	cout << "====================\n";
	
	switch(ch)
	{
		case 1:
			cout << "Enter the information: "; cin >> info;
			newptr = create_new_node(info);
			if(!newptr)
			{
				cout << "Memory Error\n"; 
				exit(0);
			}
			insert_node(newptr);
			goto flag;
			
		case 2:
			cout << "Displaying the information: \n";
			display_list();
			goto flag;
		
		case 3:
			cout << "Enter the information you want to delete: "; cin >> info;
			//delete_node(info);
			goto flag;
	
		case 4:
			exit(0);
		
		default:
			cout << "Wrong Input !!\n\n";
			goto flag;
	
	}
}
