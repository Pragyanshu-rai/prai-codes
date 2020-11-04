#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int data;
}process;
process *p;
int *fr,*frn,*lru,pn,fn,cn=0,dis[2],hit,fault,k,lr=-1,mr=0;
void display(int);
void fifo();
void opt();
void lruf();
void mru();
int main()
{
	int i,j;
	printf("How many pages??\n-> ");
	scanf("%d",&pn);
	printf("How many frames??\n-> ");
	scanf("%d",&fn);
	p=(process *)malloc(pn*sizeof(process));
	fr=(int *)malloc(fn*4);
	lru=(int *)malloc(fn*4);
	frn=(int *)malloc(fn*4);
	for(i=0;i<pn;i++)
	{
		printf("Enter The %d page\n-> ",i+1);
		scanf("%d",&p[i].data);
	}
	fifo();
	display(0);
	opt();
	display(1);
	lruf();
	display(2);
	mru();
	display(3);
	return 0;
}
void display(int display_flag)
{
	switch(display_flag)
	{
		case 0: printf("\n\t\tFiFO Page Replacement\n");break;
		case 1: printf("\n\t\tOptimal Page Replacement\n");break;
		case 2: printf("\n\t\tLRU Page Replacement\n");break;
		case 3: printf("\n\t\tMRU Page Replacement\n");break;
	}
	printf("\n\tPage Hits :- %d\n\tPage Faults :- %d\n\tHit Ratio :- %d percent\n\tMiss Ratio :- %d percent\n",hit,fault,(hit*100)/pn,(fault*100)/pn);
}
void fifo()
{
	int i=0,j=0;
	hit=fault=0;
	while(i<pn)
	{
		if(i<fn)
		{
			fr[i]=p[i].data;
			fault++;
		}
		else if(p[i].data!=fr[0])
		{
			for(k=0;k<fn;k++)
			{
				if(p[i].data==fr[k])
				{
					hit++;
					break;
				}
				else if(k==fn-1)
				{
					fr[j]=p[i].data;
					fault++;
					j=(j+1)%fn;
				}
			}
		}
		else 
			hit++;
		i++;		
	}
}
void opt()
{
	int i=0,j;
	hit=fault=0;
	while(i<pn)
	{
		dis[0]=dis[1]=0;
		if(i<fn)
		{
			fr[i]=p[i].data;
			fault++;
		}
		else if(p[i].data!=fr[0])
		{
			for(k=0;k<fn;k++)
			{
				if(p[i].data==fr[k])
				{
					hit++;
					break;
				}
				else
				{
					for(j=i;j<pn;j++)
					{
						if(fr[k]==p[j].data)
						{
							frn[k]=j;
							break;
						}	
						else if(j==pn-1)
							frn[k]=-69;
					}
				}
				if(k==fn-1)
				{
					for(j=0;j<fn;j++)
					{
						if(frn[j]==-69)
						{
							fr[j]=p[i].data;
							fault++;
							dis[1]=-69;
							break;
						}
						else if(dis[1]<frn[j])
						{
							dis[1]=frn[j];
							dis[0]=j;
						}
					}
					if(dis[1]!=-69)
					{
						fr[dis[0]]=p[i].data;
						fault++;
					}
				}
			}
		}
		else
			hit++;
		i++;
	}
}
void lruf()
{
	int i=0,j=0;
	hit=fault=0;
	while(i<pn)
	{
		lr=-1;
		if(i<fn)
		{
			fr[i]=p[i].data;
			frn[i]=i;
			lru[i]=1;
			fault++;
			cn++;
		}
		else if(p[i].data!=fr[0])
		{
			for(k=0;k<fn;k++)
			{
				if(p[i].data==fr[k])
				{
					hit++;
					frn[k]=i;
					lru[k]=0;
					break;
				}
				else 
				{
					if(lr<lru[k])
					{
						lr=lru[k];
					}
				}
				if(k==fn-1)
				{	
					for(mr=0;mr<fn;mr++)
						if(lr==lru[mr])
							break;
					fr[mr]=p[i].data;
					frn[mr]=i;
				 	lru[mr]=0;
					fault++;
				}
			}
		}
		else
		{ 
			hit++;
			frn[0]=i;
			lru[0]=0;
		}	
		for(j=0;j<cn;j++)
			lru[j]=lru[j]+1;
		i++;		
	}
}
void mru()
{
	int i=0,j=0;
	hit=fault=0;
	while(i<pn)
	{
		if(i<fn)
		{
			fr[i]=p[i].data;
			fault++;
		}
		else if(p[i].data!=fr[0])
		{
			for(k=0;k<fn;k++)
			{
				if(p[i].data==fr[k])
				{
					hit++;
					break;
				}
				else if(k==fn-1)
				{	
					for(j=0;j<fn;j++)
						if(p[i-1].data==fr[j])
							fr[j]=p[i].data;
						fault++;
				}
			}
		}
		else 
			hit++;
		i++;		
	}	
}
