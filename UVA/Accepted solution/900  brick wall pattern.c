#include<stdio.h>
unsigned long long fib(int n)
{
    if(n<=2)
    return n;
    return (fib(n-1)+fib(n-2));
}

int main ()
{
  unsigned long long int n;
  while(scanf("%llu",&n)==1){
  if(n==0) break;
  printf("%llu\n", fib(n));
  }
  return 0;
}
