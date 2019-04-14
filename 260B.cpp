#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
ull p[100][100]={0};
ull power( ull x, ull y ){
    if( p[x][y] != 0 )
        return p[x][y];
    if( y  == 0 )
        return 1;
    ull temp = power(x,y/2);
    if( y%2 == 0 )
        return p[x][y] = temp*temp;
    else
    {
        if( y > 0 )
            return p[x][y] = x*temp*temp;
        else
            return (temp*temp)/x;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    string str;
    ull length, last, second_last, n;
    cin >> str;
    length = str.size();
    if( length < 2 )
        n = str[length-1] - '0';
    else{
        last = str[length-1];
        second_last = str[length-2];
        n = second_last*10+last;
    }
    if( n%4 == 0 ){
        cout << "4";
    }
    else
        cout << "0";
    return 0;
}
