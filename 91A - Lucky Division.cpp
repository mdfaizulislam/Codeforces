#include<iostream>
using namespace std;
const int MAX = 20;
int n;
int possible_nums[MAX];
int pos = 0;
void subset(int index, int status, int n) {
	if (index == n) {
		int n = 0;

		for (int i = index - 1; i >= 0; i--) {
			if (status & (1 << i)) {
				//cout << 7;
				n += 7;
			}
			else {
				//cout << 4;
				n += 4;
			}
			n *= 10;
		}
		n /= 10;
		//cout << n << "\n";
		possible_nums[pos++] = n;
		return;
	}

	subset(index + 1, status, n);
	status = status | (1 << index);
	subset(index + 1, status, n);
	status = status & ~(1 << index);
}

int main() {
	ios_base::sync_with_stdio(false);
	pos = 0;
	subset(0, 0, 1);
	subset(0, 0, 2);
	subset(0, 0, 3);
	//for (int i = 0; i < pos; i++) {
	//	cout << possible_nums[i] << "\n";
	//}

	int n;
	cin >> n;
	for (int i = 0; i < pos; i++) {
		if (n%possible_nums[i] == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}