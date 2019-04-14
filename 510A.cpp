#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll n, m, mn=1e7, mx=-1;
    ll arr[110];
    cin >> n >> m;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i];
        mx=max(arr[i],mx);
    }
    mx+=m;

    sort(arr, arr + n);
    int l = 0;
    while( m != 0 )
    {
        l = 0;
        while( arr[l] <= arr[n-1] && m != 0 && l < n )
        {
            if( arr[l] == arr[n-1] )
            {
                m--;
                arr[l]++;
                //mn=arr[l];
            }
            else if( arr[l] < arr[n-1] && arr[n-1] - arr[l] <= m )
            {
                m-=arr[n-1]-arr[l];
                arr[l]+=arr[n-1]-arr[l];
            }
            else if( arr[l] < arr[n-1] && arr[n-1] - arr[l] >  m )
            {
                arr[l]+=m;
                m=0;
            }
            l++;
        }
    }
    sort(arr, arr+n);
    mn=arr[n-1];
    cout << mn << " " << mx << "\n";
    return 0;
}
