#include <iostream>
#include <cstdio>
using namespace std;
#define MAX 100
#define INFINITE 9999
#define min(a,b) ((a)<(b)?(a):(b))
long adjMat[MAX][MAX];
long dist[MAX];
bool visited[MAX] = { false };
bool storages[MAX] = { false };
int node;
int edge;
int store;

typedef struct Node {
	int value;
	struct Node *next;
}Node;

typedef struct Queue {
	Node *frontNode;
	Node *backNode;
	int totalsize;
}Queue;

void init(Queue *q) {
	q->frontNode = NULL;
	q->backNode = NULL;
	q->totalsize = 0;
}

int front(Queue *q) {
	return q->totalsize != 0 ? q->frontNode->value : NULL;
}

void push_back(Queue *q, int v) {
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->value = v;
	temp->next = NULL;
	if (q->totalsize == 0) {
		q->frontNode = temp;
		q->backNode = temp;
	}
	else {
		q->backNode->next = temp;
		q->backNode = temp;
	}
	q->totalsize++;
}

int Size(Queue *q) {
	return q->totalsize;
}

bool isEmpty(Queue *q) {
	return q->totalsize == 0;
}
void pop_front(Queue *q) {
	if (q->totalsize != 0) {
		Node *temp = q->frontNode;
		q->frontNode = q->frontNode->next;
		q->totalsize--;
		delete temp;
	}
}

void dijkstra(int source) {
	dist[source] = 0;
	visited[source] = true;
	Queue que;
	init(&que);
	push_back(&que, source);

	while (!isEmpty(&que))
	{
		int v = front(&que);
		pop_front(&que);
		for (int u = 0; u < node; u++) {
			if (adjMat[v][u] != INFINITE && visited[u] == false) {
				visited[u] = true;
				dist[u] = dist[v] + adjMat[v][u];
				push_back(&que, u);
			}
			else if (adjMat[v][u] != INFINITE && visited[u] == true) {
				dist[u] = min(dist[u], dist[v] + adjMat[v][u]);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int x, y, v;
	cin >> node >> edge >> store;
	memset(adjMat, INFINITE, sizeof adjMat);
	for (int i = 0; i < edge; i++) {
		cin >> x >> y >> v;
		x--;
		y--;
		if (adjMat[x][y] > v)
		{
			adjMat[x][y] = v;
			adjMat[y][x] = v;
		}
	}

	int p;
	Queue st;
	init(&st);
	for (int i = 0; i < store; i++) {
		cin >> p;
		storages[p - 1] = true;
		push_back(&st, p - 1);
	}
	int ans = INFINITE;
	while (!isEmpty(&st))
	{
		int source = front(&st);
		pop_front(&st);
		memset(dist, INFINITE, sizeof dist);
		dijkstra(source);
		int min_dist = INFINITE;
		for (int i = 0; i < node; i++) {
			if (adjMat[source][i] != INFINITE && storages[i] == false) {
				min_dist = dist[i] < min_dist ? dist[i] : min_dist;
			}
		}

		ans = min_dist < ans ? min_dist : ans;
	}
	if (ans == INFINITE)
		cout << "-1\n";
	else
		cout << ans << "\n";
	return 0;
}
