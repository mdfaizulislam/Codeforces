#include<iostream>
#include<cstdio>
#include<malloc.h>
#include <stack>
using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long

int arr[100001];
int ans[100001];
int n;

bool isInc(int *arr) {
	bool f = true;
	for (int i = 0; i < n - 1; i++)
		if (arr[i + 1] < arr[i]) {
			f = false;
			break;
		}

	return f;
}

bool isDec(int *arr) {
	bool f = true;
	for (int i = 0; i < n - 1; i++)
		if (arr[i + 1] > arr[i]) {
			f = false;
			break;
		}

	return f;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	if (isInc(arr)) {
		cout << 0;
		return 0;
	}

	bool dec = isDec(arr);
	if (n == 2 && dec) {
		cout << 1;
		return 0;
	}
	else if (n > 2 && dec) {
		cout << -1;
		return 0;
	}
	else {
		stack<int> s;
		int i = n - 1;
		while (arr[i - 1] <= arr[i] && (i - 1) >= 0) {
			s.push(arr[i]);
			i--;
		}
		s.push(arr[i]);
		int j = 0;
		int Size = s.size();
		while (!s.empty())
		{
			ans[j++] = s.top();
			s.pop();
		}
		for (int k = 0; k < i; k++)
			ans[j++] = arr[k];

		if (isInc(ans))
			cout << Size;
		else
			cout << -1;
	}
	return 0;
}