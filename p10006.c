#include <stdio.h>
int main(void) {
   int x;
   int i;
   scanf("%d", &x);
   i=1;
   while(x) {
      printf("Case %d: %d\n", i, x);
      i++;
      scanf("%d", &x);
   }
   return (0);
}
