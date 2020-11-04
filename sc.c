#include<stdio.h>
void main()
{
	char ch[20];
	printf("Enter the string\n->");
	scanf("%[^\n]s",ch);
	printf("The entered string is %s\n",ch);
}
