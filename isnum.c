#include<stdio.h>
#include<string.h>

int main(){
char a[50];
int b[50],i,j=0;

printf("Enter string:");
gets(a);

 for(i=0;a[i]!='\0';i++){
  if (isdigit(a[i]) != 0){
     b[j]==a[i];
     j++;
  }
  
 }
 
 for(i=0;b[i]!='/0';i++)
 printf("%d",b[i]);
 
}
