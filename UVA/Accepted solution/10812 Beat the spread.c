#include<stdio.h>
int main()
{
	int t,i,s,d,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
    	scanf("%d%d",&s,&d);
    	if(s>=d&&(s+d)%2==0)
        {
    	b=(s-d)/2;
    	a=s-b;
    	printf("%d %d\n",a,b);
        }
        else
    	printf("impossible\n");

    }
    return 0;
}
