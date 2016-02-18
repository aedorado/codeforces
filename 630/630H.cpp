#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, i, n5;

	cin >> n;
	n5 = 1;

	for (i = 0; i < 5; i++) {
		n5 *= n - i;
		n5 /= i + 1;
	}

	cout << 120 * n5 * n5 << endl;


	return 0;
}