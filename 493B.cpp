#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define abs(a)	((a)<0?-(a):(a))
#define MAX 101

int odd[MAX] = { 0 };
int even[MAX] = { 0 };
int cost[MAX];
int n, b;
int arr[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> n >> b;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i == 0) {
			if (arr[i] & 1) {
				odd[i] = 1;
				even[i] = 0;
			}
			else {
				even[i] = 1;
				odd[i] = 0;
			}
		}
		else {
			if (arr[i] & 1) {
				odd[i] = odd[i - 1] + 1;
				even[i] = even[i - 1];
			}
			else {
				even[i] = even[i - 1] + 1;
				odd[i] = odd[i - 1];
			}
		}
		
		cost[i] =(int)1e5;
	}

	for (int i = 0; i < n-1; i++) {
		if (even[i] == odd[i] )
			cost[i] = abs(arr[i] - arr[i + 1]);
	}

	sort(cost, cost + n);
	int res = 0;
	for (int i = 0; i < n; i++) {
		//cout << cost[i] << " ";
		if (cost[i] <= b) {
			res++;
			b -= cost[i];
		}
	}
	cout << res;
	return 0;
}