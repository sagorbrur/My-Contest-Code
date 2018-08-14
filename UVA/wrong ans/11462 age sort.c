#include<stdio.h>
long int a[2000005],i,n,j,pos,swap;
int main()
{
    while(scanf("%ld",&n)==1){
        if(n==0) break;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);

    for(i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
            pos=j;
        }
        if(pos!=i)
        {
            swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
        }
    }
    for(i=0;i<n;i++)
    printf("%ld ",a[i]);
    printf("\n");
    }
    return 0;

}
