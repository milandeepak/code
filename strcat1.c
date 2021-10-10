#include <stdio.h>  
int main()  
{  
    char first_string[20]; // declaration of char array variable  
    char second_string[20]; // declaration of char array variable  
    int i;  // integer variable declaration  
    printf("Enter the first string");  
    scanf("%s",first_string);  
    printf("\nEnter the second string");  
    scanf("%s",second_string);  
    for(i=0;first_string[i]!='\0';i++);
    printf("%d",i);
      
}
