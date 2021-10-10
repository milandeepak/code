#include<stdio.h>
#include<cs50.h>

int main(void)
{
  int n= get_int("enter no:");
  for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
       printf("#");
     }
    
   printf("\n");
  }

}


int n= get_int("enter no:");
  for(int i=0; i<=n; i++){
    for(int j=1; j<=n-i; j++){
       printf(" ");
     }
    for(int k=1; k<=i;k++){
     printf("#");
    }
   printf("\n");
  }
