#include<iostream>
#include<cstdio>
#include <vector>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX 100000
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long ul;
typedef long l;

vector<int>edges[MAX];
vector<int>costs[MAX];
bool visited[MAX] = { false };
bool storage[MAX] = { false };
int dist[MAX];
int n, e, store;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> n >> e >> store;
	int x, y, v;
	for (int i = 0; i < e; i++) {
		cin >> x >> y >> v;
		edges[x].push_back(y);
		edges[y].push_back(x);
		if(costs[x].)
		costs[x].push_back(v);
		costs[y].push_back(v);
	}
	return 0;
}
