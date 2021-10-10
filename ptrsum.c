#include<stdio.h>

int sum(int *a, int *b){
int result;
result = *a + *b;
return result;
}

int main(){
int a,b,*ap,*bp,s;
printf("Milan Deepak\n 39\n");
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
ap=&a;
bp=&b;
s=sum(ap,bp);
printf("Sum of %d and %d is %d\n",a,b,s);
}
