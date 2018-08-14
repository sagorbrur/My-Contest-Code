#include <stdio.h>

int main()
{
   int search, c,array[17]={ 561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973, 75361 };

   while(scanf("%d", &search)==1){
       if(search==0) break;

   for (c = 0; c < 17; c++)
   {
      if (array[c] == search)
      {
         printf("The number %d is a Carmichael number.\n", search);
         break;
      }
   }
   if (c == 17)
      printf("%d is normal.\n", search);
   }

   return 0;
}
