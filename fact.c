#include<stdio.h>

int factorial(int n){

if(n==0)
 return 1;
else
 return n*factorial(n-1); 
}


int main(){

 int n;
 printf("Milan Deepak \n 39\n");
 printf("Enter number:");
 scanf("%d",&n);
 printf("%d! = %d \n",n,factorial(n)); 
}


