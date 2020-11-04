#include<stdio.h>
int sum(int size,...)
{
	int  i,s=0;
	int	 *n=&size;
	for(i=0;i<=size;i++)
	{
		printf("%3d",(*n-i));
		s+=(*n-i);
	}
	return s;
}
void main()
{
	printf("the sum(6,1,2,3,4,5,6) = %d\n",sum(6,1,2,3,4,5,6));
	printf("the sum(4,7,8,9,10) = %d\n",sum(4,7,8,9,10));
}
