#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll gcd(ll a , ll b)
{
    if(!b)
        return a;
    return gcd(b,a%b);
}

ll manual(ll a, ll b, ll x, ll y)
{
    ll g=gcd(x,y);
    x/=g;
    y/=g;
    ll Min = ((a/x) < (b/y) )? (a/x) : (b/y);
    return Min;
}

ll UsingBitsCpp( ll a, ll b, ll x, ll y)
{
    ll gc = __gcd(x, y);
    x /= gc;
    y /= gc;
    return min(a/x, b/y);
}
int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << "Manual "<< manual(a,b,x,y) << "\n";
    cout << "using bits "<< UsingBitsCpp(a,b,x,y) << "\n";
    return 0;
}
