#include<iostream>
using namespace std;
int main()
{
	int n[6];
	int i,count=0;
	for(i=0;i<6;i++)
	cin>>n[i];
	for(i=0;i<6;i++)
	{
		if(n[i]>=0)
		count++;
	}
	cout<<count<<" valores positivos"<<endl;
	return 0;
	
}
