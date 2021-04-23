#include<stdio.h>

#include<ctype.h>

typedef struct
{
	char left[1];
	char right[20];
	
}prod;

prod p[20];

int main()
{
	int n,i,j;
	printf("enter the no of productions ");
	scanf("%d",&n);
	printf("enter the productions\n");
	for(i=0;i<n;i++)
	{
		printf("enter the left side of production\n");
		scanf("%s",p[i].left);
		printf("enter the right side of production\n");
		scanf("%s",p[i].right);
		
	}
    
    printf("\nNon terminals : ");
    
    for(i=0;i<n;i++)
    {
        if(isupper(p[i].left[0]))
            printf("%c\n",p[i].left[0]);
    }
    
    printf("\nTerminals : ");
    
    for(i=0;i<n;i++)
    {
        for(j=0;p[i].right[j]!='\0';j++)
	        if(!(isupper(p[i].right[j])))
		        printf("%c\n",p[i].right[j]);
    }

    printf("Start symbol is ");
    printf("%c\n",p[0].left[0]);	

}
