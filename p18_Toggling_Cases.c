#include <stdio.h>
int check(char c)
{
    if (65 <= c && c <= 90) return 1;
    else if (97 <= c && c <= 122) return 0;
    else return 2;
}
int main(void)
{
    char c;
    while (scanf("%c", &c), c != '\n')
        printf("%c", (check(c) == 1) ? c + ' ' : (check(c) ? c : c - ' '));
    putchar('\n');
    return 0;
}
