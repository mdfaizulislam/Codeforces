#include<iostream>
using namespace std;
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll MAX = 2e5 + 5;
ll n;
ll arr[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	ll mx = -1;
	ll mn = 9e10 + 10;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}

	if (mx == mn) {
		cout << mx-mn << " " << (n*(n - 1)>>1);
	}
	else {
		ll min_count = 0, max_count=0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == mn)
				min_count++;
			if (mx == arr[i])
				max_count++;
		}
		cout << mx-mn << " " << min_count*max_count;
	}
	return 0;
}