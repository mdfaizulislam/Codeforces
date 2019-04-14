#include<iostream>
using namespace std;
#define ull unsigned long long

int main() {
	ios_base::sync_with_stdio(false);
	//factors(18);
	ull n, a, b;
	cin >> n >> a >> b;

	n *= 6;
	if (a*b >= n) {
		cout << a*b << "\n" << a << " " << b;
		return 0;
	}

	bool f = false;
	if (a > b) {
		ull t = a;
		a = b;
		b = t;
		f = true;
	}
	ull sqArea = 1e18, a1, b1, tempb;
	for (ull i = a; i*i <= n; i++) {
		tempb = n / i;
		if (tempb*i < n)
			tempb++;
		if (tempb < b)
			continue;
		if (tempb*i < sqArea) {
			sqArea = tempb*i;
			a1 = i;
			b1 = tempb;
		}
	}

	if (f) {
		ull t = a1;
		a1 = b1;
		b1 = t;
	}
	cout << sqArea << "\n" << a1 << " " << b1;
	return 0;
}