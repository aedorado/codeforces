#include <bits/stdc++.h>
using namespace std;

int main() {
	int p, q, i, j, k, count = 0;
	string s;
	int n;
	bool done = false;

	cin >> n >> p >> q;

	cin >> s;

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			if (i * p + j * q == n) {
				cout << i + j << endl;

				for (k = 0; k < p * i; k += p) {
					cout << s.substr(k, p) << endl;
				}

				for (; k < n; k += q) {
					cout << s.substr(k, q) << endl;
				}

				done = true;
			}
		}
		if (done) {
			break;
		}
	}
	
	if (i >= n && j >= n) {
		cout << -1 << endl;
	}

	return 0;
}