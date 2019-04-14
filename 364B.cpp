#include<iostream>
#include<set>
using namespace std;
int main() {
	long long n, m;
	set<int>rows, cols;
	long long rowSize, colSize;

	cin >> n >> m;
	long long x, y;
	long long under_attack=0;
	for (long long i = 0; i < m; i++) {
		cin >> x >> y;
		rows.insert(x);
		cols.insert(y);
		rowSize = rows.size();
		colSize = cols.size();
		under_attack = rowSize*n + colSize*n - rowSize*colSize;
		cout << n*n - under_attack << " ";
	}	
	return 0;
}