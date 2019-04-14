#include<iostream>
using namespace std;
const int NM_MAX = (int)2e5 + 3;

int N, M;
char s[NM_MAX];
char t[NM_MAX];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(false);

	cin >> N >> M;
	//char c;
	bool f = false;
	int star_index = 0;
	for (int i = 0; i < N; i++) {
		cin >> s[i];
		if (s[i] == '*') {
			f = true;
			star_index = i;
		}
	}

	cin >> t;
	if (f) {
		if( N-1 > M ){
			cout << "NO";
			return 0;
		}
		else {
			bool flag = true;
			for (int i = 0; i < star_index; i++)
				if (s[i] != t[i]) {
					flag = false;
					break;
				}
			if (flag) {
				for (int i = N-1, j = M-1; i > star_index ; i--, j--)
					if (s[i] != t[j]) {
						flag = false;
						break;
					}
			}

			if (flag) {
				cout << "YES";
				return 0;
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	else {
		if (N != M) {
			cout << "NO";
		}
		else {
			bool f = true;
			for (int i = 0; i < N; i++) {
				if (s[i] != t[i]) {
					f = false;
					break;
				}
			}
			if (f)
				cout << "YES";
			else
				cout << "NO";
		}
	}
	return 0;
}