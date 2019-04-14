#include<iostream>
using namespace std;
const int MAX = 1e3 + 2;
int left_diagonal[2 * MAX] = { 0 };	// row, col diff same
int right_diagonal[2 * MAX] = { 0 };// row+col sum same

int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		left_diagonal[1000 + x - y]++;
		right_diagonal[x + y]++;
	}

	long res = 0;	// no of pairs from n is n(n-1)/2
	for (int i = 1; i <= 2000; i++)
		if (left_diagonal[i] > 1)
			res += left_diagonal[i] * (left_diagonal[i] - 1) / 2;
	
	for (int i = 1; i <= 2000; i++)
		if (right_diagonal[i] > 1)
			res += right_diagonal[i] * (right_diagonal[i] - 1) / 2;
	cout << res;
	return 0;
}