#include <iostream>
// http://codeforces.com/blog/entry/18696
using namespace std;
bool flag = false;
typedef long long ll;
ll m1, w;

void check( ll m ){

    if( m < w ){
        if( m == w-1 ){
            flag = true;
            return;
        }
        else if( m == 1){
            flag = true;
            return;
        }
        else
            return;
    }
    if( m%w == 0 ){
        check(m/w);
        return;
    }
    if( m%w == 1 ){
        check((m-1)/w);
        return;
    }
    if( m%w == w-1 ){
        check((m+1)/w);
        return;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    cin >> w >> m1;
    check(m1);
    if( flag )
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
