

    


#include<stdio.h>
#include<process.h>
#include<stdlib.h>

#define MAX 5

int top=-1,stack[MAX];
void push();
void pop();
void display();
void peek();

void main()
{
	int ch;

	do
	{
		printf("\n******************** MAIN MENU ************************\n");
		printf("\n1.Push\n2.Pop\n3.Display\n4.peek\n5.Exit");
		printf("\n\nEnter your choice(1-5):");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: peek();
					break;
		}
	}while(ch!=5);
}

void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}

void peek()
{
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\n top value is %d",stack[top]);
	}
}

/*OUTPUT

******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):1

Enter element to push:5

******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):1

Enter element to push:10

******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):1

Enter element to push:15

******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):1

Enter element to push:20

******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):2

Deleted element is 20
******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):4

 top value is 15
******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):3

Stack is...
15
10
5

******************** MAIN MENU ************************

1.Push
2.Pop
3.Display
4.peek
5.Exit

Enter your choice(1-5):5
*/