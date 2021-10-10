#include<stdio.h>


int main(){

int i,n,k,j,l=0, a[100];
scanf("%d%d",&n,&k);

for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
for(i=0;i<n;i++){
 if(a[i]==k){
  l++;
  for( j=i;j<n;j++){
   a[j]=a[j+1];
  }
 }
} 
 for(i=0;i<n-l;i++)
 printf("%d ",a[i]);
}
