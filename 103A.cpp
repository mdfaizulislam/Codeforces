#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[101];
    cin >> n;
    for( int i = 0 ; i < n ; i++ )
        cin >> arr[i];

    int mx=arr[0], mx_index=0, mn=arr[0], mn_index=0;
    for( int i = 1 ; i < n ; i++ )
    {
        if( arr[i] > mx ){
            mx = arr[i];
            mx_index = i;
        }
        if( arr[i] <= mn ){
            mn = arr[i];
            mn_index = i;
        }
    }
    if( mn_index < mx_index )
        cout << mx_index + (n-mn_index-1) -1;
    else
        cout << mx_index + (n-mn_index-1);
    return 0;
}
