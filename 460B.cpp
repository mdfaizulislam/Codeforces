#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll prft[10001];
void perfect( ll k )
{
    ll n, ite=0, sum;
    for( ll i= 18 ; ite < k ; i++ )
    {
        n = i;
        sum=0;
        while( n != 0 )
        {
            sum+=n%10;
            n/=10;
        }
        if( sum == 10 )
        {
            prft[ite++]=i;
            i+=8;
        }
    }
}
int main()
{
    //freopen("output.txt","w",stdout);

    perfect(10009);
    int k;
    cin >>k;
    cout << prft[k-1];
    return 0;
}
