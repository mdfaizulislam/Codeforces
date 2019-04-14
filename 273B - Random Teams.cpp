#include<iostream>
using namespace std;
#define ll long long
// no of pairs from n elements is n(n-1)/2
int main() {
	ios_base::sync_with_stdio(0);
	ll n, m;
	cin >> n >> m;
	ll mn = 0, mx = 0;
	ll member_per_team = n / m;
	ll remaining = n%m;
	mn += (m - remaining)*(member_per_team*(member_per_team - 1) / 2);
	member_per_team++;
	mn += remaining*(member_per_team*(member_per_team - 1) / 2);

	// now count max, put 1 member each team except last team
	member_per_team = n - m + 1;
	mx = member_per_team*(member_per_team - 1) / 2;
	cout << mn << " " << mx;
	return 0;
}