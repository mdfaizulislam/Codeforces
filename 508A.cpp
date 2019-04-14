#include <iostream>

using namespace std;

int main()
{
    int n, k, p=0;
    cin >> n >> k;
    char str[100000];
    cin >> str;
    int visited[26]={0};
    for( int i = 0 ; i < n ; i++)
    {
        p=str[i]-'A';
        visited[p]++;
    }
    p=visited[0];
    for( int i = 1; i < k ; i++ )
    {
        if( visited[i] < p )
            p=visited[i];
    }
    cout << p*k;
    return 0;
}
