// WAP to merge two strings in a single string without using standard in-built header files
#include<iostream>
using namespace std;

int main()
{
	char str1[30], str2[10];
	int len1=0, len2=0;
	cout<<"Enter the string 1: "; fflush(stdin); gets(str1);
	cout<<"Enter the string 2: "; fflush(stdin); gets(str2);
	
	while(str1[len1]!='\0')
		len1++;
	while(str2[len2]!='\0')
		len2++;
	
	for(int i=0; i<len2; i++)
		str1[i+len1] = str2[i];

	str1[len1+len2]='\0';
	
	cout<<"String 1 is: "; fflush(stdout); puts(str1);
	cout<<"String 2 is: "; fflush(stdout); puts(str2);
} 
