#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n[6];
	int i,count=0,sum=0;
	float avg;
	for(i=0;i<6;i++)
	cin>>n[i];
	for(i=0;i<6;i++)
	{
		if(n[i]>=0){
		sum=sum+i;
		count++;
	}
	}
	avg=(sum/count);
	cout<<count<<" valores positivos"<<endl;
	printf("%.1f\n",avg);
	return 0;
	
}
