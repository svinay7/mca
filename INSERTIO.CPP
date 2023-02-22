#include<iostream.h>
#include<conio.h>
#define MAX 4

class clsinsertion
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
    void inputData()
    {
    cout<<"\n Enter the Elements";
      for(int i=0;i<MAX;i++)
      {
      cout<<"\n Enter Data";
      cin>>a[i];
      }
      cout<<"\nThe Elements are:";
      display();
    }

    void insertion_sort()
    {
	int temp;
	cout<<"\n Values after selection sorting ";
		for(int curdata=1;curdata<MAX;curdata++)
		{
		    for(int prevdata=curdata;prevdata>0;prevdata--)
		    {
			if(a[prevdata-1]>a[prevdata])
			{
			temp=a[prevdata];
			a[prevdata]=a[prevdata-1];
			a[prevdata-1]=temp;
			}
		    }
			cout<<"\n\n After iteration :"<<curdata<<"\n";
			display();
		}
			cout<<"\n After sorting: \n";
			display();
    }
};
void main()
{
	clrscr();
	clsinsertion i;
	i.inputData();
	i.insertion_sort();

	getch();
}