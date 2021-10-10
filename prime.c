#include<stdio.h>  
int main(){    
 int n,i,h=0,c=0;    
 printf("Milan Deepak, 39\n");
 printf("Enter the number:");    
 scanf("%d",&n);    
 h=n/2;    
 for(i=2;i<=h;i++){    
   if(n%i==0){    
    printf("%d, is a composite number\n",n);    
    c=1;    
    break;    
   }    
 }    
 if(c==0)    
  printf("%d is a prime number\n",n);     
 return 0;  
 }    
