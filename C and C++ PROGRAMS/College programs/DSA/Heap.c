#include<stdio.h>
#include<stdlib.h>
/*using the bottom up approach to make a max heap there will be n/2 parents. 
The parents are each compared with their children until all parents are larger than both right and left children.*/
void heapify(int *a, int n)
{
	int i,k,j,v,flag;
	for(i=(n/2);i>=1;i--)
	{	
		k = i;
		v = a[k];
		flag = 0;
		while(!flag && (2*k)<=n)
		{
			j = 2*k;
			if(j<n)
			{
				if(a[j] < a[j+1])
				{
					j = j+1;
				}
			}
			if(v >= a[j])
			{
				flag = 1;
			}
			else
			{
				a[k] = a[j];
				k = j;
			}
		}
		a[k] = v;
	}
}

int main()
{
	int i,n,ch,a[10];
	for(;;)
	{
		printf("\n1.CREATE HEAP");
		printf("\n2.DELETE");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nREAD CHOICE: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nRead Number of Elements: ");
				scanf("%d",&n);
				printf("\nREAD elements: ");
				for(i=1;i<=n;i++)
				{
					scanf("%d",&a[i]);
				}
				heapify(a,n);
				printf("\nElements after HEAP: \n");
				for(i=1;i<=n;i++)
				{
					printf("%d\t",a[i]);
				}
				printf("\n");
				break;
			case 2:
				if(n>=1)
				{
					printf("\nElement Deleted: %d",a[1]);
					a[1] = a[n];
					n--;
					heapify(a,n);
					printf("\nElements in HEAP after DELETION: \n");
					for(i=1;i<=n;i++)
					{
						printf("%d\t",a[i]);
					}
				}
				else
				{
					printf("\nNo element for DELETION!!\n");
				}
				printf("\n");
				break;
			case 3:
				printf("\nElements in PRIORITY QUEUE: \n");
				for(i=1;i<=n;i++)
				{
					printf("%d\t",a[i]);
				}
				printf("\n");
				break;
			default: exit(0);
		}
	}
	return 0;
}

/*
Observation:
In this program , we make use of bottom up approach to make a max heap, to implement a priority queue. We know that if there are n elements
then there are n/2 parent nodes. We start a loop at n/2 position and go down to 0. We compare each parent with its child nodes and replace it with whichever is bigger than 
the parent node. We repeat the process until each parent is bigger than both its children. The heap has been constructed. 
For deletion , we remove the root node (which is the largest as this is max heap), the last child node becomes the root and the heapification process is performed again.
The display function displays the elements as they are in the priority queue.
*/