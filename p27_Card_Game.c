#include <stdio.h>
#include <string.h>
int taro, hanako;
 
void game(void);
 
int main(void)
{
    int n;
    scanf("%d", &n);
    while (n--) game();
    printf("%d %d\n", taro, hanako);
    return 0;
}
void game()
{
    char s1[101];
    char s2[101];
    scanf("%s %s", s1, s2);
    int n = strcmp(s1, s2);
    if (n > 0) {
        taro += 3;
    } else if (!n) {
        taro++; hanako++;
    } else {
        hanako += 3;
    }
}
