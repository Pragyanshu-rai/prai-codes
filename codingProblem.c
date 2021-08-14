#include <stdio.h>
#define SIZE 256
int main()
{
    // declaring strings
    char s1[SIZE], s2[SIZE];
    // to store the frequency of each charater in the second string
    int freq[SIZE] = {0};
    // scans the string with spaces and string without spaces seperated by new line
    scanf("%[^\n]s", s1);
    scanf("%s", s2);

    // start the loop with each character in second string
    for (int index = 0; s2[index] != '\0'; index++)
    {
        // start the lopp with each character in the second string
        for (int ptr = 0; s1[ptr] != '\0'; ptr++)
        {
            // if a character is mathched then increment the frequency of the respective character against the index of the freq array
            if (s2[index] == s1[ptr])
            {
                freq[index]++;
            }
        }
    }

    // printing the frequency according to the required format
    for (int index = 0; s2[index] != '\0'; index++)
    {
        printf("%d\n", freq[index]);
    }

    return 0;
}