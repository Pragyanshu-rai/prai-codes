#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
	int id;
	float price;
	char name[20];
}books;
void main()
{
	books b1,b2;
	memset(&b1,0,sizeof(b1));
	FILE *fptr1,*fptr2;
	fptr1=fopen("filetest1.dat","a+");
	fptr2=fopen("filetest2.txt","w+");
	if(fptr1==NULL||fptr2==NULL)
		exit(1);
	printf("Enter the id,price and name of the book\n");
	scanf("%d",&b1.id);
	fflush(stdin);
	scanf("%f",&b1.price);
	fflush(stdin);
	scanf(" %[^'\n']s",b1.name);
	//fflush(stdin);
	//fflush(stdin);
	fwrite(&b1,sizeof(b1),1,fptr1);
	fputc('\n',fptr1);
	fwrite(&b1,sizeof(b1),1,fptr2);
	fputc('\n',fptr1);
	printf("Saving.......");
	fclose(fptr1);
	fclose(fptr2);
	printf("Done\n");
}
