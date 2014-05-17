#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001
int compare(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int main(void)
{
    int n, i;
    int input[MAX] = {};
    /* input */
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d ", &input[i]);
    qsort(input, n, 4, compare);
    /* output */
    for (i=0; i<n-1; i++)
        printf("%d ", input[i]);
    printf("%d\n", input[n-1]);
    return 0;
}
