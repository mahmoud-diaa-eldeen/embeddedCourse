#include<stdio.h>
main()
{
	int x;
	float s=0,m=0;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf ("%d",&x);
	for(int i=0;i<x;i++)
	{
	scanf("%f",&m);
	s+=m;	
	}
	printf("%f",s/x);
}
