#include <stdio.h>
#include <string.h>
int main()
{
  char non_terminal, first, second;
  int num;
  int index = 3;
  printf("Enter Number of production : ");
  scanf("%d", &num);
  char prod[10][num];
  printf("Enter the grammar as E->E-A :\n");
  for (int i = 0; i < num; i++)
  {
    scanf("%s", prod[i]);
  }
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("\n%c", prod[i][i]);
  // }
  for (int i = 0; i < num; i++)
  {
    printf("\nGRAMMAR ----- %s", prod[i]);
    non_terminal = prod[i][0];
    if (non_terminal == prod[i][index])
    {
      second = prod[i][index+1];
      printf(" is left recursive.\n");
      while (prod[i][index] != 0 && prod[i][index] != '|')
        index++;
      if (prod[i][index] != 0)
      {
        first = prod[i][index+1];
        printf("Grammar without left recursion:\n");
        printf("%c->%c%c\'", non_terminal, first, non_terminal);
        printf("\n%c\'->%c%c\'|E\n", non_terminal, second, non_terminal);
      }
      else
        printf(" can't be reduced\n");
    }
    else
      printf(" is not left recursive.\n");
    index = 3;
  }
}