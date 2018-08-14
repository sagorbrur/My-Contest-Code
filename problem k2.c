#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,count=0;
    char s[100];
    scanf("%d",&t);
    printf("word\n");
    for(i=1;i<t;i++)
    {
        scanf("%s",s);
    for(j=0;j<strlen(s)-2;++j)
    count++;
    printf("%c%d%c\n",s[0],count,s[(strlen(s)-1)]);
    }
    return 0;
}

