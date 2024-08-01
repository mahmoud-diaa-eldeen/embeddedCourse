#include<stdio.h>
 main()
{int x,y;
	printf("Enter rows and column of matrix: ");
	fflush(stdin); fflush (stdout);
	scanf("%d%d",&x,&y);
	int a[x][y];
		printf("Enter elements of  matrix\n");
		for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Enterd matrix: \n");
		for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("Transpose of matrix: \n");
		for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}}
