#include<stdio.h>
int main()
{

  unsigned long int n;
  int rem, i, binary,count,rem2,k;
    while(scanf("%lu",&n)==1){
         if(n==0) break;
        binary=0;
        count=0;
        i=1;

    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    k=binary;
    while(k!=0){
      rem2=k%10;
    if(rem2&1==1)
    count++;
    k=k/10;
    }
    printf("The parity of %d is %d (mod 2).\n",binary,count);
    }
   return 0;
}
