#include<iostream>
#include<cstdio>
#include <cmath>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long ul;
typedef long l;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	ll n, b, c;
	cin >> n;
	if (n < 3)
		cout << "-1";
	else {
		if (n % 2 == 0) {
			//b = ((n*n - 4)*(n*n - 4)) / 16;
			//c = ((n*n + 4)*(n*n + 4)) / 16;
			b = (n*n - 4) / 4;
			c = (n*n + 4) / 4;
		}
		else {
			//b = ((n*n - 1)*(n*n - 1)) / 4;
			//c = ((n*n + 1)*(n*n + 1)) / 4;
			b = (n*n - 1) / 2;
			c = (n*n + 1) / 2;
		}
		cout << b << " " << c;
	}
	return 0;
}
