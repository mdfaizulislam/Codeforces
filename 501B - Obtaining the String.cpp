#include<iostream>
using namespace std;

void swap(char *a, char *b) {
	char t = *a;
	*a = *b;
	*b = t;
}
int n;
char s[52];
char t[52];
int moves[10000];

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	cin >> s;
	cin >> t;
	int index = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == t[i])
			continue;
		int pos = -1;
		for (int j = i + 1; j < n; j++) {
			if (s[j] == t[i]) {
				pos = j;
				break;
			}
		}
		if (pos == -1) {
			cout << -1;
			return 0;
		}
		for (int j = pos - 1; j >= i; j--) {
			swap(s[j], s[j + 1]);
			moves[index++] = j;
		}
	}

	cout << index << "\n";
	for (int i = 0; i < index; i++) {
		cout << moves[i] + 1 << " ";
	}
	return 0;
}