#include<stdio.h>
int is_prime (long int x)
 { 
 	int i;
    for ( i = 2; i * i <= x; i++)
    {
    if (x % i == 0)
    return 0;
    }
    return 1;
  }
  int rev(unsigned int n)
  {
   unsigned	int reverse=0;
  while(n!=0)
		{
			reverse=reverse*10;
			reverse=reverse+n%10;
			n=n/10;	
		}
		return reverse;
}
int main()
{
    long int n;
   while(scanf("%ld",&n)==1)
   {
   	if(is_prime(n)!=1)
   	printf("%ld is not prime.\n",n);
   	else
   	{
   		int n1=rev(n);
   		if(is_prime(n1)==1&&n1!=n)
   		printf("%ld is emirp.\n",n);
   		
   		else
   		printf("%ld is prime.\n",n);
   	}
   }
    return 0;
}
