#include<stdio.h>
int main()
{
    int t;
    unsigned long long a,b;
    scanf("%d",&t);
    while(t--){
    scanf("%llu / %llu",&a,&b);
    if(a>b)
    printf("%llu / %llu\n",a/b,b/b);
    else if(a==b)
    printf("%llu / %llu\n",a/a,b/b);
    else
    printf("%llu / %llu\n",a/a,b/a);
    }
    return 0;
}
