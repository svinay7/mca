#include<iostream.h>
#include<conio.h>
#define MAX 5


int binarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;

	int mid=(start+end)/2;

	while(start<=end)
	{
		if (arr[mid]==key)
		{
			return mid;
		}

		if(key > arr[mid])
		{
			start=mid+1;
		}
		else
		{
			start=mid-1;
		}
		mid=(start+end)/2;
	}
	return 0;
}


void main()
{
  clrscr();
  int arr[MAX]={23,45,65,78,90};

  int index = binarySearch(arr,5,90);

  cout<<"Index of 90 is "<<index<<endl;


getch();

}