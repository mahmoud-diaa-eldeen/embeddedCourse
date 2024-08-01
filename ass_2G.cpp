O#include<stdio.h>
#include<bits/stdc++.h>
main ()
{
	int i;
	char c[100];
	printf("Enter the string: ");
	gets(c);
		printf("Reverse string is : ");
	for(i=strlen(c)-1;i>=0;i--)
	printf("%c",c[i]);
}
