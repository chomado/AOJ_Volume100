#include <stdio.h>
void min(int x, int y) {
   if(x < y)
      printf("%d %d\n", x, y);
   else
      printf("%d %d\n", y, x);
}
int main(void) {
   int x, y;
   int i;
   scanf("%d %d",&x, &y);
   while(! (x==0 && y==0)){
      min(x, y);
      scanf("%d %d",&x, &y);
   }
   return (0);
}

