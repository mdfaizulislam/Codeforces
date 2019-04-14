#include<iostream>
using namespace std;
#define sum(a,b,c) ((a)+(b)+(c))

int main() {
	ios_base::sync_with_stdio(false);
	int n, res = 0;
	int a, b, c;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		res += (sum(a, b, c) > 1 ? 1 : 0);
	}
	cout << res;
	return 0;
}