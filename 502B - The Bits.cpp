#include<iostream>
using namespace std;
#define ll long long
ll ans[4] = { 0 };
char a[100001];
char b[100001];
char c1[] = { '0', '0', '1', '1' };
char c2[] = { '0', '1', '0', '1' };

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cin >> a;
	cin >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (c1[j] == a[i] && c2[j] == b[i])
				ans[j]++;
		}
	}

	cout << ans[0] * ans[2] + ans[1] * ans[2] + ans[3] * ans[0];

	return 0;
}