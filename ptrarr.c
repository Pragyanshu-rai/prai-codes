#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,i,j;
	int **arr2 = (int **)malloc(2*sizeof(int *));
	for(i=0;i<2;i++)
		arr2[i]=(int *)malloc(10*sizeof(int ));
	arr=(int *)malloc(10*sizeof(int));
	printf("Enter the elements in the array\n");
	for(i=0;i<10;i++)
		scanf("%d",arr+i);
	printf("The values are\n");
	for(i=0;i<10;i++)
		printf("%3d",*(arr+i));	
	printf("\n");
	for(j=0;j<2;j++)
		for(i=0;i<10;i++)
			*(*(arr2+j)+i)=*(arr+i);
	for(j=0;j<2;j++)
		for(i=0;i<10;i++)
			printf("%3d",*(*(arr2+j)+i));
	printf("\n");
	free(arr);
	free(arr2);
}
