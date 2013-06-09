#include <stdio.h>
int main(void) {
   int i, j;
   int height, width;
   while(1) {
      scanf("%d %d", &height, &width);
      if(height==0 && width==0) break;
      for(i=0; i<height; i++) {
         if(i==0 || i==height-1){
            for(j=0; j<width; j++)
               putchar('#');
         }
         else {
            putchar('#');
            for(j=0; j<width-2; j++)
               putchar('.');
            putchar('#');
         }
         putchar('\n');
      }
      putchar('\n');
   }
   return (0);
}
