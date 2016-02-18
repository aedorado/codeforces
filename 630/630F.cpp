#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main() {
	lli n, i;

	cin >> n;

	lli n7 = 1, n6 = 1, n5 = 1;

	for (i = 0; i < 5; i++) {
		n5 *= n - i;
		n5 /= i + 1;
	}

	for (i = 0; i < 6; i++) {
		n6 *= n - i;
		n6 /= i + 1;
	}

	for (i = 0; i < 7; i++) {
		n7 *= n - i;
		n7 /= i + 1;
	}

	cout << n5 + n6 + n7 << endl;
	
	return 0
}

// C(n, 7) + C(n, 6) + C(n, 5)
