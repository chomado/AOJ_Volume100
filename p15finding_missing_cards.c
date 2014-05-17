#include <stdio.h>
void check(int);
void print(void);
int mark_to_id(char mark);
/************ メイン関数 ***********/
int main(void)
{
    int max;
    scanf("%d", &max);
    check(max);
    print();
    return 0;
}
 
/************ 関数群 **************/
char marks[5] = "SHCD";
int cards[4][14]; // 持っていたら1, 持っていなかったら0が格納される
 
int mark_to_id(char mark)
{
    int id;
    for (id=0; id<4; id++) 
        if (mark == marks[id]) return id;
    return -1;
}
char id_to_mark(int id)
{
    return marks[id];
}
void check(int max)
{
    int i;
    char mark;
    int num;
    for (i=0; i<max; i++) {
        scanf(" %c %d", &mark, &num);
        cards[mark_to_id(mark)][num] = 1;
    }
}
void print(void)
{
    int i, j;
    for (i=0; i<4; i++) 
        for (j=1; j<=13; j++) 
            if (!cards[i][j]) printf("%c %d\n", id_to_mark(i), j);
}
