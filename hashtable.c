#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node *add_first(int*);
int main()
{
struct node *head=NULL;
int choice;
while(1)
{
	printf("\n 0.exit\n1.insert a new node in start of hash list\n2. insert a new node at middle of hash list\n3.insert a middle at beginning of hash list\n4.reorder/sort list in 			hash list5.replace a node at middle ( delete existing node add new at same place) of hash list\n6.insert node in ascending order in to hash list\n7.insert node in dec			ending order in the has list\n8.Display\n");
	printf("enter a choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 0:exit(0);
		case 1:head=add_first(head);
			break;
		case 8:display

	}
}
}
struct node *add_first
