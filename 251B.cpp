#include <iostream>

using namespace std;
typedef unsigned long long ull;


void Merge(ull *Arr, int left_index, int middle_index, int right_index)
{
	int i, j, k;
	int left_array_size = middle_index - left_index + 1;
	int right_array_size = right_index - middle_index;

	// create two temp arrays
	ull *left_array;
	ull *right_array;
	left_array = (ull *)malloc(left_array_size * sizeof(ull));
	right_array = (ull *)malloc(right_array_size * sizeof(ull));

	// copy data to temp arrays left_array and right_array
	for (i = 0; i < left_array_size; i++)
		left_array[i] = Arr[left_index + i];
	for (j = 0; j < right_array_size; j++)
		right_array[j] = Arr[middle_index + 1 + j];

	// Merge the temp arrays back to Arr[first_index...last_index]
	i = 0; // Initial index of the first subarray
	j = 0; // Initial index of the second subarray
	k = left_index; // // Initial index of the merged subarray

	while (i < left_array_size && j < right_array_size)
	{
		if (left_array[i] < right_array[j])
		{
			Arr[k] = left_array[i];
			i++;
		}
		else
		{
			Arr[k] = right_array[j];
			j++;
		}
		k++;
	}

	// Copy the remaining items of left_array, if there are any
	while (i < left_array_size)
	{
		Arr[k] = left_array[i];
		i++;
		k++;
	}

	// Copy the remaining items of left_array, if there are any
	while (j < right_array_size)
	{
		Arr[k] = right_array[j];
		j++;
		k++;
	}
}
void Merge_Sort(ull *Arr, int first_Index, int last_Index)
{
	if (first_Index < last_Index)
	{
		//int mid_index = (first_Index+last_Index)/2; // mid_index = first_Index+(last_Index-first_Index)/2
		int mid_index = first_Index + (last_Index - first_Index) / 2;

		Merge_Sort(Arr, first_Index, mid_index);
		Merge_Sort(Arr, mid_index + 1, last_Index);

		Merge(Arr, first_Index, mid_index, last_Index);
	}
}

int main()
{

	ull n;
	long x;
	ull c[100002];

	cin >> n >> x;

	for (ull i = 0; i < n; i++)
		cin >> c[i];
	//sort(c, c + n);
	Merge_Sort(c, 0, n - 1);
	ull t = 0;
	for (ull i = 0; i < n; i++) {
		if (x > 0)
			t += c[i] * x;
		else
			t += c[i];
		x--;
	}
	cout << t;
	return 0;
}
