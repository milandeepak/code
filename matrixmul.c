#include<stdio.h>

int main()
{

    int r,c,r1,c1,i,j,k,a[10][10],b[10][10],pro[10][10],sum = 0;
    printf("First Matrix A");
    printf("\nEnter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);

    for(i = 0; i < r; i++){  
        for(j = 0; j < c; j++){
            printf("Enter a[%d][%d]: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Second Matrix B\n");
    printf("Enter the number of rows:");
    scanf("%d",&r1);
    printf("Enter the number of columns:");
    scanf("%d",&c1);

    for(i = 0; i < r1; i++){  
        for(j = 0; j < c1; j++){
            printf("Enter b[%d][%d]: ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }     
    for(i = 0; i < r; i++){
      for(j = 0; j < c1; j++){
        for(k = 0; k < r1; k++){
          sum = sum + a[i][k]*b[k][j];
        }
        pro[i][j] = sum;
        sum=0;    
      }
    }
    
     printf("The matrix A is :\n");
	 for(i=0;i<r;i++){
	   for(j=0;j<c;j++){
	       printf("%d  ",a[i][j]);
	       
	   }
	   printf("\n");
	 }
     printf("The matrix is :\n");
        for(i=0;i<r1;i++){
          for(j=0;j<c1;j++){
            printf("%d  ",b[i][j]);
          }
          printf("\n");
        }
     printf("The product matrix\n");
        for(i = 0; i < r; i++){
          for(j = 0; j < c1; j++){
            printf("%d   ", pro[i][j]);
          }
            printf("\n"); 
        }
}
