#include<stdio.h>
int main()
{
	int n[6];
	int i,count=0;
	for(i=0;i<6;i++)
	scanf("%d",&n[i]);
	for(i=0;i<6;i++){
	if(n[i]>=0)
	count++;
}
printf("%d\n",count);
return 0;
}
