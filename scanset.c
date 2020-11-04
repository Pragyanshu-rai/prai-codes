#include<stdio.h>
void main()
{
	char a[30];
	printf("Enter Your Full Name\n->");
	scanf("%[^\n]s",a);/*"%[]" -> scanset means only anything in the scanset will be read, but if the character in the scanset is following the character " ^ " then it stops reading after the first occurence of the character (gets() is dangerous because it can be easy to use break the system by using buffovr) 
	and %*c means that character will only be read but not stored (printf() & scanf() returns the number of arguments & the number of data assigned respectively) */  
	printf("\nYour Name Is %s\n",a);
}
