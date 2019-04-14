#include<iostream>
using namespace std;
/*
if x even and a>b, then 01 x/2 times, b-x/2 ones, a-x/2 zeros
if x even and a<=b, then 10 x/2 times, a-x/2 zeros, b-x/2 ones
if x odd and a>b, then 01 x/2 times, a-x/2 zeros, b-x/2 ones
if x odd and a<=b, then 10 x/2 times, b-x/2 ones, a-x/2 zeros

*/
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int a, b, x;
	int zeros = 0, ones = 0;		// zeros first & ones last
	cin >> a >> b >> x;
	if (x & 1) {
		if (a > b) {
			int zo = x / 2;
			int z = a - x / 2;
			int o = b - x / 2;
			while (zo--)
			{
				cout << "01";
			}
			while (z--)
			{
				cout << "0";
			}
			while (o--)
			{
				cout << "1";
			}
		}
		else {
			int oz = x / 2;
			int o = b - x / 2;
			int z = a - x / 2;
			while (oz--)
			{
				cout << "10";
			}
			while (o--)
			{
				cout << "1";
			}
			while (z--)
			{
				cout << "0";
			}
		}
	}
	else {
		if (a > b) {
			int zo = x / 2;
			int o = b - x / 2;
			int z = a - x / 2;
			while (zo--)
			{
				cout << "01";
			}
			while (o--)
			{
				cout << "1";
			}
			while (z--)
			{
				cout << "0";
			}
		}
		else {
			int oz = x / 2;
			int z = a - x / 2;
			int o = b - x / 2;
			while (oz--)
			{
				cout << "10";
			}
			while (z--)
			{
				cout << "0";
			}
			while (o--)
			{
				cout << "1";
			}
		}
	}
	return 0;
}