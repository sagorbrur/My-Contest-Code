#include<iostream>
using namespace std;
int main()
{
	int n,first=0,second=1,next,c;
	cin>>n;
	for(c=0;c<n;c++)
	{
		if(c<=1)
		next=c;
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<" ";
		
	}
	return 0;
}
