#include<iostream>
#include<algorithm>
using namespace std;

long m1(long *arr, int subtract) {
	if (arr[0] >= subtract && arr[1] >= subtract && arr[2] >= subtract) {
		long res = 0;
		res += subtract;

		arr[0] -= subtract;
		arr[1] -= subtract;
		arr[2] -= subtract;

		if (arr[0] >= 3)
			res += arr[0] / 3;
		if (arr[1] >= 3)
			res += arr[1] / 3;
		if (arr[2] >= 3)
			res += arr[2] / 3;

		return res;
	}
	else {
		return 0;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	long arr[3];
	long res = 0;

	cin >> arr[0] >> arr[1] >> arr[2];
	if (arr[0] % 3 == 0 && arr[1] % 3 == 0 && arr[2] % 3 == 0) {
		res += arr[0] / 3;
		res += arr[1] / 3;
		res += arr[2] / 3;
	}
	else {
		long mx = 0;
		long b[3];
		b[0] = arr[0], b[1] = arr[1], b[2] = arr[2];
		mx = max(m1(arr, 0), mx);
		mx = max(m1(b, 1), mx);
		mx = max(m1(arr, 2), mx);
		
		res += mx;
	}
	cout << res;

	return 0;
}