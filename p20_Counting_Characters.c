#include <stdio.h>
int main(void) {
   int i;
   int num;
   char ch;
   int counter[26]={0};
   while(scanf("%c", &ch) != EOF) {
      if(ch>='A' && ch<='Z')
         counter[ch - 'A']++;
      else if (ch>='a' && ch<='z')
         counter[ch - 'a']++;
   }
   for(i=0; i<26; i++) 
      printf("%c : %d\n", i+'a', counter[i]);
   return (0);
}
