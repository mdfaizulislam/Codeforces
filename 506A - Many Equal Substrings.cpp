#include<iostream>
using namespace std;
int n, k;
char t[55];

int similar() {
	int cnt = 0;
	for (int i = 0; i < n / 2; i++) {
		if (t[i] == t[n - i - 1]) {
			cnt++;
		}
		else {
			break;
		}
	}
	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(false);
	cin >> n >> k;
	cin >> t;
	int cnt = similar();
	cout << t;
	for (int i = 0; i < k - 1; i++) {
		for (int j = cnt; j < n; j++)
			cout << t[j];
	}
	return 0;
}