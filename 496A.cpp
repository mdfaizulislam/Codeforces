#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[1001];
    cin >> n;
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

    int stairs[1001]={0};

    int freq=0;
    int stair_count=0;
    for( int i = 0 ; i < n ; i++ )
    {
        freq++;
        if(arr[i+1] <= arr[i] || i + 1 == n ){
            stairs[stair_count++]=freq;
            freq=0;
        }
    }
    cout << stair_count << "\n";
    for( int i = 0 ; i < stair_count ; i++ )
        cout << stairs[i] << " ";
    return 0;
}
