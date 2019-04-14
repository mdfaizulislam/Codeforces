#include<iostream>
#include<cstdio>
#include<malloc.h>
#include<stack>
using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define abs(a)		((a)<0?-(a):(a))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long

long n, h, a, b, q;
long ta, fa, tb, fb;

long min_cost() {
	if (ta == tb) {
		long diff = abs(fa - fb);
		return diff;
	}
	else {	// floor -> passage then passage ->floor
		long diff = 0;
		if (fa >= a && fa <= b) {	// no floor diff, only tower diff of ta
			diff += abs(ta-tb);
			diff += abs(fa - fb); // passage to fb
		}
		else {
			long nearest_pass = 0;
			long mn = abs(fa - a);
			if (abs(fa - b) < mn) {
				nearest_pass = abs(fa - b);
				mn = b;
			}
			else {
				nearest_pass = mn;
				mn = a;
			}
			diff += nearest_pass; // fa to passage
			diff += abs(ta - tb);	// tower to tower
			
			diff += abs(mn - fb); // passage to fb
		}
		return diff;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n >> h >> a >> b >> q;
	while (q--)
	{
		cin >> ta >> fa >> tb >> fb;
		cout << min_cost() << "\n";
	}
	return 0;
}
