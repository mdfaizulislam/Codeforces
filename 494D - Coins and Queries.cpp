#include <iostream>
#include<vector>
using namespace std;

#define min(a,b) ((a)<(b)?(a):(b))

int v[32] = { 0 };
int d[32] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);

	for(int i = 0; i < 32; i++) {
		d[i] = (1<<i);
	}

	int n, q;

	cin >> n >> q;
	
	for(int i = 0 ; i < n ; i++){
		int a;
		cin >> a;
		int cnt = -1;
		while (a) {
			a >>= 1;
			++cnt;
		}
		++v[cnt];
	}
	
	for(int i = 0; i < q; i++) {
		int t;
		cin >> t;
		int ans = 0;
		for (int i = 31; i >= 0; --i) {
			int p = min(v[i], t / d[i]);
			t -= p * d[i];
			ans += p;
			if (t == 0) {
				cout << ans << endl;
				ans = -1;
				break;
			}
		}
		if (ans != -1) cout << -1 << endl;
	}
	return 0;
}
