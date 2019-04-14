#include<iostream>
using namespace std;
int n;	// nodes
int m;	// edges
int g[3001][3001] = { 0 };
int dist[3001];

void dfs(int source, int len) {
	if (len == 2) {
		dist[source]++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (g[source][i])
			dfs(i, len + 1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> n >> m;
	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		x--;
		y--;
		g[x][y] = 1;
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			dist[j] = 0;
		dfs(i, 0);
		for (int j = 0; j < n; j++) {
			if (j != i) {
				res += dist[j] * (dist[j] - 1) >> 1;
			}
		}
	}
	cout << res;
	return 0;
}