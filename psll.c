#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int data;
	int *next;
};

struct node *create (struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("\nEnter the data");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node ));
		new_node ->data= num;
		if(start==NULL)
		{
			start=new_node;
			new_node ->next=NULL;
		}
		else
		{
			ptr=start;
			while(ptr!=NULL)
				ptr= ptr->next;
			ptr->next=new_node;
			new_node->next=NULL;
		}
		int n;
		printf("\n 1.ADD ONE MORE \n 2.STOP ");
		switch (n)
		{
			case 1:
				printf("\nEnter the data");
				scanf("%d",&num);
				break;

			case 2:
				num=-1;

			default:
				printf("\n Invalid choice ");	
		}
	}
	return start;
}

struct node *addb(struct node *start)
{
	struct node *new_node,*ptr,*preptr;
	int num,data;
	printf("\n Enter the number before which you want to add new node ");
	scanf("%d",&num);
	ptr=start;
	while(ptr->data!=num)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	new_node->next=preptr;
	preptr->next=new_node;
	printf("\n Enter the number you want to add ");
	scanf("%d",&data);
	new_node->data=data;
	return start;
}

struct node *adda(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num,data;
	printf("\n Enter the number after which you want to add new node ");
	scanf("%d",&num);
	ptr=start;
	while(ptr->data!=num)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	new_node->next=ptr->next;
	ptr->next=new_node;
	printf("\n Enter the number you want to add ");
	scanf("%d"&data);
	new_node->data=data;
	return start;
}

struct node *adds(struct node *start)
{
	struct node *new_node;
	int data;
	printf("\n Enter the number you want to add ");
	scanf("%d",&data);
	new_node->data=data;
	new_node->next=start;
	start=new_node;
	return start;
}

struct node *adde(struct node *start)
{
	struct node *new_node,*ptr;
	int data;
	ptr=start;
	while(ptr!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	printf("\n Enter the number you want to add ");
	scanf("%d",&data);
	new_node->data=data;
	new_node->next=NULL;
	return start;
}

struct node *dela(struct node *start)
{
	struct node *ptr,*posptr;
	int num;
	printf("\n Enter the number after which you want to delete node ");
	scanf("%d",&num);
	ptr=start;
	while(ptr->data!=num)
	{
		ptr=ptr->next;
		posptr=ptr->next;
	}
	posptr=posptr->next;
	ptr->next=posptr;
	return start;
}

struct node *delb(struct node *start)
{
	struct node *ptr,*preptr;
	int num;
	printf("\n Enter the number before which you want to delete node ");
	scanf("%d",&num);
	ptr=start;
	while(ptr->data!=num)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr;
	return start;
}

struct node *dels(struct node *start)
{
	struct node *ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}

struct node *dele(struct node *start)
{
	struct node *ptr,*preptr;
	ptr=start;
	while(ptr!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	return start;
}

struct node *delc(struct node *start)
{
	struct node *ptr;
	while(start!=NULL)
	{
		printf("\n %d is deleted from the list ");
		start=dels(ptr);
		ptr=start;
	}
}

struct node *display(struct node *start)
{
	struct node *ptr;
	printf("\n Element in the list are ...");
	while(ptr->next!=NULL)
	{
		printf("\n %d",ptr->data);
		ptr=ptr->next;
	}
}

struct node *sort(struct node *start)
{
	struct node *ptr1,*ptr2;
	int temp;
	ptr1=start;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1->next;
		while(ptr2->next!=NULL)
		{
			if(ptr1->data > ptr2->data)
			{
				temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	return start;
}

struct node *serach(struct node *start)
{
	struct node *ptr;
	int data;
	printf("\n Enter the number is to be search ");
	scanf("%d",&data);
	ptr=start;
	while(ptr->next!=NULL)
	{
		if(ptr->data==data)
		{
			printf("\n Entered number is present in the list ");
			return;
		}
		ptr=ptr->next;
	}
	printf("\n Entered number is not present in the list ");
}

void main()
{
	int n;
	struct node *start;
	do
	{
	printf("\n************** MAIN MENU ***************");
	printf("\n 1.CREATE A LIST \n 2.ADD NODE BEFORE \n 3.ADD NODE AFTER \n 4.ADD NODE AT BEGINING \n 5.ADD NODE AT END \n 6.DELETE NODE AFTER \n 7.DELETE NODE BEFORE \n 8.DELETE NODE AT BEGINING \n 9.DELETE NODE AT END \n 10.DELETE COMPLETE LIST \n 11.SORT THE LIST \n 12.DISPLAY \n 13.SEARCH \n 14.EXIT\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			start=create(start);
			break;

		case 2:
			start=addb(start);
			break;

		case 3:
			start=adda(start);
			break;

		case 4:
			start=adds(start);
			break;

		case 5:
			start=adde(start);
			break;

		case 6:
			start=dela(start);
			break;

		case 7:
			start=delb(start);
			break;

		case 8:
			start=dels(start);
			break;

		case 9:
			start=dele(start);
			break;

		case 10:
			start=delc(start);

		case 11:
			display(start);
			break;

		case 12:
			sort(start);
			break;

		case 13:
			search(start);
			break;

		case 14:
			break;

		default:
			printf("\n Invalid choice ");
			break;
	}
	}while(n!=14);
}