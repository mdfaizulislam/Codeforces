#include<iostream>
using namespace std;
// 5*b = S = c1+c2+c3+c4+c5
// b = s/5. becareful, s can be zero
int main() {
	ios_base::sync_with_stdio(false);
	int c[5];
	int s = 0;
	cin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4];
	s = c[0] + c[1] + c[2] + c[3] + c[4];
	if (s < 5)
		cout << -1;
	else if (s % 5 != 0)
		cout << -1;
	else
		cout << s / 5;
	return 0;
}