#include<stdio.h>
int main(){

int a,b,c,d,e,f,g,n;
printf("Milan Deepak\n");

printf("39\n");

printf("Program to evaluate ((a -b / c * d + e) * (f +g))\n");

printf("Enter numbers:");

scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);

n=((a -b / c * d + e) * (f +g));

printf("((%d -((%d / %d) * %d) + %d) * (%d +%d))=%d \n",a,b,c,d,e,f,g,n);
}
