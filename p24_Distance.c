#include <stdio.h>
#include <math.h>
struct point {
    double x;
    double y;
} point;
 
int main(void)
{
    struct point point[2];
    scanf("%lf %lf %lf %lf", 
        &point[0].x, &point[0].y, &point[1].x, &point[1].y);
     
    double x = point[0].x - point[1].x;
    double y = point[0].y - point[1].y;
 
    printf("%lf\n", sqrt(x*x + y*y));
     
    return 0;
}
