#include<iostream>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n){
    if(n<0) break;
    cout<<100/n<<"%"<<endl;
    }
    return 0;
}
