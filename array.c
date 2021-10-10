#include<stdio.h>

void print(int arr[],int nos);
void bsort(int arr[],int nos);

int main(void){

int arr[]={6,2,5,4,8,3,7,10,1,9};
int nos=9;
print(arr,nos);
bsort(arr,nos);
}

void print(int arr[],int nos){

  printf("-------------------------------\n");
  for(int i=0; i<nos; i++) {
    printf("%3i : ", arr[i]);
    for (int j=0; j<arr[i]; j++) {
      printf("#");
      }
    printf("\n");
  }
}

void bsort(int arr[],int nos){

  printf("Array before sorting:\n");
  print(arr,nos);
 for(int j=0;j<nos;j++){
     for(int i=0;i<nos-1;i++){
         if(arr[i]>arr[i+1]){
         int temp = arr[i+1];
         arr[i+1] = arr[i];
         arr[i] = temp;
         
         }
           
     }
 }
 printf("Array after sorting:\n");
 print(arr, nos);
}
