#include<stdio.h>
int main()
{
    unsigned long long int n,res;
    while(scanf("%llu",&n)==1)
    {
        if(n<3) break;
        else if(n%2==0)
        {
         res=(n*(n-2)*((2*n)-5))/24;
         printf("%llu\n",res);
        }
        else
        {
            res=((n-1)*(n-3)*((2*n)-1))/24;
            printf("%llu\n",res);
        }
    }
    return 0;
}
