#include<stdio.h>
#include<string.h>
#include <string.h>

char *strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

int main()
{
char s1[30],s2[30];
printf("enter the word to be reversed\n");
scanf ("%s",s1);
strcpy (s2, s1);
strrev(s2);
printf("the reversed word is: %s",s2);	
if (strcmp(s2, s1)==0)
printf("\n it is palindrome");
else
printf("\nit is not palindrome");

return 0;
}
