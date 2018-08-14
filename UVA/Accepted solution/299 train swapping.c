#include<stdio.h>
int main()
{
    int t,k,n,i,j,c,a[100],swap;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<n;i++)
        for(j=n-1;j>=i;j--)
        if(a[j-1]>a[j])
        {
            c++;
            swap=a[j-1];
            a[j-1]=a[j];
            a[j]=swap;

        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
        return 0;
}
