#include<stdio.h>


int sum();

int main(){

int result=sum();
printf("Sum= %d ",result);
}


int sum(){

 int a,b,sum;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 sum = a+b;
 return sum;
}
