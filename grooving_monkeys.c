#include<stdlib.h>
#include<stdio.h>
main()
{
    int test_case,size,tick,i,j,realf=0,*monkey,*temp,*pos,*or;
    scanf("%d",&test_case);
    while(test_case > 0)
    {
        tick=0;
        scanf("%d",&size);
        monkey=(int *)malloc(4*size);
        temp=(int *)malloc(4*size);
        or=(int *)malloc(4*size);
        pos=(int *)malloc(4*size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&pos[i]);
            or[i]=monkey[i]=temp[i]=i+1;
        }
        while(1)
        {
            realf=0;
            for(i=0;i<size;i++)
                monkey[i]=temp[pos[i]-1];
            for(i=0;i<size;i++)
                temp[i]=monkey[i];
            tick++;
            for(i=0;i<size;i++)
                if(monkey[i] == or[i])
                    realf++;
            if(realf==size)
            {
                printf("%d\n",tick);
                realf=0;
                break;
            }
        }
        free(monkey);
        free(temp);
        free(pos);
        test_case--;
    }
}
