#include<iostream>
using namespace std;
int used[27] = { 0 };
char str[100002];
int n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> n;
	cin >> str;
	if (n > 26) {
		cout << -1;
		return 0;
	}
	else {
		for (int i = 0; i < n; i++) {
			int t = (int)str[i] - 'a';
			used[t]++;
		}
		int count = 0;
		for (int i = 0; i < 26; i++)
			if (used[i] > 1)
				count += used[i] - 1;
		cout << count;
	}
	return 0;
}