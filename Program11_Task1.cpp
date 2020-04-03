// WAP to check string is palindrome or not using array
#include<iostream>
#include<string.h>
using namespace std;

bool Check_Palindrome(char str[30])
{
	int n=strlen(str);
	for(int i=0; i<n/2; i++)
		if(str[i]!=str[n-i-1])
			return false;
	
	return true;		
}

int main()
{
	char str[30];
	cout<<"Enter the string: "; fflush(stdin); gets(str);
	if(Check_Palindrome(str))
		cout<<"Palindrome\n";
	else
		cout<<"Not a Palindrome\n";
}
