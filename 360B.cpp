#include<iostream>
#include<cstdio>
#include<malloc.h>
#include<cstring>
using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	char n[100000];
	cin >> n;
	cout << n;
	for (int i = strlen(n) - 1; i >= 0; i--)
		cout << n[i];
	return 0;
}
