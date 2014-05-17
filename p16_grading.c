#include <stdio.h>
char grading(int, int, int);
/***** メイン関数 ********/
int main(void) 
{
    int m, f, r;
    while (scanf("%d %d %d", &m, &f, &r), ~m||~f||~r) {
        printf("%c\n", grading(m, f, r));
    } 
    return 0;
}
/***** 成績付ける関数  ****/
char grading(int m, int f, int r)
{
    int sum = m+f;
    if (m == -1 || f == -1) return 'F';
    else if (sum >= 80) return 'A';
    else if (sum >= 65) return 'B';
    else if (sum >= 50) return 'C';
    else if (sum >= 30) {
        if (r >= 50) return 'C';
        else return 'D';
    }
    else return 'F';
    return 'y'; // error
}
