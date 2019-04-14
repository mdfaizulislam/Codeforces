#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	long long res = 0;
	int prev = -1, v;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v;

		if (v == 1) {
			if (prev == -1) {
				res = 1;
			}
			else {
				res *= i - prev;
			}
			prev = i;
		}
	}
	cout << res;

	return 0;
}