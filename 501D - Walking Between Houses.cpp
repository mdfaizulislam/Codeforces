#include<iostream>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define ll long long
int step(ll curr, ll x) {
	return ((curr - x) > 0 ? curr - x : curr + x);
}

int main() {
	ios_base::sync_with_stdio(false);

	ll n, k, s, l, curr;
	cin >> n >> k >> s;

	if (k > s || k*(n - 1) < s) {
		cout << "NO";
		return 0;
	}
	curr = 1;
	cout << "YES\n";
	while (k>0)
	{
		l = min(n - 1, s - k + 1);
		curr = step(curr, l);
		cout << curr << " ";
		s -= l;
		k--;
	}

	return 0;
}