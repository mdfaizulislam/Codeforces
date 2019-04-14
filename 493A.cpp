#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n;
int a[11];
int in[11];

void mergeSort( int *arr,int *brr, int l, int r){
	if (l < r) {
		int mid = l + ((r - l) >> 1);
		mergeSort(arr, brr, l, mid);
		mergeSort(arr, brr, mid + 1, r);

		int p = mid - l + 1;
		int q = r - mid;
		
		int *a = (int *)malloc(p * sizeof(int));
		int *x = (int *)malloc(p * sizeof(int));

		int *b = (int *)malloc(q * sizeof(int));
		int *y = (int *)malloc(q * sizeof(int));

		int i, j, k;
		for (i = 0, j = l; i < p; i++, j++) {
			a[i] = arr[j];
			x[i] = brr[j];
		}
		
		for (i = 0, j = mid+1; i < q; i++, j++) {
			a[i] = arr[j];
			y[i] = brr[j];
		}
		i = 0, j = 0, k = l;
		while (i<p && j <q)
		{
			if (a[i] <= b[j]) {
				arr[k] = a[i];
				brr[k] = x[i];
				k++, i++;
			}
			else {
				arr[k] = b[j];
				brr[k] = y[j];
				k++, j++;
			}
		}
		while (i<p)
		{
			arr[k] = a[i];
			brr[k] = x[i];
			i++, k++;
		}
		while (j<q)
		{
			arr[k] = b[j];
			brr[k] = y[j];
			j++, k++;
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	int s = 0;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		in[i] = i;
		s += a[i];
	}
	if (n == 1) {
		cout << -1;
	}
	else if (n == 2 && a[0] == a[1]) {
		cout << -1;
	}
	else {
		if (a[0] != (s - a[0])) {
			cout << 1 << "\n";
			cout << 1;
		}
		else {
			cout << 1 << "\n";
			cout << n;
		}
	}
	return 0;
}