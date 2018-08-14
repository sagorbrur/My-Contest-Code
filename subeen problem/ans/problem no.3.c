#include<stdio.h>
int main()
{
    int n,i;
    float l,w,h;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%f %f %f",&l,&w,&h);
        printf("%f\n",l*w*h);
    }
    return 0;
}
