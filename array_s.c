#include<stdio.h>
#include<cs50.h>
int min(int arr[], int count);
int main(void){

 int arr[]={10,3,5,21,67,1,9};
 int count=7;
 int m=min(arr,count);
 printf("%d",m);

}

int min(int arr[], int count){
 
 for(int i=0;i<count;i++){
   if(arr[0]>arr[i]){
      arr[0]=arr[i];
   }
}
   return arr[0];
}
