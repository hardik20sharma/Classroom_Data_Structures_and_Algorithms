// WAP to search element in binary tree
#include<iostream>
using namespace std;

struct node
{
	int info;
	node *left, *right;
} *root;

node *newnode(int d)
{
	node *n = new node;
	n->left = NULL;
	n->right = NULL;
	n->info = d;
}

void in_order(node *n)		// Printing information in in-order
{
	if(n == NULL)
		return;

	in_order(n->left);			// Left
	cout << n->info << "->";	// Root
	in_order(n->right);			// Right
}

void search_info(int d)
{
	node *temp = new node;
	temp = root;
	while(temp != NULL)
	{
		if(temp->info == d)
			{ cout << "Infomartion Found !"; return; }
		
		else if(temp->info > d)
			temp = temp->left;
		
		else
			temp = temp->right;
	}
	cout << "Data not found !";
	return;
}

int main()
{
	int num = 0;
	root = newnode(5);
	root->left = newnode(3);
	root->left->left = newnode(1);
	root->left->right = newnode(4);
	
	root->right = newnode(7);
	root->right->left = newnode(6);
	root->right->right = newnode(8);
	
	cout << "Enter the number to search: "; cin >> num;
	search_info(num);
	
	cout << "\nPrinting the tree in In-Order: "; in_order(root); cout << "END";
}
