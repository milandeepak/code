#include<stdio.h>
#include<cs50.h>


int main(void)
{
 string name; 
 int age;
 
 name=get_string("Enter your name:");
 age=get_int("Enter age");
 for(int i=0;i<=age;i++){
  printf(",");
 for(int j=0;j=i+1;j++)
  printf("|");
 }  
}
