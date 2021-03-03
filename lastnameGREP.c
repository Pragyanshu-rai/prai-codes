#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char** argv)
{
    char  line[1000], all_lines[1000][1000];
    FILE *file_handle;
    if(argc < 2)
    {
        printf("String and file name not given!!!\n");
        exit(-1);
    }    
    if(argc < 3)
    {
        printf("Only string given but the file name is not given!!!\n");
        exit(-1);
    }    
    if((file_handle=fopen(argv[2], "r")) == NULL)
    {
        printf("Error in opening the file!!!\n -does the file exist??");
        exit(-1);
    }
    while(fgets(line, sizeof(line), file_handle))
    {
        if(strstr(line, argv[1])!=NULL)
            printf("%s", line);    
    }
    fclose(file_handle);
    //printf("Hello %s \n", argv[1]);
    return 0;
}
