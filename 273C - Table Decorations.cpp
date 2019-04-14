#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
// https://codeforces.com/blog/entry/14282?#comment-192710
int main() {
	ios_base::sync_with_stdio(0);

	ll arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	ll sum = arr[0] + arr[1] + arr[2];
	sort(arr, arr + 3);
	cout << min(sum / 3, arr[0] + arr[1]);
	return 0;
}