#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100],k[100];
    int i,j,a=0;
    scanf("%s%s",s,t);
    for(i=strlen(s)-1,j=0;i+1!=0;--i,++j)
    {
        k[j]=s[i];
    }
    k[j]='\0';
    strcpy(s,k);
    while(t[a]==k[a]&&t[a]!='\0')
    a++;
    if(t[a]==k[a])
        printf("YES\n");
    else
    printf("NO\n");
    return 0;

}
