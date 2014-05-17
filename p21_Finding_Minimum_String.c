#include <stdio.h>
#include <string.h>
#define MAX 32

int main(void)
{
  int no, i,j;
  char word[MAX][MAX];
  int min = 0; // 辞書列で一番先頭になる要素のIDを記憶しておく

  //初期化
  for (i=0; i<MAX; i++)
    {
      for (j=0; j<MAX; j++)
        word[i][j] = '\0';
    }

  scanf("%d", &no);

  for (i=0; i<no; i++)
      scanf("%s", word[i]);
  
  for (i=1; i<no; i++)
      if (strcmp(word[min], word[i]) > 0)
        min = i;

  printf("%s\n", word[min]);

  return 0;
}
