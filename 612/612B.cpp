#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main() {

	lli i, n, t, sum;
	map<lli, lli> mp;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> t;
		mp[t] = i;
	}

	sum = 0;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		lli v = it->second;
		it++;
		if (it == mp.end()) {
			break;
		}
		sum += abs(v - it->second);
		it--;
	}

	cout << sum << endl;

	return 0;
}