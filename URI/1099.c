#include<stdio.h>
int main()
{
	int t,i,a,b,j,sum;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	
		scanf("%d%d",&a,&b);
		sum=0;
		if(a>b){
		for(j=b+1;j<a;j++)
		{
			if(j%2!=0)
			sum=sum+j;
		}
 	   }
 	   else
 	   {
 	   		for(j=a+1;j<b;j++)
		{
			if(j%2!=0)
			sum=sum+j;
		}
 	   }
		printf("%d\n",sum);
			
	}
	return 0;
}
