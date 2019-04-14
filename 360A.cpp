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
bool arr[101] = {false};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int n, d;
	char opponents[101][101];

	cin >> n >> d;
	int index = 0, s=0;
	for (int i = 0; i < d; i++) {
		cin >> opponents[i];
		s = 0;
		for (int j = 0; j < n; j++)
			s += (int)opponents[i][j] - '0';
		if (s == n) {
			arr[i] = true;
		}
	}

	int r = 0, cnt = 0, mx=0;
	while (r < d)
	{
		if (arr[r] == false) {
			cnt++;
			mx = cnt > mx ? cnt : mx;
		}
		else {
			cnt = 0;
		}
		r++;
	}
	cout << mx;
	return 0;
}
