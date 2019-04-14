#include<iostream>
using namespace std;
#define MAX 1001

typedef struct marks {
	int id;
	int a;
	int b;
	int c;
	int d;
	int t;
};

marks students[MAX];
int n;
void merge_sort(int l, int r) {
	if (l < r) {
		int mid = l + ((r - l) >> 1);
		merge_sort(l, mid);
		merge_sort(mid + 1, r);

		int n = mid - l + 1, m = r - mid;

		marks *a = (marks *)malloc(n * sizeof(marks));
		marks *b = (marks *)malloc(m * sizeof(marks));

		int i, j, k;
		for (i = 0, j = l; i < n; i++, j++)
			a[i] = students[j];
		for (i = 0, j = mid + 1; i < m; i++, j++)
			b[i] = students[j];

		i = 0, j = 0, k = l;
		while (i < n && j < m )
		{
			if (a[i].t >= b[j].t) {
				students[k++] = a[i++];
			}
			else {
				students[k++] = b[j++];
			}
		}

		while (i < n )
		{
			students[k++] = a[i++];
		}
		while ( j < m )
		{
			students[k++] = b[j++];
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	int u, v, x, y;
	for (int i = 0; i < n; i++) {
		cin >> u >> v >> x >> y;
		students[i].id = i + 1;
		students[i].a = u;
		students[i].b = v;
		students[i].c = x;
		students[i].d = y;
		students[i].t = u + v + x + y;
	}

	merge_sort(0, n-1);
	for (int i = 0; i < n; i++) {
		if (students[i].id == 1) {
			cout << i + 1;
			break;
		}
	}
	return 0;
}