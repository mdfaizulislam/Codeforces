#include <iostream>
#include <cstring>
using namespace std;
char a[200001];
char b[200001];

int main()
{
    cin >> a >> b;
    int ans;
    int m = strlen(a);
    int n = strlen(b);
    int same=0;

    int i, j;
    while( 1 )
    {
        i = m - same -1;
        j = n - same -1;

        if( i >= 0 && j >= 0 && a[i] == b[j])
            same++;
        else
            break;

    }
    cout << m+n - 2*same;
    return 0;
}
