#include<stdio.h>
#include<stdlib.h>
extern char **environ;
void envtest();
void envtest2()
{
	for(int i=0;environ[i]!=NULL;i++)
	{
		printf("%d: %s\n",i,environ[i]);
	}
}
void main(int a, char *ch[],char *e[])//the third argument is for the environment variables,**var and *var[] are same
{
	for(int i=0;e[i]!=NULL;i++)
	{
		printf("%d: %s\n",i,e[i]);
	}
	printf("\nCalling envtest()\n");
	envtest();
	printf("\nCalling envtest2()\n");
	envtest2();
}
void envtest()
{
	char *v;
	v = getenv("HOME");
	printf("HOME = %s\n",v);
	v = getenv("USER");
	printf("USER = %s\n",v);
	v = getenv("PASSWORD");
	printf("PASSWORD = %s\n",v);
}
