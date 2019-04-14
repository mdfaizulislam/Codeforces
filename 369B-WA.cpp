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

ll arr[501][501];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	ll n;
	cin >> n;
	ll s = 0, r = 0;
	int row, col;
	for( ll i = 0 ; i < n ; i++ ){
		for (ll j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				row = i;
				col = j;
			}
		}
	}

	if (n == 1 && arr[0][0] == 0) {
		cout << 1;
		return 0;
	}
	for (ll i = 0; i < n; i++) {
		s = 0;
		bool f = false;
		for (ll j = 0; j < n; j++) {
			s += arr[i][j];
			if (arr[i][j] == 0) {
				f = true;
				break;
			}
		}
		if (f == false) {
			break;
		}
	}
	ll row_sum = 0, col_sum=0;
	for (ll i = 0; i < n; i++)
		row_sum += arr[row][i];
	for (ll i = 0; i < n; i++)
		col_sum += arr[i][col];
	if (row_sum == col_sum && row_sum != s)
		cout << s - row_sum;
	else
		cout << -1;
	return 0;
}
