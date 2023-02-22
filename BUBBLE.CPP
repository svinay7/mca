#include<iostream.h>
#include<conio.h>
#define MAX 4

class clsbubble
{
     int a[MAX];

     void display()
     {
	for(int i=0;i<MAX;i++)
	{
	cout<<a[i]<<"\t";
	}
     }

     public:
     void input_data()
     {
     cout<<"\n Enter the Elements :";
	for(int i=0;i<MAX;i++)
	{
	cout<<"\n Enter the values :\n";
	cin>>a[i];

	}
	cout<<"\n Before Sorting :\n\n";
	display();
     }
     void bubble_sort()
     {
	for(int curdata=0;curdata<(MAX-1);curdata++)
	{
		for(int nextdata=0;nextdata<(MAX-1)-curdata;nextdata++)
		{
			if(a[nextdata]>a[nextdata+1])
			{
			    int temp=a[nextdata];
			    a[nextdata]=a[nextdata+1];
			    a[nextdata+1]=temp;

			}
		}
		cout<<"\nAfter Iteration :\n";
		display();
	}
	 cout<<"\nValues After Sort :\n";
	 display();
     }
};
void main()
{
	clrscr();
	clsbubble b;
	b.input_data();
	b.bubble_sort();
	getch();
}
