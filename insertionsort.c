

#include<stdio.h>
void insertion(int [],int);
void main()
{
	int i,n,arr[50];
	printf("\n Enter the size of array");
	scanf("%d",&n);
	printf("\n Enter the elements of array");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion(arr,n);
	
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}


	
}
void insertion(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}


/*OUTPUT -
Enter the size of array10

 Enter the elements of array12 98 09 45 34 76 1 99 36 72
1       9       12      34      36      45      72      76      98      99
*/