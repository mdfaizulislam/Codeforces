#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100001];
    int lux[100001];
    for( int i = 0 ; i < n ; i++ )
        cin >> arr[i];
    int i=n-1;
    int Max = arr[i];
    lux[i] = 0;
    i--;
    while( i >= 0 )
    {
        if( arr[i] > Max )
        {
            lux[i] = 0;
            Max = arr[i];
        }
        else
        {
            lux[i] = Max - arr[i] + 1;
        }
        i--;
    }

    for( i = 0 ; i < n ; i++ )
        cout << lux[i] << " ";
    return 0;
}
