#include<iostream>
using namespace std;

bool used[102] = { false };
int main() {
	ios_base::sync_with_stdio(false);
	int m, n;
	int l, r;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> l >> r;

		if (l == r)
			used[l] = true;
		else {
			for (int j = l; j <= r; j++)
				used[j] = true;
		}
	}

	int res = 0;
	for (int i = 1; i <= m; i++) {
		if (!used[i])
			res++;
	}
	cout << res << "\n";
	if (res) {
		for (int i = 1; i <= m; i++)
			if (!used[i])
				cout << i << " ";
	}
	return 0;
}