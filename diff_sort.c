#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int repeat;
    scanf("%d", &repeat);
    while(repeat--)
    {
        int size;
        scanf("%d", &size);
        int* array;
        array = (int*)malloc(sizeof(int) * size);
        for(int index=0; index<size; index++)
        {
            scanf("%d", &array[index]);
            if(array[index]%2==1)
                array[index] = -array[index];
        }/*
        int even=0, odd=size-1, stop=0;
        while(even < odd)
        {
            while(array[even]%2!=0)
            {
                even++;
                stop++;            
            }
            while(array[odd]%2==0 && even < odd)
            {
                odd--; 
            }
            if(even < odd)
            {   
                int temp = array[even];
                array[even] = array[odd];
                array[odd] = temp;
            }
        }
        for(int index = 0; index < stop-1; index++)
            for(int end = index+1; end < stop; end++)
                if(array[index] < array[end])
                {
                    int temp = array[index];
                    array[index] = array[end];
                    array[end] = temp;
                }
        */
        for(int index = 0; index < size-1; index++)
            for(int end = index+1; end < size; end++)
                if(array[index] > array[end])
                {
                    int temp = array[index];
                    array[index] = array[end];
                    array[end] = temp;
                } 
        for(int index=0; index<size; index++)
        {
            if(*(array+index) < 0)
                printf("%d ", (*(array+index))*(-1));
            else
                printf("%d ", *(array+index));
        }
        printf("\n"); 
    }
    return 0;
}
