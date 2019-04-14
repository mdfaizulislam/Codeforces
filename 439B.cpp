#include <iostream>
using namespace std;
#define ll long long

int main() {
	ll a, b;
	cin >> a >> b;
	if (a == b) {
		cout << 1;
	}
	else {
		ll diff = b - a;
		if (diff == 1) {
			cout << b % 10;
			return 0;
		}
		else {
			ll last_digit=1;
			for (++a; a <= b; a++) {
				last_digit *= a % 10;
				if (last_digit % 5 == 0) {
					cout << 0;
					return 0;
				}
			}
			cout << last_digit % 10;
		}
	}
	return 0;
}