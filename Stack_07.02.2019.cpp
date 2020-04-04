#include<iostream>
using namespace std;

class Stack
{
private:
	int top;

public:
	int array[10];
	Stack()				// Default constructor, intially top will be -1
		{ top = -1; }
	
	void isEmpty();		// Function to know if stack is empty or not
	void push(int info);	// For inserting data
	void pop();		// For removing data
	void check();	// For checking is stack is full or not
};

void Stack :: isEmpty()
{
	if(top < 0)
		cout << "Stack is Empty\n";
	else
		cout << "Stack is not Empty\n";
}
 
void Stack :: push(int info)
{
	array[++top] = info;
	cout << "Insertion of " << info << " is completed.\n";
}

void Stack :: pop()
{
	int data = array[top--];
	cout << "Deletion of " << data << " is completed.\n";
}

void Stack :: check()
{
	if(top >= 10)
		cout << "OVERFLOW !!\n";
	else
		cout << "Stack is not full.\n";
}

int main()
{
	Stack s;
	s.push(2);
	s.push(5);
	s.push(6);
	s.pop();
	
	return 0;
}
