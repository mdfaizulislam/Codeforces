#include<iostream>
#include<cstdio>
#include<malloc.h>

using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long
int n;
int arr[1001];
int ori[1001];
bool isInc() {
	bool f = true;
	for( int i = 0 ; i < n ; i++ )
		if (i != arr[i])
		{
			f = false;
			break;
		}
	return f;
}

bool isSame() {
	bool f = true;
	for (int i = 0; i < n; i++)
		if (ori[i] != arr[i])
		{
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
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		ori[i] = arr[i];
	}

	while (true)
	{
		bool f = true;
		for (int i = 0 ; i < n; i++) {
			if (f) {
				arr[i]++;
				if (arr[i] == n)
					arr[i] = 0;
				f = !f;
			}
			else {
				arr[i]--;
				if (arr[i] == -1)
					arr[i] = n - 1;
				f = !f;
			}
		}

		if (isInc()) {
			cout << "YES";
			return 0;
		}
		if (isSame()) {
			cout << "NO";
			return 0;
		}
	}
	return 0;
}
