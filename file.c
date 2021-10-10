
#include <stdio.h>
#include <stdlib.h>
int main()
 {
   FILE *fp;
   char filename[100]; 
   char ch;
   int lc=0, wc=0, cc=0;
   printf("Enter a filename :");
   gets(filename);
   fp = fopen(filename,"r");
   if (fp==NULL){
    printf("The file %s doesn't exist\n",filename);
    exit(1);
   }
   else
   {	
     while ((ch = fgetc(fp))!= EOF) {
      cc++;  
      if (ch == '\n' || ch == '\0')lc++;
      if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')wc++;	   
    }
    fclose(fp);
   }
   printf("Lines : %d \n", lc);
   printf("Words : %d \n", wc);
   printf("Characters : %d \n", cc);
   
   fp=fopen ("result.txt", "w");
   printf("Writing to result.txt\n");
   fprintf (fp, "Lines : %d \n Words : %d \n Characters : %d \n", lc,wc,cc);
   fclose (fp);
   return 0;
}
