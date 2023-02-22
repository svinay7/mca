#include<iostream.h>
#include<conio.h>
#define MAX 3

struct queue
{
  int arr[MAX];
  int front;
  int rear;
};

class clsqueue
{

  public:
  void init_queue(struct queue *q)
  {
  q->front=-1;
  q->rear=-1;
  for(int i=0;i<MAX;i++)
  {
   q->arr[i]=0;
  }
  }

  void display_queue(struct queue *q)
  {
  cout<<"\n Queue content";

  for(int i=0;i<MAX;i++)
  {
  cout<<q->arr[i]<<"\t";
  }
  }
  void enqueue(struct queue *q,int x)
  {
    if(q->rear == MAX-1)
    {
    cout<<"\n queue is full";
    return;
    }
    q->rear++;
    q->arr[q->rear]=x;
    if(q->front == -1)
    {
    q->front++;
    }
  }
  int dequeue(struct queue *q)
  {
  int data =0;
  if(q->front == -1)
  {
  cout<<"\nQueue is empty";
  return -999;
  }
    data =q->arr[q->front];
    cout<<data;
    q->arr[q->front]= 0;
    if(q->front == q->rear)
    {
    q->front = -1;
    q->rear = -1;
    }
    else
    {
    q->front++;
    }
    return data;

}
void queue_front(struct queue *q)
{
	if(q->front == -1)
	cout<<"\nQueue is empty";
	else
	cout<<q->arr[q->front];
}
void queue_rear(struct queue *q)
{
	if(q->rear == -1)
	cout<<"\nQueue is empty";
	else
	cout<<q->arr[q->rear];
}
};

void main()
{
  struct queue q;
  clsqueue qobj;
  clrscr();
  qobj.init_queue(&q);
  int num;
  int choice;

  do{
   cout<<"\n 1.Enter data into the queue:";
   cout<<"\n 2.Delete data from the queue:";
   cout<<"\n 3.Display data in the frontend of the queue:";
   cout<<"\n 4.Display data in the rearend of the queue:";
   cout<<"\n 5.Display queue:";
   cout<<"\n 6.Exit the program:";
     cout<<"\n Enter Choice";
  cin>>choice;
  switch(choice)
  {
	case 1:

	 cout<<"\n Enter the Number";
	 cin>>num;
	 qobj.enqueue(&q,num);
	     break;
	case 2:
	int result = qobj.dequeue(&q);
	if(result == -999)
	cout<<"\n queue is empty";
	else
	cout<<"\n Element removed"<<result;
	     break;
	case 3:
		qobj.queue_front(&q);
	     break;
	case 4:
		qobj.queue_rear(&q);
	     break;
	case 5:
		qobj.display_queue(&q);
	     break;
	case 6:
	      cout<<"\n End of Program";
	     break;
      }
  }
  while(choice!=6);
  getch();
}