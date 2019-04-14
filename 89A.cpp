#include<iostream>
#include <cstdio>
#include <cstring>
#include<cctype>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned long ul;
typedef long l;

int main() {
	bool flag[27] = { false };
	int t;
	t = 'a' - 'a';
	flag[t] = true;
	t = 'e' - 'a';
	flag[t] = true;
	t = 'i' - 'a';
	flag[t] = true;
	t = 'o' - 'a';
	flag[t] = true;
	t = 'y' - 'a';
	flag[t] = true;
	t = 'u' - 'a';
	flag[t] = true;

	char str[101];
	cin >> str;
	int length = strlen(str);

	for (int i = 0; i < length; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		t = str[i] - 'a';
		if (!flag[t]) {
			printf(".%c", str[i]);
		}
	}
	return 0;
}