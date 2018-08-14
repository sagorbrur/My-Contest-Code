#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],t[20];
    int i,j;
    gets(s);
   for(i=strlen(s)-1,j=0;i+1!=0;--i,++j)
   {
       t[j]=s[i];
   }
   t[j]='\0';
   strcpy(s,t);
   puts(s);
    return 0;
}
