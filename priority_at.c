#include<stdio.h>
typedef struct
{
	int at,pt,bt,ct,tat,wt,cmp;
}Priority;
void main()
{
	Priority p[20];
	int x[20],y[20],l=0,pc=0,i=0,j=0,k=0,n,m,vct=0,pcnt;
	float atat=0,awt=0;
	printf("Enter the number of processes\n->");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Arrival Time of P%d\n>>",i+1);
		scanf("%d",&p[i].at);
		p[i].cmp=0;
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the Priority of P%d\n>>",i+1);
		scanf("%d",&p[i].pt);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the Burst Time of P%d\n>>",i+1);
		scanf("%d",&p[i].bt);
	}
	i=0;
	while(pc<n)
	{
		pcnt=0;
		m=-1;
		for(i=0,j=0;i<n;i++)
		{
			if((p[i].at<=vct)&&(p[i].cmp==0)&&(m<p[i].pt))
			{
				m=p[i].pt;
				x[j]=i;
				pcnt++;
				j++;
			}
		}
		if(pcnt==0)
			vct++;
		else
		{
			for(i=0;i<pcnt;i++)
			{
				if(m==p[x[i]].pt)
				{
					y[pc]=x[i];
					p[x[i]].ct=vct+p[x[i]].bt;
					vct=p[x[i]].ct;
					p[x[i]].tat=p[x[i]].ct-p[x[i]].at;
					atat=atat+(float)p[x[i]].tat;
					p[x[i]].wt=p[x[i]].tat-p[x[i]].bt;
					awt=awt+(float)p[x[i]].wt;
					p[x[i]].cmp=1;
					printf("\tP%d",x[i]+1);
					i=pcnt-1;
					pc++;
				}
			}
		}		
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("\t%d",p[y[i]].ct);
	atat/=n;
	awt/=n;
	printf("\nProcess\tArrival Time\tPriority\tBurst Time\tCompletion Time\tTurn Around Time\tWaiting Time\n");
  	for(i=0;i<n;i++)
  	  printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",y[i]+1,p[y[i]].at,p[y[i]].pt,p[y[i]].bt,p[y[i]].ct,p[y[i]].tat,p[y[i]].wt);
  	printf("Average waiting time = %f\nAverage turn around time = %f\n",awt,atat);        	 
}
