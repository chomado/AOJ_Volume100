#include <stdio.h>
#include <string.h>
char key[11];
char word[32];
 
int main(void)
{
    int counter = 0;
     
    scanf("%s ", key);
 
    while (scanf("%s", word), strcmp(word, "END_OF_TEXT"))
        if (!(strcasecmp(word, key))) counter++;
 
    printf("%d\n", counter);
    return 0;
}
