#include<iostream>
using namespace std;

int main() {

	int n;
	char str[101];
	cin >> n;
	cin >> str;
	bool flag[27] = { false };
	for (int i = 0, t = 0; i < n; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			t = (int)str[i] - 'a';
			flag[t] = true;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			t = (int)str[i] - 'A';
			flag[t] = true;
		}
	}
	int f = true;
	for (int i = 0; i < 26; i++) {
		if (flag[i] == false) {
			f = false;
			break;
		}
	}
	if (f)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}