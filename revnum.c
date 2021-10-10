#include<stdio.h>

int main(){
 int rev, n, num;
 printf("Enter no:");
 scanf("%d",&n);
 while(n!=0){
 
  rev=n%10;
  if(rev==1)
   printf("one ");
   if(rev==2)
   printf("two ");
   if(rev==3)
   printf("three ");
   if(rev==4)
   printf("four ");
   if(rev==5)
   printf("five ");
   if(rev==6)
   printf("six ");
   if(rev==7)
   printf("seven ");
   if(rev==8)
   printf("eight ");
   if(rev==9)
   printf("nine ");
   if(rev==0)
   printf("zero ");
   n=n/10;
 
 }
 return 0;
}
