// WAP to display fibonacci series as well as insert in an array
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter the number of elements: "; cin >> num;
	
	int array[num], pos1 = 0, pos2 = 1, pos3;
	for (int i = 1; i <= num; i++)
    {
        
        if(i == 1)
        {
            array[i-1] = pos1;
            continue;
        }
        if(i == 2)
        {
        	array[i-1] = pos2;
            continue;
        }
        
        pos3 = pos1 + pos2;
        pos1 = pos2;
        pos2 = pos3;

        array[i-1] = pos3;
    }
    
	for(int i=0; i<num; i++)
		cout << array[i] << " ";
}
