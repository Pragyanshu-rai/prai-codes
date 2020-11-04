#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}	
		}
	}
	return 0;
}
