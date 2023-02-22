#include<iostream.h>
#include<conio.h>
#define MAX 4

class classselectionsort
{
	int a[MAX];


	public:
		void inputdata()
		{

			cout<<"\nEnter your "<<MAX<<" Elements : ";
			for(int i=0;i<MAX;i++)
			{
			cout<<"\nEnter Element "<<i+1<<" : "<<endl;
			cin>>a[i];
			}
			cout<<"\nValues before selection sort : \n\n";
			display();
		}
		void display()
		{
			for(int i=0;i<MAX;i++)
			{
				cout<<a[i]<<"\t";
			}

		}
		void selection_sort()
		{
			for(int curdata=0;curdata<(MAX-1);curdata++)
			{
				for(int nextdata=(curdata+1);nextdata<MAX;nextdata++)
				{
					if(a[curdata]>a[nextdata])
					{
						int temp=a[curdata];
						a[curdata]=a[nextdata];
						a[nextdata]=temp;
					}
				}
				cout<<"\nAfter Iteration : "<<curdata+1<<endl;
				display();
			}
			cout<<"\n\nValues after Sorting : \n";
			display();
		}

};

void main()
{

	clrscr();
	classselectionsort s;
	s.inputdata();
	s.selection_sort();
	getch();
}




