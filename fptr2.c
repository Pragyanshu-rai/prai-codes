#include<stdio.h>
typedef int (*fp)(int,int);
int add(int a,int b) {return a+b;}
int mul(int a,int b) {return a*b;}
int do_op(fp f1,int a,int b)
{
	return f1(a,b);
}
void main()
{
	printf("The sum of 1,2 is =%d\n",do_op(add,1,2));
	printf("The product of 1,2 is =%d\n",do_op(mul,1,2));
}
