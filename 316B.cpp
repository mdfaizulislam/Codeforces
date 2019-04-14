#include<iostream>
using namespace std;
#define abs(a) ((a)<0?-(a):(a))
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int n, m, a, left, right;
	cin >> n >> m;
	left = abs(1 - m);
	right = (n - m);
	if (left > right) {
		cout << m - 1;
	}
	else if (right > left) {
		cout << m + 1;
	}
	else {
		if (n == 1)
			cout << 1;
		else
			cout << m - 1;
	}
	return 0;
}