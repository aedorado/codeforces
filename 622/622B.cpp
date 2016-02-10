/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;

int main() {

	int hh, mm, ahh, ahm, ahead;
	int tc;
	string s, r;
	
	cin >> s;
	hh = atoi(s.substr(0, 2).c_str());
	mm = atoi(s.substr(3, 5).c_str());
	
	cin >> ahead;
	ahh = 0, ahm = 0;
	ahh = ahead / 60;
	ahm = ahead % 60;
	
	if (mm + ahm >= 60) {
		++ahh;
	}
	mm = (mm + ahm) % 60;
	hh = (hh + ahh) % 24;
	
	if (hh < 10) {
		cout << 0 << hh << ':';
	} else {
		cout << hh << ':';
	}
	
	if (mm < 10) {
		cout << 0 << mm << endl;
	} else {
		cout << mm << endl;
	}

	return 0;
}

