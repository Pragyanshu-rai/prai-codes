#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char buffer[100],x;
	FILE *fp;
	fp=fopen("filetest4.txt","a");
	if(!fp)
		exit(1);
	printf("file is open, you can start writing press '~' to save and exit\n");
	scanf("%[^'~']s",buffer);
	//strcat(buffer,"\n");	
	fputs(buffer,fp);
	fputc('\n',fp);	
	//fwrite(buffer,strlen(buffer),1,fp);
	printf("saving.........done\n");
	fclose(fp);	
}
