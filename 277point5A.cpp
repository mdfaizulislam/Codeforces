#include<iostream>
using namespace std;
#define MAX 3001
int Arr[MAX];
int indices[MAX];
int n;
int cnt = 0;
int k = 0;
void Selection_Sort(int Size)
{
	int small_item_index;

	for (int i = 0; i < Size; i++)
	{
		small_item_index = i;
		for (int j = i + 1; j < Size; j++)
		{
			if (Arr[j] < Arr[small_item_index])
			{
				small_item_index = j;
			}
		}

		if (i != small_item_index) {
			indices[k] = small_item_index;
			indices[k + 1] = i;
			k += 2;
			cnt++;
		}

		int temp = Arr[i];
		Arr[i] = Arr[small_item_index];
		Arr[small_item_index] = temp;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> Arr[i];
	Selection_Sort(n);
	cout << cnt << "\n";
	for (int i = 0, j = 0; i < cnt; i++) {
		cout << indices[j] << " " << indices[j + 1] << "\n";
		j+=2;
	}
	return 0;
}