#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int at,cbt,bt,ct,tat,wt,rqc:1;
}Process;
void main()
{
	Process *p;
	int *rq,*es,size,tq=1,fp=0,rp=-1,i=0,pc=0,vct=0,icp=-1,lc=-1,cs=-1,fg,fg1=0;
	float atat=0,awt=0;
	printf("Enter the number of processes\n->");
	scanf("%d",&size);
	p=(Process *)malloc(size*(sizeof(Process)));
	es=(int *)malloc(size*4);
	printf("Enter the Time Quantum\n->");
	scanf("%d",&tq);
	for(i=0;i<size;i++)
	{
		printf("Enter the Arrival Time of P%d\n>>",i+1);
		scanf("%d",&p[i].at);
		p[i].rqc=0;
	}
	for(i=0;i<size;i++)
	{
		printf("Enter the Burst Time of P%d\n>>",i+1);
		scanf("%d",&p[i].bt);
		p[i].cbt=p[i].bt;
		pc=pc+p[i].bt;
	}
	rq=(int *)malloc(pc*4);
	pc=0;
	while(pc<size)
	{
		for(i=0,fg=0;i<size;i++)
		{
			if((p[i].at<=vct)&&(p[i].rqc==0))
			{
				fg1++;
				fg=1;	
				rp++;
				rq[rp]=i;
				p[i].rqc=1;
			}		
		}
		if(icp!=-1)
		{
			rp++;
			rq[rp]=icp;
		}
		icp=-1;
		if((fg==0)&&(fg1<size))
			vct++;		
		else
		{
			if(lc!=pc)
				cs++;
				i=fp;
				if(p[rq[i]].bt<=tq)
				{				
					(tq==p[rq[i]].bt)?(vct+=tq):(vct=vct+(p[rq[i]].bt));
					p[rq[i]].ct=vct;
					p[rq[i]].tat=p[rq[i]].ct-p[rq[i]].at;
					atat=atat+(float)p[rq[i]].tat;
					p[rq[i]].wt=p[rq[i]].tat-p[rq[i]].cbt;
					awt=awt+(float)p[rq[i]].wt;
					lc=es[pc]=rq[i];
					p[rq[i]].bt=0;
					pc++;
					fp++;
				}
				else
				{				
					p[rq[i]].bt=p[rq[i]].bt-tq;
					vct+=tq;
					fp++;
					lc=icp=rq[i];				
				}
		}
	}
	atat/=size;
	awt/=size;
	printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tTurn Around Time\tWaiting Time\n");
  	for(i=0;i<size;i++)
  	  printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",es[i]+1,p[es[i]].at,p[es[i]].cbt,p[es[i]].ct,p[es[i]].tat,p[es[i]].wt);
  	printf("Average waiting time = %f\nAverage turn around time = %f\nContext switches = %d\n",awt,atat,cs); 
}
