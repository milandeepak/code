#include<stdio.h>
#include<string.h>


 int main(){
  
  char a[50], b[50], e[50], f[50] ;
  int i,j,c,d;
  printf("Milan Deepak\n 39\n");
  printf("String concatenation without using Library function\n");
  printf("Enter First string:");
  scanf("%s",a);
  printf("Enter Second string:");
  scanf("%s",b);
  c=strlen(a);
  d=strlen(b);
  
  for(j=0;j<=d;j++){
  
   a[c]=b[j];
   c++;
  }
  printf("The concatenated string is: %s ",a) ; 
  
  printf("\n");
  printf("\nString concatenation using Library function(strcat)\n");
  printf("Enter First string:");
  scanf("%s",e);
  printf("Enter Second string:");
  scanf("%s",f);
  strcat(e,f);
  printf("The concatenated string is: %s \n",e) ; 
  
 }
