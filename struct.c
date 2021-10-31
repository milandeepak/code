#include<stdio.h>

struct details{
int no;
char a[50];
int sal;

};


int main(){

struct details emp[50];
int i,n;
printf("Enter number of employees:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++){
printf("Enter Employee %d details\n",i+1);
printf("Enter Name:");
scanf("%s",&emp[i].a);
printf("Enter Employee Id:");
scanf("%d",&emp[i].no);
printf("Enter Salary:");
scanf("%d",&emp[i].sal);
printf("\n"); 
}

printf("\nDetails of %d Employees:",i);
printf("\n");
for(i=0;i<n;i++){
printf("\nEmployee %d details",i+1);
printf("\nName: %s",emp[i].a);
printf("\nEmployee Id: %d",emp[i].no);
printf("\nSalary: %d",emp[i].sal);
printf("\n");
}

}
