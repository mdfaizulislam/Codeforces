#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, m, a,b, mn=1e7;
    cin >> n >> m;
    for( int i = 0 ;i < n ; i++ )
    {
        cin >> a >> b;
        if( a/b < mn )
            mn = a/b;
    }
    printf("%.10lf",mn*m);
    return 0;
}
