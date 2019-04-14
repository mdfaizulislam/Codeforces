#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    int arr[3001];
    for( int i  = 0; i < n ; i++ )
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int c=0;
    for( int i = 1 ; i < n ;i++)
    {
        if( arr[i] == arr[i-1] )
        {
            arr[i]++;
            c++;
        }
        else if( arr[i] < arr[i-1] )
        {
            a = arr[i-1] - arr[i];
            arr[i]+=a;
            c+=a;
            arr[i]++;
            c++;
        }
    }
    cout << "\n "<< c;
    return 0;
}