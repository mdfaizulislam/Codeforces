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
	int n, row;
	cin >> n;
	row = 2*n+1;
	for (int i = 0; i < row; i++) {
		int spaces = n >= i ? n - i : i - n;
		bool f = true; // true for left side
		int mid = n - spaces;
		int p = 0;
		for (int j = 0; j <= row; j++) {
			if (spaces > 0) {
				cout << "  ";
				spaces--;
			}
			else {
				if (f && p < mid) {
					cout << p << " ";
					p++;
				}
				else if (f && p == mid) {
					cout << p;
					p--;
					f = false;
				}
				else{
					if (p < 0)
						break;
					cout << " " << p;
					p--;
				}
			}
		}
		cout << "\n";

	}
	return 0;
}

/*
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
int n, row;
cin >> n;
row = 2*n+1;
for (int i = 0; i < row; i++) {
int spaces = n >= i ? n - i : i - n;
bool f = true; // true for left side
int mid = n - spaces;
int p = 0;
for (int j = 0; j <= row; j++) {
if (spaces > 0) {
cout << "  ";
spaces--;
}
else {
if (f && p < mid) {
cout << p << " ";
p++;
}
else if (f && p == mid) {
cout << p << " ";
p--;
f = false;
}
else{
if (p < 0)
break;
cout << p << " ";
p--;
}
}
}
cout << "\n";

}
return 0;
}

*/