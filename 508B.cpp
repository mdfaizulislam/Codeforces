#include <iostream>

using namespace std;

int gcd( int a, int b)
{
    if(!b)
        return a;
    return gcd(b,a%b);
}
int main()
{
    long int n;
    cin >> n;
    long int S1=0, S2=0, l,r;
    if(n%2)
    {
        n=n/2;
        S1=n*(n+1);
        l=n;
        n++;
        S2=n*n;
        r=n;
    }
    else
    {
        n=n/2;
        l=r=n;
        S1=n*(n+1);
        S2=n*n;
    }
    int g;
    g=gcd(S1,S2);
    if( g > 1 )
    {
        cout << "Yes\n" << l <<" ";
        for( int i = 1 ; i <= l ; i++)
            cout <<2*i<<" ";
        cout <<"\n"<<r<<" ";
        for( int i = 1 ; i <= r ; i++)
            cout << 2*i-1 <<" ";
    }
    else
        cout << "No";
    return 0;
}
