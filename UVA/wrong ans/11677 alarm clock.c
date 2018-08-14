#include<stdio.h>
int main()
{
    int h,m,h1,h2,m1,m2,alarm;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==1)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
        break;
        else if(h2>h1&&m2>m1)
        {
           h=h2-h1;
           m=m2-m1;
           alarm=h*60+m;
           printf("%d\n",alarm);
        }
        else if(h2>h1&&m2<m1)
        {
            h=h2-(h1+1);
            m=(m2+60-m1);
            alarm=h*60+m;
            printf("%d\n",alarm);
        }
        else if(h2<h1&&m2>m1)
        {

            h=(h2+23)-h1;
            m=m2-m1;
            alarm=h*60+m;
            printf("%d\n",alarm);
        }
        else
        {
            h=(h2+32)-(h1+1);
            m=(m2+60)-m1;
            alarm=h*60+m;
            printf("%d\n",alarm);
        }
    }
    return 0;
}
