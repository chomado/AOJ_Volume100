#include <stdio.h>
#include <string.h>
int solve(void);
 
int main(void)
{
    while (solve());
    return 0;
}
 
int solve(void)
{
    int n, i, j=0, cut;
    char cards[201];
    char left[201];
    char right[201];
 
    /* input */
    scanf("%s", cards); // カードの並び方入力
 
    if (cards[0]=='-') return 0; // 終了条件
 
    scanf("%d", &n); // シャッフルの回数入力
    while (n--) // シャッフルの回数ぶんループ        
    {
        /* init */
        memset(left, '\0', sizeof(left));
        memset(right, '\0', sizeof(right));
        scanf("%d", &cut); // どこで切るか(何枚取るか)入力
        for (i=0; i<cut; i++) {
            left[i] = cards[i]; // 後ろに回るカタマリ
        }
        for (i=0; i < strlen(cards)-cut; i++) {
            right[i] = cards[i+cut];
        }
        strcat(right, left);
        strcpy(cards, right);
    }
    printf("%s\n", cards);
     
    return 1;
 
}
