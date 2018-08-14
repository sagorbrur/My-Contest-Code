#include<stdio.h>
int main()
{
	int t,v;
	float fuel;
	scanf("%d%d",&t,&v);
	fuel=(float)(t*v)/12;
	printf("%.3f\n",fuel);
	return 0;
}
