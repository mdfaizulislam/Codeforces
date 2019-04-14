#include<iostream>
#include<cstdio>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX 100001
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long ul;
typedef long l;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> n >> m;
		cout << (m*n) / 5 << "\n";
	}
	
	return 0;
}
