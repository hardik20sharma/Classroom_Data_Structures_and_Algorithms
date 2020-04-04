// WAP for traversal binary tree with preorder, inorder, postorder
#include<iostream>
#include<ctype.h>
using namespace std;

struct node			// Defining the node
{
	int info;
	node *left, *right;
};

node *create_new_node(int d)	// For creating new node
{
	node *n = new node;
	n->info = d;
	n->left = NULL;
	n->right = NULL;

	return n;
}

void pre_order(node *n)		// Printint information in pre-order
{
	if(n == NULL)
		return;

	cout << n->info << "->";	// Root
	pre_order(n->left);			// Left
	pre_order(n->right);		// Right
}

void in_order(node *n)		// Printing information in in-order
{
	if(n == NULL)
		return;

	in_order(n->left);			// Left
	cout << n->info << "->";	// Root
	in_order(n->right);			// Right
}

void post_order(node *n)	// Printing information in post-order
{
	if(n==NULL)
		return;

	post_order(n->left);		// Left
	post_order(n->right);		// Right
	cout << n->info << "->";	// Root
}

int main()
{
	node *root = create_new_node(5);
	root->left = create_new_node(1);
	root->right = create_new_node(8);
	root->left->left = create_new_node(3);
	root->left->right = create_new_node(4);

	char ch = 0;
	flag:
	cout << "\n======================";
	cout << "\n1. Display in Pre Order";
	cout << "\n2. Display in In Order";
	cout << "\n3. Display in Post Order";
	cout << "\n4. Exit";
	cout << "\nEnter your choice: "; cin >> ch;
	
	if(isalpha(ch))
		{ cout << "\nPlease enter a digit !!"; goto flag; }
	cout << "\n======================";
		
	switch(ch)
	{
		case '1':
			cout << "\nPre-Order: "; pre_order(root); cout << "END";
			goto flag;
			
		case '2':
			cout << "\nIn-Order: "; in_order(root); cout << "END";
			goto flag;
			
		case '3':
			cout << "\nPost-Order: "; post_order(root); cout << "END";
			goto flag;
		
		case '4':
			exit(0);
		
		default:
			cout << "\nWrong Choice !!";
			goto flag;
	}
}

/*
	The tree looks like
			5
		   / \
		  1   8
		 / \
		3  4
*/
