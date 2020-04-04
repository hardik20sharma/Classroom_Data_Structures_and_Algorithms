#include<iostream>
using namespace std;

class Stack
{
private:
	int top;
	int array[10];

public:
	Stack()
		{ top = -1; }
	void push(int info);
	void pop();
	void isEmpty();
	void check();
};

void Stack :: isEmpty()
{
	if(top < 0)
		cout << "The stack is Empty !!\n";
	else
		cout << "Stack is not empty\n";
}

void Stack :: check()
{
	if(top > 10)
		cout << "OVERFLOW\n";
	else
		cout << "Stack has some space left\n";
}

void Stack :: push(int info)
{
	array[++top] = info;
	cout << "Insertion of " << info << " is completed.\n";
}

void Stack :: pop()
{
	int data = array[top--];
	cout << "Stack is not full.\n";
}

int main()
{
	cout << "----------------\n";
	cout << "1. Insert Data\n";
	cout << "2. Display Data\n";
	cout << "3. Delete Data\n";
	cout << "4. Exit.\n";
	cout << "----------------\n";	
}
