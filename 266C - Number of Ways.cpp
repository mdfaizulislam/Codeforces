#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 500003
#define ll long long
ll arr[MAX];
ll cnt[MAX] = { 0 };
ll n;
ll sum = 0;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum%3 != 0) {
		cout << 0;
		return 0;
	}

	sum /= 3;
	ll ss = 0;
	for (ll i = n - 1; i >= 0; i--) {
		ss += arr[i];
		if (ss == sum)
			cnt[i] = 1;
	}

	for (ll i = n - 2; i >= 0; i--)
		cnt[i] += cnt[i + 1];

	ll res = 0;
	ss = 0;
	for (ll i = 0; i + 2 < n; i++) {
		ss += arr[i];
		if (ss == sum)
			res += cnt[i + 2];
	}
	cout << res;
	return 0;
}