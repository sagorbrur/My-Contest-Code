#include <iostream>
#include <iomanip>
using namespace std;
long double factorial (long double n)
{
    if(n==0) return 1;
    return(n*factorial(n-1));
}
int main ()
{
    long double m, n;
    while (cin >> m >> n&&m!=0&&n!=0)
    {
        long double r = (factorial(m))/(factorial(m-n)*factorial(n));
        cout << m << " things taken " << n << " at a time is " << fixed << setprecision(0) << r << " exactly." << endl;
    }
    return 0;
}

