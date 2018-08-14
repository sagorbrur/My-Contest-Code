#include<stdio.h>
long binary(int n)
{
    int rem,i=1,b=0;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        b=b+rem*i;
        i=i*10;
    }
    return(b);
}
int main()
{
    long int n,rem,count;
    while(scanf("%ld",&n)==1)
    {
        if(n==0) break;
        count=0;
        while(binary(n)!=0){
      rem=binary(n)%10;
    if(rem&1==1)
    count++;
    binary(n)=binary(n)/10;
        }

      printf("The parity of %ld is %ld (mod 2).\n",binary(n),count);
    }

}
