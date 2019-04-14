#include <bits/stdc++.h>

using namespace std;
int arr[100005];

int Binary_Search( int n, int x)
{
    int first=1, last=n, mid, pos =-1;


     while( first <= last )
     {
         mid = (first+last)/2;
         if( arr[mid] == x )
         {
             pos=mid;
             first = mid+1;
         }
         else if( arr[mid] > x )
            last = mid-1;
         else
            first=mid+1;
     }

     if( pos != -1)
        return pos;
     else
        return first-1;
}
int main()
{
    int n;
    cin >> n;
    for( int i = 1 ; i <= n ; i++)
    {
        cin >>arr[i];
    }
    sort(arr, arr+n+1);

    int q, m, ans;
    cin >> q;
    while( q-- )
    {
        cin >> m;
        ans = Binary_Search(n,m);
        cout << ans << "\n";
    }
    return 0;
}
