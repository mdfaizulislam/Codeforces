#include<iostream>
#include<cstdio>
using namespace std;
const int MAX = (int)1e5;
int n;
char s[MAX];
int used[26] = { 0 };
int mx = -1;
int t;
int main() {
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++) {
		t = s[i] - 'a';
		used[t]++;
		mx = used[t] > mx ? used[t] : mx;
	}
	if (n == 1)
		printf("YES");
	else {
		if (mx > 1)
			printf("YES");
		else
			printf("NO");
	}
	return 0;
}