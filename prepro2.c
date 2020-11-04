#include<stdio.h>
#include<stdlib.h>
#define sum(a,b,c) (a)*(b)+(c)//follows BODMAS
#define print(x,y) while(x<y) \ 
				   { \ 
					 printf("Pragyanshur:%d",x); \
					 x++; \		
				   }
// backshlash is used to indicate that the next line also bilongs to the same macro
void main()
{
	char *ch;
	int i=0,limit;
	float x=3.3,y=4.1,z=1;
	printf("Enter the limit [1-10]\n");
	scanf("%d",&limit);
	print(i,limit)
	printf("\nEnter the value of x,y,z\n");
	scanf("%f,%f,%f",&x,&y,&z);
	printf("%f*%f+%f is %f\n",x,y,z,sum(x,y,z));//can do floating point values
}
