#include<iostream>
using namespace std;

struct node
{
	int info;
	node *next;
};

class Linked_List
{
private:
	node *start, *rear, *ptr;

public:
	Linked_List()
	{
		start = NULL;
		rear = NULL;
		ptr = NULL;	
	}
	
	void insert_info(int n)
	{
		node *temp = new node;
		temp->info = n;
		temp->next = NULL;
		
		if(start == NULL)
			start = rear = temp;
		
		else
		{
			rear->next = temp;
			rear = rear->next;
		}
	}
	
	void display_info()
	{
		cout << endl;
		ptr = start;
		
		while(ptr != NULL)
		{
			cout << ptr->info << "->";
			ptr = ptr->next;
		}
		cout << "END";
	}
	
	bool delete_info(int n)
	{
		if(start==NULL)
			cout << "UNDERFLOW\n";
		else
		{
			node *store;
			ptr = start;
		
			while(ptr->info!=n)
			{
				store = ptr;
				ptr = ptr->next;			
			}

			store->next = ptr->next;
			delete ptr;
		}
	}
};

int main()
{
	Linked_List a;
	a.insert_info(3);
	a.insert_info(4);
	a.insert_info(8);
	a.insert_info(7);
	a.display_info();
	a.delete_info(4);
	a.display_info();
}
