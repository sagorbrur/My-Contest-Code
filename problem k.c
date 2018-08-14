#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,count;
    char s[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        scanf("%s",&s);
        if(strlen(s)<=10)
            printf("%s\n",s);
        else
        {
            printf("%c%d%c\n",s[0],strlen(s)-2,s[(strlen(s)-1)]);
        }

    }
    return 0;
}
