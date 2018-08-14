#include<stdio.h>
int GCD(int a,int b)
{
    int t;
    while(b!=0)
         {
          t=b;
          b=a%b;
          a=t;
         }
         return a;
}
int main()
{
    int n,a,b;
    long int G;
    while(scanf("%d",&n)&&n!=0){
        G=0;
    for(a=1;a<n;a++)
        for(b=a+1;b<=n;b++)
        {
            G=G+GCD(a,b);
        }
        printf("%ld\n",G);
        }
        return 0;
}

