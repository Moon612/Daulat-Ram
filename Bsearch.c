

#include<stdio.h>
#include<conio.h>

void binary_search(int[],int,int);

int main() 
{
    int n,i,element;

    printf("\n Enter the number of elements ");
    scanf("%d",&n);
    int search[n];
    printf("\nEnter %d Elements : \n",n);
    for (i = 0; i < n ; i++)
    {
        scanf("%d", &search[i]);
    }

	printf("Enter Element to Search : ");
    scanf("%d", &element);
   

    binary_search(search,element,n);
    getch();
}

void binary_search(int fn_arr[],int element, int n) 
{
   int f = 0, r = n-1 ,mid;
   
   while (f <= r) 
   {
	  mid = (f+r)/2;

	  if (fn_arr[mid] == element) {
         printf("\nSearch Element  : %d  : Found :  Position : %d.\n", element, mid+1);
         break;
	  }
      else if (fn_arr[mid] < element)
         f = mid + 1;    
      else
         r = mid - 1;
   }
   
   if (f > r)
      printf("\nSearch Element : %d  : Not Found \n", element);
}

/*OUTPUT

 Enter the number of elements 5

Enter 5 Elements :
1
3
5
7
9
Enter Element to Search : 3

Search Element  : 3  : Found :  Position : 2.

C:\Users\roshan\Desktop>b1search

 Enter the number of elements 5

Enter 5 Elements :
1
3
5
7
9
Enter Element to Search : 4

Search Element : 4  : Not Found

*/