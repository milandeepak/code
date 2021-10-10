        #include<stdio.h>
	#include<stdlib.h>
	

	int read(int n[][10],int m,int o ){

	 int i,j;
	 for(i=0;i<m;i++){
	   for(j=0;j<o;j++){
	       printf("Enter [%d][%d]:",i+1,j+1);
	       scanf("%d",&n[i][j]);
	   }
	 }
	 printf("-------------------\n");
	}
	
	int display(int n[][10],int m,int o){
        int i,j;
	 for(i=0;i<m;i++){
	   for(j=0;j<o;j++){
	       printf("%d\t",n[i][j]);
	       
	   }
	   printf("\n");
	 }
	  printf("-------------------\n");
	 }
		

	int add(int b[][10],int d[10][10],int sum[][10],int e,int f){

	int i,j;
	for(i=0;i<e;i++){
	   for(j=0;j<f;j++){
	       sum[i][j]=b[i][j]+d[i][j];
	   }
	 }

	}
	
	int mul(int b[][10],int d[][10],int mul[][10],int e,int f,int y){
	int i,j,k,sum=0;
	for(i = 0; i < e; i++){
          for(j = 0; j < f; j++){
            for(k = 0; k < y; k++){
             sum = sum + b[i][k]*d[k][j];
            }
            mul[i][j] = sum;
            sum=0;    
          }
        }
       }
        
       int tran(int b[][10],int d[][10],int m, int n){
	int i,j;
	for(i=0;i<m;i++){
          for(j=0;j<n;j++){
            d[j][i]=b[i][j];
          }
         }
       }
	
	void addition(){
	printf("You have selected Matrix Addition\n");
	int a[10][10],b[10][10],c[10][10],r,c1;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of cloumns:");
	scanf("%d",&c1);
	printf("Matrix A\n");
	read(a,r,c1);
	printf("Matrix B\n");
	read(b,r,c1);
	add(a,b,c,r,c1);
	printf("Matrix A\n");
	display(a,r,c1);
	printf("Matrix B\n");
	display(b,r,c1);
	printf("Sum Matrix:\n");
	display(c,r,c1);
	}
	void multiplication(){
	printf("You have selected Matrix Multiplication\n");
	int a[10][10],b[10][10],c[10][10],r,c1,r1,c2;
	printf("Matrix A\n");
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of columns:");
	scanf("%d",&c1);
	printf("Matrix B\n");
        printf("Enter number of rows:");
	scanf("%d",&r1);
	printf("Enter number of cloumns:");
	scanf("%d",&c2);
	if(c1==r1){
	printf("Matrix A\n");
	read(a,r,c1);
        printf("Matrix B\n");
	read(b,r1,c2);
	mul(a,b,c,r,c1,r1);
	printf("Matrix A\n");
	display(a,r,c1);
	printf("Matrix B\n");
	display(b,r1,c2);
	printf("Product Matrix:\n");
	display(c,r,c2);
	
	}
	 else
	 printf("Multiplication not possible\n");
	
	}
	void transpose(){
	int a[10][10],b[10][10],r,c;
	char m;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of cloumns:");
	scanf("%d",&c);
	if(r==c){
	printf("Matrix A\n");
	read(a,r,c);
	tran(a,b,r,c);
	printf("Matrix A\n");
	display(a,r,c);
	printf("Matrix A transpose\n");
	display(b,r,c);
	}
	else
	 printf("Rows and Columns of the matrix should be equal\n");

       }	

	int main(){
	int n;
	char a;
	printf("-----------------\n");
	printf("| Milan Deepak  |\n");
	printf("|    39         |\n");
	printf("-----------------\n");
	printf("\nWelcome to Matrix Operations  \n");
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
        if((a=='Y')||(a=='y'))
         main();
        else{
         printf("Exiting program........\n");
         exit; 	
	}
	}
