#include<stdio.h>

int main(){
int i,j,n,temp,arr[100];
printf("Milan Deepak\n39\n");    
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");    
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}   
printf("\nArray before sorting:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(arr[j]<arr[j+1])
          {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
      }
  }  
printf("\nArray after sorting:");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
