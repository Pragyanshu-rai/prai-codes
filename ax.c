#include<stdio.h>
#include<string.h>
int main()
{
	//int x=0;
	char pw[30];
	scanf("%s",&pw);
	printf("%s",pw);
		
	if(strcmp(pw,"come")==0)
		printf("\nYou are in :)\n");
	else
		printf("\nYou are not in!!!\n");
	return 0;
}
