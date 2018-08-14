#include<stdio.h>
long reverse(int n)
{
   int rev=0;
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    return rev;
}
long is_prime(int n)
{
    int temp,i;
    temp=reverse(n);
    if(temp==1) return 1;
    for(i=2;i<temp-1;i++)
    {
        if(temp%i==0)
        return 0;
    }
    if(i==temp)
    return 1;
}
int main()
{
    long int n,r,p;
    while(scanf("%ld",&n)==1){
     r=reverse(n);
     p=is_prime(n);
     if(r==n&&p==1){
     printf("%ld\n",n*2);
     break;
     }
     else
     printf("%ld\n",n*2);
    }
    return 0;
}
