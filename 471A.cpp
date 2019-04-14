#include<iostream>
#include<cstdio>
#include<malloc.h>

using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define abs(a)		((a)<0?-(a):(a))
#define mod			1000000007
#define MAX			INT_MIN
#define MIN			INT_MAX
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long
int hh, mm;
int H, D, C, N;
ll current_cost() {
	int quantity = 0;
	if (H%N == 0) {
		quantity = H / N;
	}
	else {
		quantity = H / N + 1;
	}
	return quantity*C;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> hh >> mm;
	cin >> H >> D >> C >> N;
	int current_time = hh * 60 + mm;
	double curr_cost = 0.0, cost_with_offer = 0.0;
	if (current_time < 1200)
		curr_cost = current_cost();
	else {
		curr_cost = current_cost();
		curr_cost -= (curr_cost*20.0) / 100.0;
		cout << curr_cost;
		return 0;
	}
	// if he late
	int late = 1200 - current_time;
	H += late*D;
	double late_cost = current_cost();
	late_cost -= (late_cost*20.0) / 100.0;
	if (curr_cost < late_cost)
		cout << curr_cost;
	else
		cout << late_cost;
	return 0;
}