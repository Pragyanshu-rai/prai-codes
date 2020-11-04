#include<stdio.h>
int main()
{
  int at[20],bt[20],pt[20],ct[20],tat[20],wt[20],x[20],y[20],z[20],st[20],n,i,t,j,k,m,s,c1,l,key,pc;
  float atat=0,awt=0;
  printf("Enter the number of processes\n-> ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the AT of process P%d\n>>",i+1);
    scanf("%d",&at[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("Enter the Priority of process P%d\n>>",i+1);
    scanf("%d",&pt[i]);
  }
  for(i=0;i<n;i++)
  {
    printf("Enter the BT of process P%d\n>>",i+1);
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
  for(i=0;i<n;)
  {  
    for(j=0;j<n;j++)
    {
      if(y[i]==at[j])
      {
        x[i]=j;
        i++;
      }  
    }
  }  	
  s=y[0];    
  for(j=0;j<n-1;j++)
  {
    for(i=j+1;i<n;i++)
    {
      if(at[x[j]]==at[x[i]])
	  {	
		  if(pt[x[j]]>pt[x[i]])
          {
        	t=x[j];
        	x[j]=x[i];
        	x[i]=t;
      	  }  
 	  }   
	}
  }	
  for(i=0;i<n;i++)
  {
	y[i]=0;
	ct[i]=0;
  }	
  z[0]=x[0];
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
    {
      if((y[x[j]]==0)&&(at[x[j]]<=ct[z[k]]))
      {
        st[i]=x[j];
        i++;
        c1++;
      }
    } 
    m=1000;
    for(i=0;i<c1;i++)
     	if(m>pt[st[i]])    
       		m=pt[st[i]];
    for(i=0;i<n;i++)
   	{
    	if((y[x[i]]==0)&&(k+1!=n)&&(pt[x[i]]==m))
     	{
        	z[k+1]=x[i];
        	y[z[k+1]]=1;
        	i=n;
      	}    
    } 
  }
  printf("\n-------------------------Gantt Chart-----------------------\n");
  for(i=0;i<n;i++)
  {
    printf("\tP%d",z[i]+1);
  }
  printf("\n     %d  ",at[x[0]]);
  for(i=0;i<n;i++)
  {
    printf("    %d    ",ct[z[i]]);
  }
  printf("\n");
  for(i=0;i<n;i++)
  {
    tat[i]=ct[i]-at[i];
    atat=atat+(float)tat[i];
    wt[i]=tat[i]-bt[i];
    awt=awt+(float)wt[i];
  }
  atat/=n;
  awt/=n;
  printf("Process\tArrival Time\tBurst Time\tCompletion Time\tTurn Around Time\tWaiting Time\n");
  for(i=0;i<n;i++)
    printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",z[i]+1,at[z[i]],bt[z[i]],ct[z[i]],tat[z[i]],wt[z[i]]);
  printf("Average waiting time = %f\nAverage turn around time = %f\n",awt,atat);        
  return 0;
}
