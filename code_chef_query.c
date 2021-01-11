 #include <stdio.h>
int main(void) {
    int test,index=0,size,key,carry=0,days=0;
	scanf("%d",&test);
	while(test>0)
	{
	    scanf("%d %d",&size,&key);
	    int array[size];
	    for(index=0;index<size;index++)
	        scanf("%d",&array[index]);
	    index=0;
	    carry=0;
	    days=0;
	    while(index<size)
	    {
	        if(array[index]+carry<key)
	        {
	            days=index+1;
	        }
            else if(index==size-1 && array[index]+carry-key<key)
            {
                carry=0;
                days++;
            }
	        else if(array[index]+carry>=key)
	        {
                array[index]+=carry;
	            carry=array[index]-key;
	            days=index+1;
	        }
	        index++;
	    }
        if(carry>0)
        {
            carry=array[size-1];
            while(carry>0)
            {
                carry-=key;
                days++;        
            }
        }
	    printf("%d\n",days);
	    test--;
	}
	return 0;
}
