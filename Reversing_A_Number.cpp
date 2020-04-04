// Reversing a number, for eg 1234, then it will be 4321
#include<iostream>
using namespace std;

int main()
{
	int a,s=0;
	cin >> a;
	while(a>0)
	{
		s=s*10+a%10;
		a/=10;
	}
	cout << s;
}
