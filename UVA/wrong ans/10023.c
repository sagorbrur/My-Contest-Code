#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    unsigned long long int x,y;
    scanf("%d",&T);
    printf("\n");
    for(i=1;i<=T;i++){
    scanf("%llu",&y);
    x=sqrt(y);
    printf("%llu\n",x);
    printf("\n");
    }
    return 0;
}
