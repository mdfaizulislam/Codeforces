#include<iostream>
using namespace std;

int main() {
	long n, d;
	long t[101];
	cin >> n >> d;
	long sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		sum += t[i];
	}
	int divider = n - 1;
	if (sum + divider * 5 <= d) {
		cout << (d - sum) / 5;
	}
	else {
		cout << "-1";
	}
}