#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,a,b,i,sum=0;
	cin>>a>>b;
	x=abs(a);
	y=abs(b);
	if(x<y){
	for(i=x;i<=y;i++){
		if(i%2!=0)
		sum+=i;
	}
}
else
{
	for(i=y;i<=x;i++){
		if(i%2!=0)
		sum+=i;
	}
}
	cout<<sum<<endl;
	return 0;
}
