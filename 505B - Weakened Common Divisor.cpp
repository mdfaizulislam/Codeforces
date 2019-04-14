#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
#define MAX 150005
ll gcd(ll a, ll b) {
	if (!b)
		return a;
	return gcd(b, a%b);
}

ll n;
ll couple[MAX][2];
//bool used[MAX] = { false };
ll primes[MAX];
long long index = 0;

void factors(ll a, ll b) {
	ll p;
	for (ll i = 2; i*i <= a; i++)
	{
		p = 0;
		while (a%i == 0)
		{
			p = i;
			//used[i] = true;
			a /= i;
		}
		if (p != 0) {
			primes[index++] = p;
		}
	}
	if (a > 1) {
		//used[a] = true;
		primes[index++] = a;
	}

	for (ll i = 2; i*i <= b; i++) {
		p = 0;
		while (b%i == 0)
		{
			p = i;
			b /= i;
		}
		if (p != 0) {
			//used[p] = true;
			primes[index++] = p;
		}
	}

	if (b > 1) {
		//used[b] = true;
		primes[index++] = b;
	}
}

bool solve(ll p) {
	
	for (ll i = 1; i < n; i++) {
		if (couple[i][0] % p == 0 || couple[i][1]%p == 0) {
			continue;
		}
		else
			return false;
	}
	return true;
}
int main() {
	cin >> n;
	ll a, b;
	for (ll i = 0; i < n; i++) {
		cin >> a >> b;
		couple[i][0] = a;
		couple[i][1] = b;
	}

	factors(couple[0][0], couple[0][1]);
	//for (int i = 0; i < index; i++)
	//	cout << primes[i] << " ";
	//cout << "\n";
	bool f = false;
	ll ans = 0;
	for (ll i = 0; i < index; i++) {
		bool g = solve(primes[i]);
		if (g) {
			f = true;
			ans = primes[i];
			break;
		}
	}
	if (f)
		cout << ans;
	else
		cout << -1;
	return 0;
}