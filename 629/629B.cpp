/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;

int main() {

	int i, j, k, a, b;
	int count, sum;
	int n, m, p, t;
	vector<int> v;
	int maxi, mini;
	int tc;
	string s, r;
	int lens, lenr;
	
	cin >> n;
	
	int fc[370], mc[370];
	memset(fc, 0, sizeof fc);
	memset(mc, 0, sizeof mc);
	
	for (i = 0; i < n; i++) {
		cin >> s >> a >> b;
		if (s == "M") {
			for (j = a; j <= b; j++) {
				++mc[j];
			}
		} else if (s == "F") {
			for (j = a; j <= b; j++) {
				++fc[j];
			}
		}
	}
	
	maxi = 0;
	for (i = 1; i <= 366; i++) {
		maxi = max(maxi, min(mc[i], fc[i]) * 2);
	}
	
	cout << maxi << endl;

	return 0;
}


