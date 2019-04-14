#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int x;
	int res = 0;
	cin >> x;
	if (x >= 5)
		res += x / 5;
	x %= 5;
	if (x >= 4)
		res += x / 4;
	x %= 4;
	if (x >= 3)
		res += x / 3;
	x %= 3;
	if (x >= 2)
		res += x / 2;
	x %= 2;
	if (x >= 1)
		res++;
	cout << res;
	return 0;

}