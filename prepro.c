#include<stdio.h>
#define max 20
#if max == 30
//	printf("max is 30");
	#define min 20
#elif max == 10
//	printf("max is 10");
	#define min 0
#else
//	printf("max is 20");
	#define min 10
#endif
#define time "good"
#ifndef time
	#define time "good"
#endif
//#ifdef time
	//printf("The time is %s",time);
//#endif
#define sum(a,b) a+b 
#define pro(a,b) a*b
#define pro2(a,b) (a)*(b)
void main()
{
	printf("The value of min is %d\n",min);
	printf("The value of max is %d\n",max);
	printf("The string in time is %s\n",time);
	printf("The Good + Day = %c\n",sum('G','D'));
	printf("The sum of 3 and 4 is %d\n",sum(3,4));
	printf("The product of 3+2 and 4-6 is %d\n",pro(3+2,4-6));
	printf("The product2 of 3+2 and 4-6 is %d\n",pro2(3+2,4-6));
}
