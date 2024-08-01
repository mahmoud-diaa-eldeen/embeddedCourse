#include<stdio.h>
main()
{
	int s,i;
	char x,c[100];
	printf("Enter a string: ");
	gets(c);
	printf("Enter a character to find ferquency: ");
	scanf("%c",&x);
	for(i=0;i<sizeof(c);i++)
	if(c[i]==x)
	s++;
	printf("%d",s);
}
