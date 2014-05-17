#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
int main(void)
{
    int a, b, C; // 辺の長さa, 辺の長さb, 角度c
    scanf("%d %d %d", &a, &b, &C);
 
    double c = C * PI / 180.0;
 
    double s, l, h; // 三角形の面積 S、周の長さ L, a を底辺としたときの高さ h
 
    s = a * b * sin(c) / 2;
    l = a + b + sqrt(a*a + b*b - 2 * a * b * cos(c));
    h = b * sin(c);
 
    printf("%lf\n%lf\n%lf\n", s, l, h);
 
    return 0;
}
