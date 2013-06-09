#include <stdio.h>
/* 問題で円周率が3.141592653589と与えられていました。*/
int main(void) {
   double r;
   int i;
   scanf("%lf", &r);
   printf("%f %f\n", r*r*3.141592653589, 2*r*3.141592653589);
   return (0);
}
