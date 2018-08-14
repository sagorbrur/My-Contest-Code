#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,sum=0,d=0;
    char s[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%s",s);
       if(strcmp(s,"donate")==0)
       {
           scanf("%d",&d);
           sum=sum+d;
       }
        else
        printf("%d\n",sum);
    }
    return 0;
}
