

#include <stdio.h>
#include <stdlib.h>
int size;

int hash(int key)
{
 int i ;
 i = key%size ;
 return i;
}

//-------LINEAR PROBING-------
int rehashl(int key)
{
 int i ;
 i = (key+1)%size ;
 return i ;
}


int insertLP(int hashtable[],int key)
{
	int i;
	
	i = hash(key);	
	      while(hashtable[i]!=-1)
  		{
  			
     			 i = rehashl(i);
     			 
 		}
 			 hashtable[i]=key;
 			
 		
 		 
     
}

int searchLP(int hashtable[],int key)
{
	int j,i;
	
	i = hash(key);
	  for (j=0;j<size;j++)
	  {
  		if(hashtable[i]==key && hashtable[i]!=-1)
  		return i;
  		else
  		i=rehashl(i);
  	  }
    return 99;
     
}
void display(int hashtable[])
{
	int i;
     printf("\nThe elements in the array are: ");
     for (i=0;i<size;i++)
     {
 	 printf("\n%d",hashtable[i]);
     }
}
void main()
{
    int key,hashtable[10],i,n,s,j,op,count=0;
    
    printf ("Enter the size of the hashtable table:  ");
    scanf ("%d",&size);
    
    for (i=0;i<size;i++)
 	hashtable[i]=-1 ;

    while(1)
    {
 	 printf("\n\n1.insertLP\n2.searchLP\n3.Dislay\n4.Exit \nEnter your option: ");
 	 scanf("%d",&op);
 	switch(op)
 	{
 		case 1:printf("\n  Enter the Element to be inserted");
 			scanf ("%d",&key);
 				
 			
 			if(count<size)
 			{
 			    insertLP(hashtable,key);
 			    count++;
 			}
 			else
 			    printf ("hashtable is full");
       			break ;

   		case 2:printf("\n  Enter the Element to be searched");
 			scanf ("%d",&key);	
 			s=searchLP(hashtable,key);
 			if(s==99)
 				printf("\n  Element %d: not found",s);
 			else
  				printf("\n  Element %d: at position %d",hashtable[s],s);
    	 	
     			break ;
     		     	    		
     		case 3: display(hashtable);
     			break;
 		case 4: exit(1);
  			break;

   	 }
    }

   
}


/*OUTPUT -

Enter the size of the hashtable table:  10 


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option:  1

  Enter the Element to be inserted 99


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 1

  Enter the Element to be inserted 19


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 1

  Enter the Element to be inserted 23


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option:  1

  Enter the Element to be inserted 56


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 1

  Enter the Element to be inserted 43


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 1

  Enter the Element to be inserted 88


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 1

  Enter the Element to be inserted 57


1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 3

The elements in the array are: 
19
-1
-1
23
43
-1
56
57
88
99

1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 2 

  Enter the Element to be searched 23 

  Element 23: at position 3

1.insertLP
2.searchLP
3.Dislay
4.Exit 
Enter your option: 4

*/

