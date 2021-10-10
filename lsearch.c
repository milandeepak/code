#include<stdio.h>

int main(){

 int a[100],n,i,num,flag=0;
 
 printf("Enter size of array:");
 scanf("%d",&n);
 for(i=0;i<n;i++){
     printf("Enter a[%d]:",i);
     scanf("%d",&a[i]);
 } 
 printf("Enter number to be found:");
 scanf("%d",&num);
 
 for(i=0;i<n;i++){    
   if(num==a[i]){
     printf("%d was found at index %d \n",num,i);     
     flag=1;
   }
}      
 if(flag==0)
   printf("%d was not found\n",num);
 
}

