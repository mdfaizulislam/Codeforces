#include<iostream>
#include<cstdio>
using namespace std;

int m;		// num length
int s;		//digit sum
int len;

void min_num() {
	len = m;
	while (len != 0)
	{
		if (len == m) {
			if( s == 0){
				cout << 0;
			}
			else if (s - 1 <= (len - 1) * 9) {
				cout << 1;
				s--;
			}
			else if (s - 2 <= (len - 1) * 9) {
				cout << 2;
				s-=2;
			}
			else if (s - 3 <= (len - 1) * 9) {
				cout << 3;
				s -= 3;
			}
			else if (s - 4 <= (len - 1) * 9) {
				cout << 4;
				s -= 4;
			}
			else if (s - 5 <= (len - 1) * 9) {
				cout << 5;
				s -= 5;
			}
			else if (s - 6 <= (len - 1) * 9) {
				cout << 6;
				s -= 6;
			}
			else if (s - 7 <= (len - 1) * 9) {
				cout << 7;
				s -= 7;
			}
			else if (s - 8 <= (len - 1) * 9) {
				cout << 8;
				s -= 8;
			}
			else if (s - 9 <= (len - 1) * 9) {
				cout << 9;
				s -= 9;
			}
			len--;
		}
		else {
			if (s <= (len - 1) * 9) {
				cout << 0;
			}
			else if (s - 1 <= (len - 1) * 9) {
				cout << 1;
				s--;
			}
			else if (s - 2 <= (len - 1) * 9) {
				cout << 2;
				s -= 2;
			}
			else if (s - 3 <= (len - 1) * 9) {
				cout << 3;
				s -= 3;
			}
			else if (s - 4 <= (len - 1) * 9) {
				cout << 4;
				s -= 4;
			}
			else if (s - 5 <= (len - 1) * 9) {
				cout << 5;
				s -= 5;
			}
			else if (s - 6 <= (len - 1) * 9) {
				cout << 6;
				s -= 6;
			}
			else if (s - 7 <= (len - 1) * 9) {
				cout << 7;
				s -= 7;
			}
			else if (s - 8 <= (len - 1) * 9) {
				cout << 8;
				s -= 8;
			}
			else if (s - 9 <= (len - 1) * 9) {
				cout << 9;
				s -= 9;
			}
			len--;
		}
	}
}
void max_num() {
	len = 0;
	while (len<m)
	{
		if (s >= 9) {
			cout << 9;
			s -= 9;
		}
		else if ( s > 0 && s < 9) {
			cout << s;
			s = 0;
		}
		else {
			cout << 0;
		}
		len++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> m >> s;
	if (s > 9 * m) {
		cout << "-1 -1";
	}
	else if (s == 0 && m > 1)
		cout << "-1 -1";
	else {
		int t = s;
		min_num();
		cout << " ";
		s = t;
		max_num();
	}
	return 0;
}