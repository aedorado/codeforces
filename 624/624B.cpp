/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;


#define lli long long int

int main() {

	lli n, i;
	
	cin >> n;
	
	lli a[n];
	
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	map<int, int>mp;
	mp[a[n - 1]] = 1;
	for (i = n - 2; i >= 0; i--) {
		while (mp[a[i]]) {
			a[i]--;
		}
		mp[a[i]] = 1;
	}
	
	lli sum = 0;
	for (i = 0; i < n; i++) {
//		cout << a[i] << endl;
		sum += max(a[i], 0ll);
	}
	cout << sum << endl;
	
}

// greedy stategy
// start picking max
// if value has occured before decrease it to the maximum that hasn't
// 5
// 5 5 5 5 5
// 1 2 3 4 5 => 15
