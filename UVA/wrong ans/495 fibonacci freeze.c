
#include<stdio.h>
unsigned long long fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int main ()
{
  unsigned long long int n;
  while(scanf("%llu",&n)==1){

  printf("The Fibonacci number for %llu is %llu\n",n,fib(n));

  }
  return 0;
}
