#define MAX 1024
 
#include <stdio.h>
#include <string.h>
 
void char_to_int(char *, int *);
 
int main(void)
{
  int i=0;
  int sum=0;
 
  char cNum[MAX];
  int num[MAX];
   
   while (1)
  {
       /* 初期化 */
        memset(cNum, '\0', MAX);
        for (i=0; i<MAX; i++) num[i] = 0;
        scanf("%s", cNum);
        if (!(strcmp(cNum, "0"))) break;
        sum = 0;
        char_to_int(cNum, num);
        for (i=0; i<strlen(cNum); i++)
            sum += num[i];
        printf("%d\n", sum);
    }
  return 0;
}
 
// "1234" -> {1, 2, 3, 4}
void char_to_int(char cNum[MAX], int num[MAX])
{
    int i;
 
    for (i=0; i<strlen(cNum); i++)
        num[i] = (int)cNum[i] - (int)'0';
 
}
