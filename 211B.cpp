#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, k;
	int arr[150001];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += arr[i];
	int key = sum;
	int index = 1;
	for (int i = k, left = 0; i < n; i++) {
		sum += arr[i] - arr[left++];
		if (sum < key) {
			key = sum;
			index = left+1;
		}
	}

	cout << index;
	return 0;
}