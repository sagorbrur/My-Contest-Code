#include<stdio.h>
long long fac(int n){
	if(n==0) return 1;
	return n*fac(n-1);
}
int main(){
	int m,n;
	long long int sum;
	while(scanf("%d%d",&m,&n)!=EOF){
		sum=fac(m)+fac(n);
		printf("%lld\n",sum);
	}
	return 0;
}
