#include<stdio.h>
#include<cs50.h>
int max(int arr[], int count);
int main(void){

 int arr[]={10,3,5,21,67,3,9};
 int count=7;
 int m=max(arr,count);
 printf("%d",m);

}

int max(int arr[], int count){
 
 for(int i=0;i<count;i++){
   if(arr[0]<arr[i]){
      arr[0]=arr[i];
   }
}
   return arr[0];
}
