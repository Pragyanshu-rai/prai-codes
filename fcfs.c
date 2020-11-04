/*First Come First Serve algo with out arrival time (AT) */
#include<stdio.h>
int main()
{
	int bt[30],tat[20],wt[20],n,i,s=0;
	float atat,awt;
	printf("Enter the number of processes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the bt of process P%d\n",i+1);
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		s+=bt[i];
		tat[i]=s;
		atat=atat+(float)tat[i];
		wt[i]=tat[i]-bt[i];
		awt=awt+(float)wt[i];
	}
	atat/=n;
	awt/=n;
	printf("Process\tBurst Time\tWaiting Time\tTurn Around Time\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t%d\t\t %d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
	}
	printf("\tAverage Waiting time = %f\n\tAverage turn around time = %f\n",awt,atat);		
	return 0;
}
