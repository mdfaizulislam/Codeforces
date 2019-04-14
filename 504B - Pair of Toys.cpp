#include<iostream>
#include<cstdio>
#include<malloc.h>
#include<algorithm>
using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define abs(a)		((a)<0?-(a):(a))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long
ll n, k;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n >> k;
	if (k <= n)
		cout <<((k-1) >> 1);
	else {
		ll mx = n;
		ll mn = k-n;
		ll ans = (mx - mn + 1) >> 1;
		cout << max(0, ans);
	}
	return 0;
}
