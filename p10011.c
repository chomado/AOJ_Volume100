#include <stdio.h>
int main(void) {
   int i;
   int n;
   int no[100];
   scanf("%d", &n);
   for(i=0; i<n; i++) {
      scanf(" %d", &no[i]);
   }
   for(i=n-1; i>=0; i--) {
      printf("%d", no[i]);
      if(i!=0) putchar(' ');
   }
   putchar('\n');
   return (0);
}
