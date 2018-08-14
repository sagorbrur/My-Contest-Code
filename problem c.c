#include<stdio.h>
int main()
{
    int j,a,b[100];
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            scanf("%d",&b[j]);
        }
        for(j=1;j<=a;j++)
        printf("%d\n",sizeof(b[j]));
}
