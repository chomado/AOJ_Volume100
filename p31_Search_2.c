#include <stdio.h>
#include <stdlib.h>
#define MAX 100001
 
int s[MAX], t[MAX/2];
 
int compare(const void *a, const void *b)
{     
    return *(int*)a - *(int*)b;
}
void input(int input[MAX], int max)
{
    int i;
    for (i=0; i<max; i++) {
        scanf("%d", &input[i]);
    }
    qsort(input, max, sizeof(int), compare);
}
int check(int ns, int nt)
{
    int counter = 0;
    int i, j;
    for (i=0; i<nt; i++)
    {
        for (j=0; j<ns; j++) {
            if (t[i]==s[j]) {
                counter++;
                i++;
            } 
            else if (s[j] > t[i]) break;
        }
    }
    return counter;
}
int main(void)
{
    int ns, nt;
    scanf("%d", &ns);
    input(s, ns);
    scanf("%d", &nt);
    input(t, nt);
    printf("%d\n", check(ns, nt));
    return 0;
}
