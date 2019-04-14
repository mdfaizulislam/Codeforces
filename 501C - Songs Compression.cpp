#include<iostream>
using namespace std;
#define ll long long
typedef struct songs {
	ll first;
	ll second;
	ll diff;
}songs;

songs s[500002];
ll n, m;
void merge(songs *s, int l, int r) {
	if (l < r) {
		int mid = l + ((r - l) >> 1);
		merge(s, l, mid);
		merge(s, mid + 1, r);

		int s1 = mid-l+1 , s2 = r-mid;
		songs *a = (songs *)malloc(s1 * sizeof(songs));
		songs *b = (songs *)malloc(s2 * sizeof(songs));

		int i, j, k;
		for (i = 0, j = l; i < s1; i++, j++) {
			a[i] = s[j];
		}
		for (i = 0, j = mid + 1; i < s2; i++, j++) {
			b[i] = s[j];
		}

		i = 0, j = 0, k = l;
		while ( i < s1 && j < s2)
		{
			if (a[i].diff >= b[j].diff)
				s[k++] = a[i++];
			else
				s[k++] = b[j++];
		}

		while (i<s1)
		{
			s[k++] = a[i++];
		}
		while (j<s2)
		{
			s[k++] = b[j++];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	ll a, b;
	ll sum = 0;
	ll compressed = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		s[i].first = a;
		s[i].second = b;
		s[i].diff = a - b;
		sum += a;
		compressed += b;
	}

	if (compressed > m) {
		cout << -1;
		return 0;
	}
	merge(s, 0, n - 1);

	for (int i = 0; i < n; i++) {
		if (sum <= m) {
			cout << i;
			return 0;
		}
		
		sum -= s[i].first - s[i].second;
		
	}
	if (sum <= m)
		cout << n;
	else
		cout << -1;
	return 0;
}