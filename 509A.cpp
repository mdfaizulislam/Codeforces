#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[1001]={0};
    cin >> n;
    for( int i = 0 ;i < n ; i++ )
        cin >> arr[i];

    sort(arr, arr+n);
    int ans=0;
    for( int i = 1 ; i < n ; i++ )
        if( arr[i] - arr[i-1] > 1 )
            ans+=arr[i] - arr[i-1]-1;
    cout << ans<<"\n";
    return 0;
}
