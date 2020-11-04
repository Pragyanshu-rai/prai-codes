#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int *all,*mneed,*rneed,ter:1,id:8;
}process;
int main()
{
    process *p;
    int pn,rn,dlc=0,i,j,k=0,f=0,cpn=0,safe=0,*curavail,*safesq;
    printf("How many Processes?\n-> ");
    scanf("%d",&pn);
    printf("How many Resources?\n-> ");
    scanf("%d",&rn);
    p=(process *)malloc(pn*sizeof(process));
    curavail=(int *)malloc(rn*4);
	safesq=(int *)malloc(pn*4);
    for(i=0;i<rn;i++)
    {
		printf("How Many Current Resources left in R%d ?\n-> ",i+1);
		scanf("%d",&curavail[i]);
    }
    for (i=0;i<pn;i++)
    {
		p[i].ter=0;
        p[i].id=i;
        p[i].all=(int *)malloc(rn*4);
        p[i].mneed=(int *)malloc(rn*4);
        p[i].rneed=(int *)malloc(rn*4);
		printf("How Many Allocated Resources for process P%d ?\n-> ",i+1);
		for(j=0;j<rn;j++)
			scanf("%d",&p[i].all[j]);
		printf("How Many Max Req. Resources for process P%d ?\n-> ",i+1);
		for(j=0;j<rn;j++)
		{			
			scanf("%d",&p[i].mneed[j]);
			p[i].rneed[j]=p[i].mneed[j]-p[i].all[j];
		}
    }
	while(cpn<pn)
	{	
		for(i=0;i<pn;i++)
		{	
			f=0;
			if(p[i].ter==0) 
			{
				for(j=0;j<rn;j++)
					if(p[i].rneed[j]<=curavail[j])
						f++;
				if(f==3)
				{
					safesq[k]=p[i].id;
					p[i].ter=1;
					for(j=0;j<rn;j++)
						curavail[j]=curavail[j]+p[i].all[j];
					k++;
					cpn++;
					safe++;
				}	
			}	
		}		
		if(cpn==0||dlc>pn*pn*2)
			break;
		dlc++;
	}
	if(safe!=pn)
		printf("\n\n\t\t\t\t\t****************WARNING - Deadlock Detected(Unsafe)!!!!!!!****************\n\n");
	else 
	{
		printf("\n\n\t\t\t\t\t\t\t****************No Deadlock Detected(Safe)****************\n\n");
		printf("\nThe Safe sequence is - ");
		for(i=0;i<pn;i++)
			printf(" P%d ---->> ",safesq[i]+1);
		printf("\n");
	}
	return 0;
}
