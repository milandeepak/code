#include<stdio.h>

int swap(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;

}

int main(){
int a,b,*ap,*bp,s;
printf("Milan Deepak\n 39\n");
printf("Enter number a:");
scanf("%d",&a);
printf("Enter number b:");
scanf("%d",&b);
printf("Before Swap\n");
printf("a= %d,b= %d\n",a,b);
ap=&a;
bp=&b;
swap(ap,bp);
printf("After Swap\n");
printf("a= %d,b= %d\n",a,b);
}
