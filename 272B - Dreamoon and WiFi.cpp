#include<iostream>
#include<cstdio>
using namespace std;
#define abs(a) ((a)<0?-(a):(a))

int nCr(int n, int r) {
	int c = 1;		// nCr = nC(n-r) = (n*(n-1)..*(n-r+1))/(r!)
	for (int i = 0; i < r; i++) {
		c *= (n - i);	// n*(n-1)..*(n-r+1)
	}
	for (int i = 2; i <= r; i++)
		c /= i;			// c /= (r!)

	return c;
}

int main() {
	char str1[12], str2[12];
	cin >> str1;
	cin >> str2;

	int answerPosition = 0, finalPosition = 0, moves = 0;
	int i = 0;
	while (str1[i] != '\0')
	{
		answerPosition += (str1[i] == '+') ? +1 : -1;

		if (str2[i] == '?')
			moves++;
		else {
			finalPosition += (str2[i] == '+') ? +1 : -1;
		}
		i++;
	}

	int distance = answerPosition - finalPosition;

	double answer = 0;

	if ((moves + abs(distance)) % 2 != 0 || moves < abs(distance)) {
		answer = 0;		// can't reach the destination in no way
	}
	else {	
		
		//	otherwise we need exactly (moves+abs(distance))/2 (+) moves
		//	and rest of them (-) moves
		
		int m = (moves + abs(distance)) / 2;	// no of positive_moves

		/*
			probability = (no of taking m positive moves from total moves)/
						  total possible moves
		*/

		int c = nCr(moves, m);
		
		answer = (double)c / (1 << moves);
	}

	printf("%.12lf", answer);
	return 0;
}