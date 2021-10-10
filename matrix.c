#include<stdio.h>

int main(){

 int a[10][10];
 int b[10][10];
 int sum[10][10];
 int i,j,r,c;
 printf("First matrix A\n");
 printf("Enter number of rows:");
 scanf("%d",&r);
 printf("Enter number of columns:");
 scanf("%d",&c);
 
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("Enter a[%d][%d]:",i+1,j+1);
       scanf("%d",&a[i][j]);
   }
 }
 

 
 printf("Second matrix B\n");
 printf("Enter number of rows:");
 scanf("%d",&r);
 printf("Enter number of columns:");
 scanf("%d",&c);
 
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("Enter b[%d][%d]:",i+1,j+1);
       scanf("%d",&b[i][j]);
   }
 }
 
 printf("The matrix A is :\n");
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("%d  ",a[i][j]);
       
   }
   printf("\n");
 }
 printf("The matrix B is :\n");
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("%d  ",b[i][j]);
       
   }
   printf("\n");
 }
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       sum[i][j]=a[i][j]+b[i][j];
   }
 }
 
 printf("The Sum matrix is :\n");
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("%d  ",sum[i][j]);
       
   }
   printf("\n");
 }
}
