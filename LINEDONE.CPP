#include<iostream.h>
#include<conio.h>
#define MAX 7

void main()
{
clrscr();
int flag=0;
int arr[MAX]={34,56,23,76,23,65,12};
for(int i=0;i<MAX;i++)
{

	if(arr[i]==56)
	{
		cout<<"Array found at index : "<<i;
		flag=1;
	}
}
	if(flag==0)
	{
		cout<<"Array not found";
	}


getch();
}