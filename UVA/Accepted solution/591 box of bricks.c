#include<stdio.h>
int main()
{
    int n,a[102],i,j,k,sum,set=0,count;
    while(scanf("%d",&n)==1){
    if(n==0) break;
    set++;
    sum=0;
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    k=sum/n;
    for(j=0;j<n;j++)
    {
       if(k<a[j])
       count=count+a[j]-k;
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,count);
    }
    return 0;
}
