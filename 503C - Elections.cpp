// naive apprach, greedy, O(n^2), sorting
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
vector<int>price[NM_MAX];

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

	// sort all voter price under each party
	for (int p = 0; p < M; p++)
		sort(price[p].begin(), price[p].end());

	ll best = INF;

	for (int votes = 1; votes <= N; votes++) {	// for each votes find min cost & update
		ll cost = 0;
		ll needed = votes - (int)price[0].size();
		vector<int>remaining;
		
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

		best = min(best, cost);
	}

	cout << best;
	return 0;
}
