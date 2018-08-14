#include<stdio.h>
int main()
{
	int t,i,sum,a,b;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&sum);
		a=sum/2;
		b=sum-a;
		printf("%d %d\n",a,b);
	}
	return 0;
}
