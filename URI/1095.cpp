#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,j;
	for(j=60;j>=0;j-=5)
	for(i=1;j!=0;i+=3)
	printf("I=%d J=%d\n",i,j);	
		
	return 0;
}
