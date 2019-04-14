#include<iostream>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	ll odd_min = 1e15, odd_count = 0;
	ll n;
	ll sum = 0;
	cin >> n;
	ll a;
	for (ll i = 0; i < n; i++) {
		cin >> a;
		sum += a;

		if (a & 1) {
			odd_count++;
			odd_min = min(odd_min, a);
		}
	}

	if (odd_count & 1) {
		cout << sum - odd_min;
	}
	else {
		cout << sum;
	}
	return 0;
}