
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        else
        printf("1/%d\n",n);
    }
    return 0;
}
