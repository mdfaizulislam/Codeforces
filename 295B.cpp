#include<iostream>
#include<cstdio>
#include<malloc.h>

using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long

int step_count(int n, int m) {
	if (n >= m) {
		return n - m;
	}
	else if (m % 2 == 0) {
		return 1 + step_count(n, m / 2);
	}
	else {
		return 2 + step_count(n, (m + 1) / 2);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);

	int n, m;
	cin >> n >> m;
	cout << step_count(n, m);
	return 0;
}
