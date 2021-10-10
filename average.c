#include<stdio.h>

float average(int arr [], int count);

int main(void){

 int arr[]={1,2,3,4,6};
 int count=5;
 float m=average(arr,count);
 printf("Average = %2f\n",m); 
}



float average(int arr[], int count){
 int sum=0;
 float avg=0;
 for(int i=0;i<count;i++){
     sum=sum+arr[i];
   
 }
   avg=sum/count; 
   return avg;
}
