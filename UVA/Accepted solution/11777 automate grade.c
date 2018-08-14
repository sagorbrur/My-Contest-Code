#include<stdio.h>
int main()
{
    int t,i,t1,t2,f,a,c1,c2,c3,sum,total;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        if(c1<=c2 && c1<=c3)
        sum=(c2+c3)/2;
        else if(c2<=c1 && c2<=c3)
        sum=(c1+c3)/2;
        else if(c3<=c1 && c3<=c2)
        sum=(c1+c2)/2;
        total=t1+t2+f+a+sum;

        if(total>=90)
        printf("Case %d: A\n",i);
        else if(total>=80&&total<90)
        printf("Case %d: B\n",i);
        else if(total>=70&&total<80)
        printf("Case %d: C\n",i);
        else if(total>=60&&total<70)
        printf("Case %d: D\n",i);
        else
        printf("Case %d: F\n",i);

    }
    return 0;
}
