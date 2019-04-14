#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char str[100002];
int visited[27] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> str;

	int len = strlen(str);
	if (len < 4) {
		cout << "No";
		return 0;
	}
	for (int i = 0; i < len; i++) {
		int t = (int)str[i] - 'a';
		visited[t]++;
	}

	int mn = (int)1e9;
	int different_letter = 0;
	for (int i = 0; i < 26; i++) {
		if (visited[i]) {
			different_letter++;
			mn = visited[i] < mn ? visited[i] : mn;
		}
	}
	
	if (different_letter > 4)
		cout << "No";
	else if (different_letter == 4)
		cout << "Yes";
	else if (different_letter == 3)
		cout << "Yes";
	else if (different_letter == 2) {
		if (mn == 1)
			cout << "No";
		else
			cout << "Yes";
	}
	else
		cout << "No";
	return 0;
}