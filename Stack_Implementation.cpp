#include<iostream>
using namespace std;

class Stack
{
private:
	int top;
	int array[100];
	
public:
	long int sum;
	Stack() : top(-1), sum(0) { }

	void show()
	{
		cout << sum;
	}

	void push(int inf)
	{
		if(top == 100)
			cout << "OVERFLOW\n";
		else
		{	
			array[top] = inf;
			sum += inf;
			top++;
		}
	}
	
	void pop()
	{
		sum -= array[top];
		top--;
	}
};

int main()
{
	Stack s1, s2, s3;
	int s1_len, s2_len, s3_len, info;
	
	// Inputing the three stacks
	cin >> s1_len >> s2_len >> s3_len;
	for(int i=0; i<s1_len; i++)
	{
		cin >> info;
		s1.push(info);
	}
	for(int i=0; i<s2_len; i++)
	{
		cin >> info;
		s2.push(info);
	}
	for(int i=0; i<s3_len; i++)
	{
		cin >> info;
		s3.push(info);
	}
	
	while( (s1.sum == s2.sum) && (s2.sum == s3.sum) )	
	{
		if(s1.sum > s3.sum || s1.sum > s2.sum)
			s1.pop();
		if(s2.sum > s3.sum || s2.sum > s1.sum)
			s2.pop();
		if(s3.sum > s1.sum || s3.sum > s2.sum)
			s3.pop();
	}
	cout << s1.sum;
}
