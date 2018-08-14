#include<stdio.h>
int main(){
	long long int n,i,caseno=0,cases,fun[1005];
	scanf("%lld",&cases);
	while(cases--){
		scanf("%lld%lld%lld%lld%lld%lld%lld",&fun[0],&fun[1],&fun[2],&fun[3],&fun[4],&n);
		for( i=6;i<=n;i++){
			fun[i]=(fun[i-1]+fun[i-2]+fun[i-3]+fun[i-4]+fun[i-5]+fun[i=6])%10000007;
		}
		printf("Case %lld: %lld\n",++caseno,fun[n]%10000007);
	}
	return 0;
}
