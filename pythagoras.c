#include<stdio.h>
#include<cs50.h>

int main(void){
 int a= get_int("Enter Side 1:");
 int b= get_int("Enter Side 2:");
 int c= get_int("Enter Side 3:");
 
 if(a>b&&a>c){
    if(b*b+c*c==a*a)
      printf("Yes\n");
    else
      printf("No\n");
  }    
 else if(b>a&&b>c){
    if(a*a+c*c==b*b)
       printf("Yes\n");
    else
       printf("No\n");            
 }
 else if(c>a&&c>b){
    if(b*b+a*a==c*c)
      printf("Yes\n");
    else
      printf("No\n");
 }
}
