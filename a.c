#include<stdio.h>
int main()
{
    long int a[50000][50000],l,k,t,i=0,j,m,it[10000],jt[10000];
    int n[5];
    char s[100];
    scanf("%d",&t);
    for(k=0;k<t;k++)
      {  
          for(i=0;i<5;i++)
            {  
               scanf("%d",&n[i]);  
            }
          /*for(i=0;i<5;i++)
            {
               printf("%d",n[i]);               
            }*/
          scanf("%s",&s);    
          for(i=1;i<=n[1];i++)
            {
             for(j=1;j<=n[2];j++)
                {
                  a[i][j]=0;   
                }
            }
          l=0;
          i=n[3];
          j=n[4];
          while(s[l]!='\0')
            {
              if(s[l]=='N'||s[l]=='n')
               {
                 if(a[i][j]==0)
                  {
                      a[i][j]=1;
                      i--;
                  } 
                 while(a[i][j]==1)
                  {
                     i--; 
                  } 
               }
              if(s[l]=='E'||s[l]=='e')
               {
                 if(a[i][j]==0)
                  {
                    a[i][j]=1;
                    j++;   
                  }
                 while(a[i][j]==1)
                  {
                    j++;
                  }         
               } 
              if(s[l]=='W'||s[l]=='w')
               {
                 if(a[i][j]==0)
                  {
                    a[i][j]=1;
                    j--; 
                  } 
                 while(a[i][j]==1)
                  {
                    j--;
                  } 
               } 
              if(s[l]=='S'||s[l]=='s')
               {
                 if(a[i][j]==0)
                  {
                    a[i][j]=1;
                    i++; 
                  }
                 while(a[i][j]==1)
                  {
                    i++;
                  }                  
               } 
              l++; 
            }
        it[k]=i;
        jt[k]=j;    
      }
    for(i=0,j=1;i<t;i++,j++)
      {
          
        printf("Case #%d: %d %d\n",j,it[i],jt[i]);
        
      }
    return 0;
}

