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
int main()
{
	long int n,p,rev,k;
	while(scanf("%ld",&n)==1){
	p=is_prime(n);
	k=n;
	rev=0;
	if(p==1)
	{
		while(k!=0)
		{
			rev=rev*10;
			rev=rev+k%10;
			k=k/10;	
		}
		if(is_prime(rev)==1)
		printf("%ld is emirp.\n",n);
		else
		printf("%ld is prime.\n",n);
	}
	else	
	printf("%ld is not prime.\n",n);
}
	return 0;
}
