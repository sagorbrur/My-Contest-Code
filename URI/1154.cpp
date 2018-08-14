#include<stdio.h>
int main()
{
	int n,sum=0,count=0;
	float c,d;
	while(scanf("%d",&n)){
		if(n<0) break;
		sum+=n;
		count++;
	}
	c=sum;
	d=count;
	printf("%.2f\n",c/d);
	return 0;
}
