// greedy, sorting, O(nlogn), ternary search
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

const int NM_MAX = 3005;
const ll INF = (ll)1e18 + 5;
int N, M;
vector<int> price[NM_MAX];

ll win_cost(ll votes) {

	ll cost = 0;
	ll needed = votes - (int)price[0].size();
	vector<int> remaining;

	for (int p = 1; p < M; p++) {
		int start_index = max((int)price[p].size() - (votes - 1), 0);
		for (int i = 0; i < start_index; i++) {
			cost += price[p][i];
			needed--;
		}

		for (int i = start_index; i < (int)price[p].size(); i++)
			remaining.push_back(price[p][i]);
	}
	if (needed > 0) {
		nth_element(remaining.begin(), remaining.begin() + needed, remaining.end());

		for (int i = 0; i < needed; i++)
			cost += remaining[i];
	}

	return cost;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(false);

	cin >> N >> M;
	int p, c;
	for (int i = 0; i < N; i++) {
		cin >> p >> c;
		p--;
		price[p].push_back(c);
	}

	// now sort
	for (int p = 0; p < M; p++)
		sort(price[p].begin(), price[p].end());

	ll low = 1, high = N, mid;

	while (low < high)
	{
		mid = low + ((high - low) >> 1);
		if (win_cost(mid) < win_cost(mid + 1))
			high = mid;
		else
			low = mid+1;
	}
	cout << win_cost(low);
	return 0;
}