#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
/*
*
* Pragyanshu Rai
* CSE B-4
* 221810304049
*
*/
int length(char* string)
{
    int index = 0;
    while(string[index] != '\0')
        index++;
    return index;
}
bool is_struct(char* string)
{
    char st[] = "struct";
    for(int index=0; index<6; index++)
        if(st[index]!=string[index])
            return false;
    if(length(string)!=length(st))
        return false;
    return true;    
}
bool is_number(char ch)
{
    if(ch == '0' ||ch == '1' ||ch == '2' ||ch == '3' ||ch == '4' ||ch == '5' ||ch == '6' ||ch == '7' ||ch == '8' ||ch == '9')
        return true;
    return false;
}
bool is_special(char ch)
{
    if(ch == '?' ||ch == '~' ||ch == '!' ||ch == '@' ||ch == '#' ||ch == '$' ||ch == '%' ||ch == '^' ||ch == '&')
        return true;
    return false;
}
bool is_operator(char ch)
{
    if(ch == '+' ||ch == '*' ||ch == '-' ||ch == '/' ||ch == '%' ||ch == ';' ||ch == ':' ||ch == '"' ||ch == ',' ||ch == '.' ||ch == '/' ||ch == '<' ||ch == '>' ||ch == '(' ||ch == ')' ||ch == '[' ||ch == ']')
        return true;
    return false;
}
char* check(char* string)
{
    int index=0;
    while(string[index] != '\0')
        index++;
    int length=index-1;
    for(index =0; index<=length-2; index++)
    {
        if(is_number(string[0]))
            return "invalid";
        else if(is_special(string[index]))
            return "invalid";
        else if(is_operator(string[index]))
            return "invalid";
    }
    if((string[length-1] == '[' && string[length] != ']')||(string[length-1] == '(' && string[length] != ')'))
        return "invalid";
    if(string[length-1] == '(' && string[length] == ')')
        return "function";
    if(string[length-1] == '[' && string[length] == ']')
        return "array";
    if(is_struct(string))
        return "structure";
    return "variable";
}
int main()
{
    char string[20], response;
    printf("Enter The string : ");
    scanf("\n%s", string); // to take a stringing until enter or \n is entered
    printf(" %s \n", check(string));
    printf("Continue? [y/n] ");
    scanf("\n%c", &response);
    if(response == 'y')
        main();
    return 0;
}
