#include <stdio.h>
#define MAX (a,b)? a:b
#define MIN (a,b)? a:b
int main()
{
  int t,a,b,c;
  scanf("%d",&t);
  while(t--){
  scanf("%d%d",&a,&b);
  c=MAX/MIN;
  if(MAX%MIN==0){
  printf("%d\n",c);
  }
  else
  printf("NO SOLUTION\n");
  }
  return 0;
}

