#include<stdio.h>
int main()
{
	int t,i,a,b;
	float result;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&a,&b);
		if(b==0)
		printf("divisao impossivel\n");
		else
		{
			result=(float)a/b;
			printf("%.1f\n",result);
		}
		

	}
	return 0;
}
