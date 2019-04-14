#include<iostream>
using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))
int arr[101];
int used[101] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		used[arr[i]]++;
	}

	int res = -1;
	for (int i = 0; i < 101; i++)
		res = max(used[i], res);
	cout << res;
	return 0;
}