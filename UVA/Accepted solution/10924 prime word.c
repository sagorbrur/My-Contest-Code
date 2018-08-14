#include<stdio.h>
#include<string.h>
int main()
{

    char s[35];
    int i,sum,k,l;
    while(scanf("%s",s)!=EOF)
    {
        sum=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        if(s[i]>64&&s[i]<91)
        sum=sum+s[i]-38;
        else if(s[i]>96&&s[i]<123)
        sum=sum+s[i]-96;
        k=1;
        for(i=2;i<=sum/2;i++)
        if(sum%i==0)
        {
            k=0;
            break;
        }
        if(k==1)
        printf("It is a prime word.\n");
        else
        printf("It is not a prime word.\n");


    }
    return 0;
}
