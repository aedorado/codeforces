/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;

#define lli long long int
#define LEN 15000000

lli a[LEN];	// taking shorter array ~ 100000000 will result in WA as sum(1..10000000) =~ 10E13 and input n is around 10E14

int main() {

	lli i, tc, n;

	a[0] = 0;
	for (i = 1; i < LEN; i++) {
		a[i] = a[i - 1] + i;		//	[0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ..]
	}

	cin >> n;

	for (i = 1; i <= LEN; i++) {
		if (a[i] == n) {
			cout << i << endl;
			break;
		} else if (a[i] > n) {		// look for number in a viz > n
			cout << (n - a[i - 1]) << endl;
			break;
		}
	}

	return 0;
}

/*

seq : 1 1 2 1  2  3  1  2  3  4  1  2  3  4  5  1  2  3  4  5  6  1  2  3  4  5  6  7  1  2 ..
pos : 1 2 3 4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 27 28 29 30 31 ..
sum : 0 1 3 6 10 15 21 28 36 45 55 ..

n = 14	ans = 4 i.e. (15 - 10)

*/
