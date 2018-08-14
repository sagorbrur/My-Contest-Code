#include<stdio.h>
#include<math.h>

int check_prime(int);

main()
{
   int t,i,n, result;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
   scanf("%d",&n);

   result = check_prime(n);

   if ( result == 1 )
      printf("Prime\n");
   else
      printf("Not Prime\n");
    }
   return 0;
}

int check_prime(int a)
{
   int c;

   for ( c = 2 ; c <=a/2  ; c++ )
   {
      if ( a%c == 0 )
	 return 0;
   }
   if ( c == a )
      return 1;
}
