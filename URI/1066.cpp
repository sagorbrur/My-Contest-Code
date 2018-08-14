#include<iostream>
using namespace std;
int main()
{
	int n[5];
	int i,count=0,count2=0,count3=0,count4=0;
	for(i=0;i<5;i++)
	cin>>n[i];
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		count++;
		if(n[i]%2!=0)
		count2++;
		if(n[i]>0)
		count3++;
		if(n[i]<0)
		count4++;
	}
	cout<<count<<" valor(es) par(es)"<<endl;
	cout<<count2<<" valor(es) impar(es)"<<endl;
	cout<<count3<<" valor(es) positivo(s)"<<endl;
	cout<<count4<<" valor(es) negativo(s)"<<endl;
	return 0;
	
}
