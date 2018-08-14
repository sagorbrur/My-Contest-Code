#include<stdio.h>
int main()
{
    unsigned long long int a,b;
    char c;
    while(scanf("%llu %c %llu",&a,&c,&b)==1){
    if(c=='/')
    printf("%llu\n",a/b);
    else
    printf("%llu\n",a%b);
    }
    return 0;
}
