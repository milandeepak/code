	#include<stdio.h>
	#include<stdlib.h>
	

	int read(int n[3][3]){

	 int i,j;
	 for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       printf("Enter [%d][%d]:",i+1,j+1);
	       scanf("%d",&n[i][j]);
	   }
	 }
	 printf("-------------------\n");
	}
	
	int display(int n[3][3]){
        int i,j;
	 for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       printf("%d\t",n[i][j]);
	       
	   }
	   printf("\n");
	 }
	  printf("-------------------\n");
	 }
		

	int add(int b[3][3],int d[3][3],int sum[3][3]){

	int i,j;
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	       sum[i][j]=b[i][j]+d[i][j];
	   }
	 }

	}
	
	int mul(int b[3][3],int d[3][3],int mul[3][3]){
	int i,j,k,sum=0;
	for(i = 0; i < 3; i++){
          for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
             sum = sum + b[i][k]*d[k][j];
            }
            mul[i][j] = sum;
            sum=0;    
          }
        }
       }
     
     
     int tran(int b[3][3],int d[3][3]){
	int i,j;
	for(i=0;i<3;i++){
          for(j=0;j<3;j++){
            d[j][i]=b[i][j];
       }
       }
       }
	
	void addition(){
	printf("You have selected Matrix Addition\n");
	int a[3][3],b[3][3],c[3][3];
	printf("Matrix A\n");
	read(a);
	printf("Matrix B\n");
	read(b);
	add(a,b,c);
	printf("Matrix A\n");
	display(a);
	printf("Matrix B\n");
	display(b);
	printf("Sum Matrix:\n");
	display(c);
	}
	
	void multiplication(){
	printf("You have selected Matrix Multiplication\n");
	int a[3][3],b[3][3],c[3][3];
	printf("Matrix A\n");
	read(a);
	printf("Matrix B\n");
	read(b);
	mul(a,b,c);
	printf("Matrix A\n");
	display(a);
	printf("Matrix B\n");
	display(b);
	printf("Product Matrix:\n");
	display(c);
	}
	
	void transpose(){
	int a[3][3],b[3][3];
	printf("Matrix A\n");
	read(a);
	tran(a,b);
	printf("Matrix A\n");
	display(a);
	printf("Matrix A transpose\n");
	display(b);
	
        }	
	int main(){
	int n;
	char a;
	printf("-----------------\n");
	printf("| Milan Deepak  |\n");
	printf("|    39         |\n");
	printf("-----------------\n");
	printf("\nWelcome to Matrix Operations \n");
	printf("----------------------------\n"); 
	printf("1) Addition\n");
	printf("2) Multiplication\n");
        printf("3) Transpose\n");  
        printf("----------------------------\n"); 
        printf("Enter option(1/2/3):");  
        scanf("%d",&n);
        switch(n){
        
        case 1:
        addition();
        break;
        
        case 2:
        multiplication();
        break;
        
        case 3:
        transpose();
        break;
        
        default:
        printf("Invalid Option\n");
        break;
        }
        printf("Do you wish to continue(Y/N):");
        scanf("%s",&a);
        if(a=='Y')
         main();
        else
         exit; 	
	}
