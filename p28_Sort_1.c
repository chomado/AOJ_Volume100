#include <stdio.h>
#define MAX 1024
void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort(int input[MAX], int n)
{
    int flag = 1;
    int i;
    while (flag)
    {
        flag = 0;
        for (i=0; i<n-1; i++)
        {
            if ((input[i] - input[i+1]) > 0)
            {
                swap(&input[i], &input[i+1]);
                flag = 1;
            }
        }
    }
}
int main(void)
{
    int n, i;
    int input[MAX] = {};
    /* input */
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d ", &input[i]);
    sort(input, n);
    /* output */
    for (i=0; i<n-1; i++)
        printf("%d ", input[i]);
    printf("%d\n", input[n-1]);
    return 0;
}
