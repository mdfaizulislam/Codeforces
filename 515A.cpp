#include <iostream>

using namespace std;
typedef unsigned long long ull;
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    ull L, v, st, en, left, right;
    cin >> t;
    while( t-- ){
        cin >> L >> v >> st >> en;
        left = (st-1)/v;
        right = L/v - en/v;
        cout << left+right << "\n";
    }
    return 0;
}
/*



*/
