#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char st[101];
    cin >> st;
    int length;
    length = strlen(st);
    int t=0;
    for( int i = 0 ; i < length ; i++ )
        if( st[i] == '8' )
            t++;
    if( t !=  0 )
    {
        if( length / 11 <= t )
            cout << length/11;
        else
            cout << t;

    }
    else
        cout << 0;

    return 0;
}
