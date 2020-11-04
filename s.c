#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,s=0,*p,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<n;i++)
		s+=*(p+i);
	printf("The sum of all the elements is %d\n",s);
	free(p);
	return 0;
}
