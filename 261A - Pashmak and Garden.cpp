#include<iostream>
using namespace std;
#define abs(a) ((a)<0?-(a):(a))

int main() {
	ios_base::sync_with_stdio(0);
	int x[3], y[3];
	cin >> x[1] >> y[1] >> x[2] >> y[2];
	if (x[1] != x[2] && y[1] != y[2] && abs(x[1] - x[2]) != abs(y[1] - y[2])) {
		cout << -1;
	}
	else if (x[1] == x[2]) {
		cout << x[1] + abs(y[1] - y[2]) << " " << y[1] << " " << x[1] + abs(y[1] - y[2]) << " " << y[2];
	}
	else if (y[1] == y[2]) {
		cout << x[1] << " " << y[1] + abs(x[1] - x[2]) << " " << x[2] << " " << y[2] + abs(x[1] - x[2]);
	}
	else {
		cout << x[1] << " " << y[2] << " " << x[2] << " " << y[1];
	}
	return 0;
}