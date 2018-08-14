#include <stdio.h>
int main()
{
   char text[100], blank[100];
   int c = 0, d = 0;
   gets(text);

   while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }

   blank[d] = '\0';

   printf("%s\n", blank);

   return 0;
}

#include <stdio.h>
#include <string.h>

void pad(char *s, int length);

int main(void)
{
  char str[80];

  strcpy(str, "this is a test");
  pad(str, 40);
  printf("%d", strlen(str));

  return 0;
}

void pad(char *s, int length)
{
  int l;

  l = strlen(s); /* its length */

  while(l<length) {
    s[l] = ' '; /* insert a space */
    l++;
  }
  s[l]= '\0'; /* strings need to be terminated in a null */
}




