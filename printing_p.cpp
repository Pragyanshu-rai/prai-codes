#include <stdio.h>
int main()
{
    int v=0,l,k,x,i,j,a[1000][1000],n,b[1000];
    scanf("%d",&n);
    k=(2*n-1);
    x=(k/2);
    for(i=0,j=n;i<n;j--,i++)
        b[i]=j;
    for(i=0;i<k;i++)
        for(j=0;j<k;j++)
            a[i][j]=0;
    int p=k-1;        
    for(int m=0,l=0;m>=0,l<k;m++,l++)
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
                if(a[i][j]==0)
                {
                    if(i==l||j==l||i==(p-l)||j==(p-l))
                    {
                        if(m<=x)
                        {
                            a[i][j]=b[m];
                            // printf("%d",a[i][j]);
                            //m++;
                        }
                        if(m>x)
                        {
                            m--;
                            v++;
                        }
                        if(v>0)
                        {
                            m--;
                            a[i][j]=b[m];
                            // printf("%d",a[i][j]);
                        }
                    }
                }
            }
        }    
    }
    //for(i=0;i<n;i++)
    //    printf("%d",b[i]);
    /**/for(i=0;i<k;i++)
    {    
        for(j=0;j<k;j++)
        {    
            printf("%3d",a[i][j]);
        }
        if(i<k-1)
        printf("\n");    
    }//*/
    return 0;
}

