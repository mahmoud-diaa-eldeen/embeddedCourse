#include<stdio.h>
main()
{
	int x,y;
	printf("Enter no of elements: ");
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++)
	scanf("%d",&a[i]);
	printf("Enter the element to be searched: ");
	scanf("%d",&y);
	for(int i=0;i<x;i++)
	if(a[i]==y)
	printf("number found at the location = %d",i);
}
