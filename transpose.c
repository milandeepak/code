#include<stdio.h>

int main(){

 int a[10][10];
 int transp[10][10];
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
 
 printf("The matrix A is :\n");
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("%d  ",a[i][j]);
       
   }
   printf("\n");
  }
 
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       transp[j][i]=a[i][j];
   }
 }  
 printf("Transpose of Matrix A\n");  
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
       printf("%d  ",transp[i][j]);
   }
   printf("\n");
 }
  
}     
