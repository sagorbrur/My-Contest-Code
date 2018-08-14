#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;;
	cin>>n;
	if(n%2==0)
	for(i=n+1;i<=n+12 ;i=i+2)
	{
		cout<<i<<endl;
		
	}
	else{
		for(i=n;i<=n+10;i=i+2)
		{
			cout<<i<<endl;
		}
		
	}
	return 0;
}
