#include<stdio.h>

int fact(int n){
int i,fac=1;
for(i=1;i<=n;i++)
 fac*=i;

return fac;
}

int main(){
 int n,f;
 printf("Milan Deepak\n39\n");
 printf("Enter number:");
 scanf("%d",&n);
 f = fact(n);
 printf("%d! = %d\n",n,f);
}
