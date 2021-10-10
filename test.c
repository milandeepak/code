#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,n;
    printf("Enter the variables:");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    
    n = ((a -b / c * d + e) * (f +g));

    printf("Entered variables are: %d, %d, %d, %d, %d, %d and %d\n",
             a,b,c,d,e,f,g);
    
    printf("n=%d\n",n);
    
    return 0;
}    
