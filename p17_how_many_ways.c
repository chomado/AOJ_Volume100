#include <stdio.h>
int check(int, int, int, int);
int solve(int, int);
/***** メイン関数 *****/
int main(void)
{
    int n, sum;
    while (scanf("%d %d", &n, &sum), n || sum) {
        printf("%d\n", solve(n, sum));
    }
    return 0;
}
/***** 関数群 *********/
int check(int a, int b, int c, int sum)
{
    return (a+b+c == sum) ? 1 : 0;
}
int solve(int n, int sum)
{
    int i, j, k;
    int counter = 0;
    for (i=1; i<=n-2; i++) 
        for (j=i+1; j<=n-1; j++) 
            for (k=j+1; k<=n; k++) 
                if (check(i, j, k, sum)) counter++;
    return counter;
}
