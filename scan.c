#include<stdio.h>
#include<string.h>
void main()
{
	char c[30],a[30];
	printf("Enter the string\n");
	gets(c);
	printf("\n%s\n",c);
	printf("What is your Name?\n->");
	scanf("%*s %*s %*s %s",a);
	printf("\nSo your name is %s",a);
}
