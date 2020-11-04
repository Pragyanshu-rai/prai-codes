#include<stdio.h>
#include<stdarg.h>//for vararg function handling
#include<string.h>
void mprintf(char *str,...)
{
	int x,i=0;
	va_list l1;//list for agrs
	va_start(l1,str);//starting argument
	//vprintf(str,l1);//prints all the values
	//printf("\n");
	while(i<strlen(str))
	{
		if(str[i]=='d'||str[i]=='D')
		{
			printf("%3d\n",va_arg(l1,int));
		}
		else if(str[i]=='f'||str[i]=='F')
		{
			printf(" %.2e\n",va_arg(l1,double));
		}
		else if(str[i]=='c'||str[i]=='C')
		{
			printf("%2c\n",(char)va_arg(l1,int));
		}
		i++;	
	}
}
void main()
{
	mprintf("ddffcd",12,13,11.3,1.69,'a',69);
}
