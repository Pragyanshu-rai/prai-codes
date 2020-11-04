#include <stdio.h> 
#include <string.h>

void LetterChanges(char *str) { 
  
  for(int i=0;i<strlen(str);i++)
    {
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        str[i]=str[i]-32;
      if(str[i]==122)
        str[i]=97;
      else if(str[i]<=122||str[i]>=97)
        str[i]=str[i]+1;
    }
  for(int i=0;i<strlen(str);i++)
    printf("%c",str[i]);
}

int main() { 
  
  char ss[20];
  LetterChanges(scanf("%s",&ss));
  return 0;
    
} 


  
