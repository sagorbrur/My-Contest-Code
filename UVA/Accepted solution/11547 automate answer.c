#include<stdio.h>
int main()
{
    int t,i,n,x,rem;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        x=(n*(567/9)+7492)*(235/47)-498;
        if(x>0){
        x=x/10;
        rem=x%10;

        printf("%d\n",rem);
        }
        else
        {
            x=x/10;
            rem=x%10*(-1);
            printf("%d\n",rem);
        }
    }
    return 0;
}
