// WAP to copy one string into another string without using standard library functions
#include<iostream>
using namespace std;

int main()
{
	char str1[30], str2[30];
	int len1=0;
	cout<<"Enter the string 1: "; fflush(stdin); gets(str1);
	
	while(str1[len1]!='\0')
		len1++;
	
	for(int i=0; i<len1; i++)
		str2[i] = str1[i];
		
	str2[len1]='\0';
	
	cout<<"String 1 is: "; fflush(stdout); puts(str1);
	cout<<"String 2 is: "; fflush(stdout); puts(str2);
} 
