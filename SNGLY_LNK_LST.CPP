#include<iostream>
using namespace std;
#include<malloc.h>
#include<stdio.h>
#include<conio.h>


struct link
{
	int info;
	struct link *next;
};

struct link *node,*previous,*new1;
int node_counts=0;

class clssingle
{
	public:
	void create_linked_list(struct link *header)
	{
		header->next=NULL;
		node=header;
		char chr=' ';
	while(chr != 'n')
	{
		node->next=(struct link*)malloc(sizeof(struct link));
		node = node->next;
		}	
	}
	void display_linked_list(struct link *start)
	{
	
	}
	
	void insert_at_beg(struct link *header)
	{
		node=header->next;
		previous=header;
		new1=(struct link*)malloc(sizeof(struct link));
		node_counts++;
		new1->next=node;
		previous->next=new1;
		cout<<"\n Enter the vlaue to be inserted : ";
		cin>>new1->info;
		cout<<"\nNo of nodes in the list : ";
	}
	
	void insert_at_end(struct link *header)
	{
		node=header->next;
		previous = header;
		while(node){
			node=node->next;
			previous=previous->next;
		}
		if(node == NULL) {
			new1=(struct link*)malloc(sizeof(struct link));
			node_counts++;
			previous->next=new1;
			new1->next=node;
			cout<<"\nEnter the no. to be inserted : ";
			cin>>new1->info;
		}
		cout<<"\nNo of node in the list : "<<node_counts;
	}
	void insert_in_the_middle(struct link *header)
	{
	}
	void delete_first_node(struct link *header)
	{
	
	}
	void delete_last_node(struct link *header)
	{
	
	}
	void delete_desired_node(struct link *header)
	{
	}
};

int main()
{
	struct link header;
	clssingle l;
	int choice;

	do{	
		cout<<"\n 1. Create Linked List";
		cout<<"\n 2. Insert at beginning of the list";
		cout<<"\n 3. Insert at the end of the list";
		cout<<"\n 4. Insert in the middle of the list";
		cout<<"\n 5. Delete the first node in the list";
		cout<<"\n 6. Delete the last node in the list";
		cout<<"\n 7. Delete the desired node";
		cout<<"\n 8. Display Linked List";
		cout<<"\n 9. Exit";
		cout<<"\n Enter choice";
		cin>>choice;
		
		switch(choice){
			case 1:
				l.create_linked_list(&header);
				break;
			case 2:
				l.insert_at_beg(&header);
				break;
			case 3:
				l.insert_at_end(&header);
				break;
			case 4:
				l.insert_in_the_middle(&header);
				break;
			case 5:
				l.delete_first_node(&header);
				break;
			case 6:
				l.delete_last_node(&header);
				break;
			case 7:
				l.delete_desired_node(&header);
				break;
			case 8:
				l.display_linked_list(&header);
				break;
			case 9:
				cout<<("\n END OF PROGRAM");
		}
	}
	while (choice!=9);
	getch();


	return 0;
}
