#include<stdio.h>

int add(int *a, int *b){


 int sum;
 sum = *a+*b;
 printf("Sum = %d",sum);
 
}

int main(){

int a,b,sum,*ap,*bp;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
ap=&a;
bp=&b;
add(ap,bp);


}
