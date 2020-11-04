#include<stdio.h>
int main()
{
	int at[20],bt[20],ct[20],tat[20],wt[20],x[20],y[20],z[20],st[20],n,i,t,j,k,m,s,c1,c2,l,key;
	float atat=0,awt=0;
	printf("Enter the number of processe\n-> ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the AT of process P%d\n",i+1);
		scanf("%d",&at[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the BT of process P%d\n",i+1);
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
		y[i]=at[i];
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
//	for(i=0;i<n;i++)
//		printf("%3d",y[i]);
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		{
			if(y[i]==at[j])
			{
				x[i]=j;
				i++;
				j=0;
			}	
		}
	}
//	for(i=0;i<n;i++)
//		printf("%3d",x[i]);	
	s=y[0];
	key=at[x[0]];
	for(i=0;i<n;i++)
		y[i]=-1;	
	c2=0;
	for(i=1;i<n;i++)
	{
		if(key==at[x[i]])
		{
			c2++;
			y[i]=x[i];
		}
	}
	if(c2!=0)
	{
		for(i=1;i<=c2;i++)
		{
			if(bt[x[0]]>bt[x[i]])
			{
				t=x[0];
				x[0]=x[i];
				x[i]=t;
			}	
		}
	}
//	for(i=0;i<n;i++)
//		printf("%3d",x[i]);	
	z[0]=x[0];
	for(i=0;i<n;i++)
		y[i]=0;
	y[x[0]]=1;
	for(k=0;k<n;k++)
	{
		s=s+bt[z[k]];
		ct[z[k]]=s;
		for(i=0;i<n;i++)
			st[i]=-1;
		c1=0;
		i=0;
		for(j=0;j<n;j++)
		{//printf("%3d",y[j]);
			if((y[x[j]]==0)&&(at[x[j]]<=ct[z[k]]))
			{//printf("x[j]= %d y[x[j]]= %d ",x[j],y[x[j]]);
				st[i]=x[j];
				i++;
				c1++;
			}//printf("x[i]= %d ",x[j]);
		}	
		m=1000;
		for(i=0;i<c1;i++)
			if(m>bt[st[i]])		
				m=bt[st[i]];
		for(i=0;i<n;i++)
		{
			if((y[x[i]]==0)&&(k+1!=n)&&(bt[x[i]]==m))
			{
				//printf("x[i]= %d",x[i]);
				z[k+1]=x[i];
				y[x[k+1]]=1;
				i=n;
			}		
		}
	}
//	for(i=0;i<n;i++)
//		printf("%3d",z[i]);	
	printf("\n\nGantt Chart\n");
	for(i=0;i<n;i++)
	{
		printf("\tP%d",z[i]+1);
	}
	printf("\n");
	printf("  %d  ",at[x[0]]);
	for(i=0;i<n;i++)
	{
		printf("  %d  ",ct[z[i]]);
	}			
	return 0;
}
