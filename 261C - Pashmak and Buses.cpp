#include<iostream>
using namespace std;
const int MAXN = 1005;

int arrangement[MAXN][MAXN];

bool possible(int people, int buses, int days) {
	// check if k^d > n | buses^days > people 

	for (int power = 1, d = 0; d < days; d++) {
		power *= buses;
		if (power >= people)
			return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	// n k d
	int no_of_people, no_of_buses, no_of_days;
	cin >> no_of_people >> no_of_buses >> no_of_days;

	if (!possible(no_of_people, no_of_buses, no_of_days)) {
		cout << -1;
		return 0;
	}

	for (int p = 0; p < no_of_people; p++) {

		for (int d = 0; d < no_of_days; d++)
			arrangement[p][d] = (p == 0) ? 0 : arrangement[p - 1][d];

		for (int d = no_of_days - 1; d >= 0; d--) {
			arrangement[p][d]++;
			arrangement[p][d] %= no_of_buses;
			if (arrangement[p][d] != 0)
				break;
		}
	}
	/*
	for (int p = 0; p < no_of_people; p++) {
		for (int d = 0; d < no_of_days; d++) {
			cout << arrangement[p][d] << " ";
		}
		cout << "\n";
	}
	*/
	for (int d = 0; d < no_of_days; d++) {
		for (int p = 0; p < no_of_people; p++) {
			cout << arrangement[p][d] + 1 << " ";
		}
		cout << "\n";
	}
	return 0;
}