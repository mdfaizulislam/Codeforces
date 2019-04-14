#include <iostream>

using namespace std;
// f(i)|y = f(i-1)|x + f(i+1)
// f(i+1) = f(i) - f(i-1) |  y - x
long long m = 1e9+7;
typedef long long ll;
int main()
{
    //cout << 1999999998%6;
    ll n;
    ll arr[6];
    cin >> arr[0] >> arr[1] >> n;
    arr[2] = arr[1] - arr[0];
    arr[3] = arr[2] - arr[1];
    arr[4] = arr[3] - arr[2];
    arr[5] = arr[4] - arr[3];
    ll ans = arr[((n-1)%6)]%m;
    ans = ans < 0 ? ans + m : ans;
    cout << ans;
    return 0;
}
