#include<iostream>
using namespace std;
int main()
{
	int n[5];
	int i,count=0;
	for(i=0;i<5;i++)
	cin>>n[i];
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		count++;
	}
	cout<<count<<" valores pares"<<endl;
	return 0;
	
}
