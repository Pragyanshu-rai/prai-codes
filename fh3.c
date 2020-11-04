#include<stdio.h>
#include<string.h>
typedef struct
{
	int id;
	float price;
	char name[20];
}books;
void main()
{
	FILE *fptr2;
	books b2;
	memset(&b2,0,sizeof(b2));
	fptr2=fopen("filetest2.txt","r+");
	//fseek(fptr2,0,SEEK_SET);
	while((fread(&b2,sizeof(b2),3,fptr2))>0)
		printf("id = %d\nname = %s\nprice = %.3f\n",b2.id,b2.name,b2.price);
	fclose(fptr2);
}
