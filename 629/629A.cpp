/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;


int main() {

	int i, j, k;
	int count, sum;
	int n, m, p, t;
	vector<int> v;
	int maxi, mini;
	int tc;
	string s, r;
	int lens, lenr;
	
	cin >> n;
	
	string cake[n];
	
	for (i = 0; i < n; i++) {
		cin >> cake[i];
	}
	
	count = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (cake[i][j] == 'C') {			// if chocolate here
				for (k = j + 1; k < n; k++) {	// consider entire row
					if (cake[i][k] == 'C') {
						count++;
					}
				}
				for (k = i + 1; k < n; k++) {	// consider entire column
					if (cake[k][j] == 'C') {
						count++;
					}
				}
			}
		}
	}
	
	cout << count << endl;

	return 0;
}


