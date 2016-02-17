/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;

#define print_a(a, n)	for (int I = 0; I < n; I++) {	cout << a[I] << ' ';}	cout << endl;

#define pos second
#define num first

int main() {

	int n, m, i, j, t;

	cin >> n >> m;

	int a[n], bc[m];
	pair<int, int> b[m];

	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < m; ++i) {
		cin >> t;
		b[i] = {t, i};
	}

	sort(a, a + n);
	sort(b, b + m);

	i = n - 1, j = m;
	while (j--) {
		while (i >= 0 && a[i] > b[j].num) {
			--i;
		}
		bc[b[j].pos] = i + 1;
	}

	print_a(bc, m);

	return 0;

}

