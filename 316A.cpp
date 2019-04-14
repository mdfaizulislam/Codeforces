#include<iostream>
using namespace std;
#define max(a,b) ((a)>=(b)?true:false)
#define MIN -1

long arr[101][101];
long used[101] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < m; i++) {
		int mn = MIN;
		int index = 0;
		for (int j = n - 1; j >= 0; j-- ) {
			if (max(arr[i][j],mn)) {
				mn = arr[i][j];
				index = j;
			}
		}
		used[index]++;
	}

	int mn = MIN, index = 0;;
	for (int i = n - 1; i >= 0; i--) {
		if (max(used[i], mn)) {
			mn = used[i];
			index = i;
		}
	}
	cout << index + 1;
	return 0;
}