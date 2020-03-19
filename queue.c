
#include <stdio.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;

int full()
{
    if(rear==size-1)
    {
        return  1;
    }
    else
    {
        return 0;
    }
}

int empty()
{
	if(front=rear==-1 || front>rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push()
{
    int val;
    if(full())
        printf("\n  Queue is full ");
    else
    {
        if(front=rear==-1)
            front=rear=0;
        printf("\n Enter the interger to be inserted :  ");
        scanf("%d",&val);
        queue[rear]=val;
        rear++;
    }
}

void pop()
{
    int val;
    if(empty())
        printf("\n Queue is empty");
    else
    {
        val=queue[front];
        printf("\n %d is deleted form the queue",val);
        
    
    }
}

void peek()
{
    int val;
    if(empty())
        printf("\n Queue is empty");
    else
    {
        if(front<=rear)
        {
            val=queue[front];
            printf("\n %d is the top most value in the queue",val);
        }
        front=front+1;
        printf("%d",front );
        if(front>rear)
           	front=rear=-1;
    }
}

void display()
{
    int i;
    if(empty())
    	printf("\n QUEUE IS EMPTY ");
    for(i=front; i<rear; i++)
    {
        printf("%d",queue[i]);
        printf("\n");
    }
}
int main()
{
    int option;
    do {
        printf("\n******************* MAIN MENU *****************\n");
        printf("\n 1.INSERT \n 2.DELETE \n 3.PEEK \n 4.DISPLAY \n 5.EXIT \n");
        printf("\n Enter your choice option number : ");
        scanf("%d", &option);
        switch (option) 
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                front=front+1;
        		printf("%d",front );
        		if(front>rear)
           			front=rear=-1;
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
        }
    }while (option!=5);
}

/* OUTPUT
******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 1

 Enter the interger to be inserted :  3

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 1

 Enter the interger to be inserted :  5

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 1

 Enter the interger to be inserted :  7

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 1

 Enter the interger to be inserted :  9

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 1

 Enter the interger to be inserted :  8

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 1

  Queue is full
******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 4
3
5
7
9
8

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 2

 3 is deleted form the queue
******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 2

 5 is deleted form the queue
******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 3

 7 is the top most value in the queue1
******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 4
7
9
8

******************* MAIN MENU *****************

 1.INSERT
 2.DELETE
 3.PEEK
 4.DISPLAY
 5.EXIT

 Enter your choice option number : 5
 */