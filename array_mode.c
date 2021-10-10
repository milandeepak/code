#include<stdio.h>
int mode(int arr[], int count){
int v= 0, c= 0;

   for (int i = 0; i < count; i++) {
      int n= 0;
      
      for (int j = 0; j < count; j++) {
         if (arr[j] == arr[i])
         ++n;
      }
      
      if (n > c) {
         c = n;
         v = arr[i];
      }
   }

   return v;
}

int main(void){

 int arr[]={1,2,1,1,6,5,3,5,4,8};
 int count=11;
 int m;
 m=mode(arr,count);
 printf("%d\n",m);

}
