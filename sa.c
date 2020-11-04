#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ar,size,i,j,sum=0;
	scanf("%d",&size);
	ar=(int *)malloc(size*4);
	for(i=0;i<size;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(ar[i]+ar[j]==200)
			{
				printf("\n\t%d + %d = 200 \n",ar[i],ar[j]);
			}
		}
	}
}
