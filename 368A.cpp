#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long ul;
typedef long l;
#define max 100
char pixel[max][max];
bool color[27] = { false };
int main() {
	int m, n;
	char p[100][100];
	cin >> m >> n;
	bool  c = false;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> p[i][j];
			if (p[i][j] == 'C' || p[i][j] == 'M' || p[i][j] == 'Y')
				c = true;
		}
	}
	if (c)
		cout << "#Color";
	else
		cout << "#Black&White";
	return 0;
}
