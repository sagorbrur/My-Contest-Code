#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>=b+c)
    cout<<"NAO FORMA TRIANGULO"<<endl;
    else if(a*a==b*b+c*c)
    cout<<" TRIANGULO RETANGULO"<<endl;
    else if(a*a>b*b+c*c)
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if(a*a<b*b+c*c)
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    else if(a==b==c)
    cout<<"TRIANGULO EQUILATERO"<<endl;
    else
    cout<<"TRIANGULO ISOSCELES"<<endl;
    return 0;
}

