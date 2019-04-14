#include<iostream>
#include<cstdio>
using namespace std;
int m, n;
char str[300001];
int total = 0;

bool isalpha(char ch) {
	return ch >= 'a' && ch <= 'z';
}

bool valid(char c1, char c2) {
	return c1 == '.' && c2 == '.';
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin >> n >> m;
	cin >> str;
	total = 0;
	for (int i = 0; i < n-1; i++) {
		if (str[i] == '.' && str[i + 1] == '.')
			total++;
	}
	//cout <<"total : " << total << "\n";
	int index;
	char ch;
	for (int i = 0; i < m; i++) {
		//scanf_s("%d %c", &index, &ch);
		cin >> index >> ch;
		index--;

		bool alpha_or_digit = isalpha(ch);

		if (index == 0) {
			bool f = false;
			if (index + 1 < n) {
				if (valid(str[index], str[index + 1])) {
					f = true;

					if (alpha_or_digit && f) {
						total--;
					}
				}
				else {
					if (valid(ch, str[index + 1])) {
						total++;
					}
				}
			}
			str[index] = ch;
		}
		else if (index == n - 1) {
			bool f = false;
			if (index - 1 >=0 ) {
				if (valid(str[index], str[index - 1])) {
					f = true;

					if (alpha_or_digit && f) {
						total--;
					}
				}
				else {
					if (valid(ch, str[index - 1])) {
						total++;
					}
				}
			}
			str[index] = ch;
		}
		else{
			
			bool prev = valid(str[index - 1], str[index]);
			bool next = valid(str[index], str[index + 1]);

			if (prev && alpha_or_digit) {
				total--;
			}
			if (next && alpha_or_digit) {
				total--;
			}
			if (!prev && !alpha_or_digit && valid(str[index - 1], ch)) {
				total++;
			}
			if (!alpha_or_digit && !next && valid(str[index + 1], ch)) {
				total++;
			}
			str[index] = ch;
		}
		cout << total << "\n";
	}
	return 0;
}