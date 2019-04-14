#include<iostream>
#include<cstdio>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define MAX 100001
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long ul;
typedef long l;
int arr[MAX];

void merge_sort(int left, int right) {
	if (left < right) {
		int mid = left + (right - left)*0.5;
		merge_sort(left, mid);
		merge_sort(mid + 1,right);
		
		int l_size, r_size;
		l_size = mid - left + 1;
		r_size = right - mid;
		int *a = (int *)malloc(l_size * sizeof(int));
		int *b = (int *)malloc(r_size * sizeof(int));
		int i, j, k;
		j = left;
		for ( i = 0; i < l_size; i++)
			a[i] = arr[j++];
		j = mid + 1;
		for ( i = 0; i < r_size; i++)
			b[i] = arr[j++];

		i = 0, j = 0;
		k = left;

		while (i < l_size && j < r_size) {
			if (a[i] <= b[j]) {
				arr[k++] = a[i++];
			}
			else {
				arr[k++] = b[j++];
			}
		}

		while (i <l_size)
		{
			arr[k++] = a[i++];
		}
		while (j < r_size)
		{
			arr[k++] = b[j++];
		}
		free(a);
		free(b);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	merge_sort(0, n - 1);
	
	int missing = 1, r = 0;
	while (r<n)
	{
		if (arr[r] >= missing)
			missing++;
		r++;
	}
	cout << missing << "\n";
	return 0;
}

