#include<iostream.h>
#include<conio.h>
#define ARR 5
struct stack
{
  int a[ARR];
  int top;
};

class stackarr
{
  public:

  void init_stack(struct stack *s)
  {
    s->top = -1;
  }

  void displaystack(struct stack *s)
  {
    cout<<"Stack Content: ";
    for(int i=0; i<=s->top; i++)
    {
      cout<<s->a[i]<<"\t";
    }
  }

  void push(struct stack *s, int x)
  {
    if(s->top == ARR - 1)
    {
      cout<<"Stack is full";
    }
    s->top = s->top + 1;
    s->a[s->top] = x;
  }

  int pop(struct stack *s)
  {
    int data;
    if(s->top == -1)
    {
      return -999;
    }
    data = s->a[s->top];
    s->top = s->top - 1;
    return data;
  }

  int peep(struct stack *s)
  {
    int data1;
    if(s->top == -1)
    {
      return -999;
    }
    data1 = s->a[s->top];
    return data1;
  }
};

void main()
{
  stackarr s1;
  struct stack s;
  int no;
  int choice = 0;
  clrscr();
  s1.init_stack(&s);
  do
  {
    cout<<"\n1. Push Data";
    cout<<"\n2. Pop Data";
    cout<<"\n3. Peep Data";
    cout<<"\n4. Display Stack";
    cout<<"\n5. Exit";
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
      case 1:
	cout<<"\nEnter the number:";
	cin>>no;
	s1.push(&s, no);
	break;
      case 2:
	int ans;
	ans = s1.pop(&s);
	if(ans == -999)
	  cout<<"\nStack is empty";
	else
	  cout<<"\nThe number popped:"<<ans;
	break;
      case 3:
	int ans1;
	ans1 = s1.peep(&s);
	if(ans1 == -999)
	  cout<<"\nStack is empty";
	else
	  cout<<"The top element is:"<<ans1;
	break;
      case 4:
	s1.displaystack(&s);
	break;
      case 5:
	cout<<"\nEND OF PROGRAM";
	break;
    }
  }
  while(choice != 5);
}