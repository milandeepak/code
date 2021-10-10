#include<stdio.h>
#include<cs50.h>


void delay(){

 for(int j=0;j<1000;j++)
    for(int i=0;i<700000;i++);
}
void status(string message){
 
 printf("%s : ",message);
 for(int i=0;i<10;i++){
    printf("#");
    delay();
  }
  printf(" DONE\n");
}
int main(void){
  
  status("Downloading");
  status("Compyling");
  status("Deploying");
 
 
}
