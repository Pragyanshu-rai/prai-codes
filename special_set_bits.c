#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,n,i,b,j,c=0,f=0,l,h,z,T,ar[1000000],sum=0;
    scanf("%d",&T);
    printf("\n");
     for(z=1; z<=1000000; z++)
            {
         	ar[z]=0;
            n = z;
            i = 1;
            while(n>0)
            {
                f = 0;
                a = n % 2;
                n = n / 2;
                for(j = 2; j <= i/2; j ++)
                {
                    if(i % j == 0)
                    {
                        f = 1;
                        break;
                    }
                }
                if(f==0 && i!=1)
                {
                    if(a == 1)
                    {
                        ar[z]++;
                    }
                }
                i++;
            }
        }
    while(T>0)
    {
        sum=0;
        scanf("%d %d",&l,&h);
        for(i=l;i<=h;i++)
        {
          sum=sum+ar[i];  
        }
        printf("%d\n",sum);
        T--;
    }
    return 0;
}
