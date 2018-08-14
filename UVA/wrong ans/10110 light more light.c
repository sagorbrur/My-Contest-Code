#include<stdio.h>
int main()
{
    unsigned long int a,n;
    int t;
    while(t--){
    scanf("%lu",&n);
    for(a=0;a<=n;a++)
    {
        if(n==a*a)
        printf("yes\n");
        else
        printf("no\n");
    }
    }
    return 0;
}
