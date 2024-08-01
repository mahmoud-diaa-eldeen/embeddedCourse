#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter number of elements: ");
	scanf("%d",&x);
		int a[x];
			for(int i=0;i<x;i++)
			{
			scanf("%d",&a[i]);
			}
			
	printf("Enter the element to be inserted: ");
		scanf("%d",&y);
		
	printf("Enter the location: ");
		scanf("%d",&z);
		
	for(int i=0;i<x;i++)
	{
		if(i+1==z)
		printf("%d ",y);
		
		printf("%d ",a[i]);
	}
	
	
}
