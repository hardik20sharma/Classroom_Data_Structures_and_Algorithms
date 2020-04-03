// WAP to reverse a string as well as copy into another string without using library functions
#include<iostream>
using namespace std;

int main()
{
	char str1[20], str2[20], ch;
	int len=0;
	cout<<"Enter the string: "; fflush(stdin); gets(str1);
	
	while(str1[len]!='\0')
		len++;
	
	for(int i=0; i<len/2; i++)
	{
		ch = str1[i];
		str1[i] = str1[len-i-1];
		str1[len-i-1] = ch;
	}
	
	cout<<"String on reversing is: "; fflush(stdout); puts(str1);
	
	for(int i=0; i<len; i++)
		str2[i]=str1[i];
	
	cout<<"String 2: "; fflush(stdout); puts(str2);	
}
