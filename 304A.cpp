#include <iostream>

using namespace std;

int main()
{
    long long n,w,k;
    cin >> k >> n >> w;
    w = 0.5*k*w*(w+1);
    if( n >= w )
        cout << 0;
    else
        cout << w-n;
    return 0;
}
