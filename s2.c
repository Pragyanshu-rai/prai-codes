#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=2,*p,i;
	p=(int *)calloc(n,sizeof(int));
	p[0]=2;
	p[1]=3;
	for(i=0;i<n;i++)
		printf("The value p[%d] = %d\n",i,p[i]);
	return 0;
}
