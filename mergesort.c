#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
	if(n==1)
		return n;
	n=n*fact(n-1);
	return n;
}
int fibo(int n)
{
	if(n==0)
		return 0;
	else if(n==1||n==2)
		return 1;
	else
		n=fibo(n-1)+fibo(n-2);
	return n;	
	// or 
	//return (fibo(n-1)+fibo(n-2));
}
int pw(int b,int p)
{

}
int main()
{
	int n,arr[4];
	printf("\n\tEnter the number\n");
	scanf("%d",&n);
	printf("%3d\n",fact(n));
	for(int i=0;i<n;i++)
		printf("%3d",fibo(i));
	printf("\n\n");
	for(int i=0;i<4;i++) arr[i]=0;
	for(int i=0;i<16;i++)
	{
		for(int x=i,j=0;j<=4;j++)
		{
			if(x==0)
				continue;
			else
				if(x%2==0)
					arr[j]=0;
				else if(x%2==1)
					arr[j]=1;	
				x/=2;
		}
		for(int j=3;j>=0;j--)
			printf("%3d",arr[j]);
		printf("\n");
	}	
	return 0;
}
