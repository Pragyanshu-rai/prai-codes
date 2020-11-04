/*First Come First Serve algo with  arrival time (AT) */
#include<stdio.h>
int main()
{
	int bt[20],tat[20],wt[20],at[20],ct[20],y[20],x[20],t,n,j,i,s=0;
	float atat,awt;
	//printf("Enter the number of processes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//printf("Enter the AT of process P%d\n",i+1);
		scanf("%d",&at[i]);
	}
	for(i=0;i<n;i++)
	{
		//printf("Enter the BT of process P%d\n",i+1);
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		y[i]=at[i];
	}	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(y[i]>y[j])
			{
				t=y[i];
				y[i]=y[j];
				y[j]=t;
			}				
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(y[i]==at[j])
			{
				x[i]=j;
			}				
		}	
	}
	printf("\n\nGantt Chart\n");
	for(i=0;i<n;i++)
	{
		printf("\tP%d",x[i]+1);
	}
	printf("\n\n\n");
	s=y[0];
	for(i=0;i<n;i++)
	{
			s=s+bt[x[i]];
			ct[x[i]]=s;					
	}
	for(i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
		atat=atat+(float)tat[i];
		wt[i]=tat[i]-bt[i];
		awt=awt+(float)wt[i];
	}
	atat=atat/n;
	awt=awt/n;
	printf("Process\tArrival Time\tBurst Time\tWaiting Time\tTurn Around Time\tCompletion Time\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t%d\t\t%d\t\t %d\t\t%d\t\t\t%d\n",i+1,at[i],bt[i],wt[i],tat[i],ct[i]);
	}
	printf("\tAverage Waiting time = %f \n\tAverage turn around time = %f\n",awt,atat);		
	return 0;
}
