#include <iostream>

using namespace std;

long long Min( long long a, long long b)
{
    return a < b ? a : b;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    long long gcd=1;
    long long g=Min(a,b);
    for( long long i = 1; i <= g; i++)
        gcd*=i;
    cout << gcd;
    return 0;
}
