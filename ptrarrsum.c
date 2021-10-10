#include<stdio.h>

int add(int *p, int n){

int j,sum=0;
for(j=0;j<n;j++){
sum +=*p;
p++;  
}
return sum;  


}

int main(){
int arr[50],i,n,*ptr,sum;
printf("Milan Deepak\n 39\n");
printf("Enter number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("Enter Element %d :", i+1);
  scanf("%d",&arr[i]);
}
 ptr=arr;
 
 sum = add(ptr,n);
 printf("Sum= %d\n",sum);
}

